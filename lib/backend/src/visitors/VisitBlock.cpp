#include "Visitor.h"
#include "llvm/IR/Verifier.h"

llvm::Value* LLVMIRGenerator::visitBlock(FAMMParser::BlockContext* block) {
    if (const auto forLoop = dynamic_cast<FAMMParser::ForBlockContext*>(block)) {
        return visitForBlock(forLoop);
    }
    if (const auto ifBlock = dynamic_cast<FAMMParser::IfBlockContext*>(block)) {
        return visitIfBlock(ifBlock);
    }
    if (const auto funcDef = dynamic_cast<FAMMParser::FunctionBlockContext*>(block)) {
        return visitFunctionBlock(funcDef);
    }
    if (const auto whileBlock = dynamic_cast<FAMMParser::WhileBlockContext*>(block)) {
        return visitWhileBlock(whileBlock);
    }
    throw std::invalid_argument("Unknown block type");
}


llvm::Value* LLVMIRGenerator::visitWhileBlock(FAMMParser::WhileBlockContext* whileBlockCtx) {
    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    // Создаем базовые блоки для условия, тела цикла и выхода из цикла
    llvm::BasicBlock* conditionBlock = llvm::BasicBlock::Create(*context, "whilecond", currentFunction);
    llvm::BasicBlock* loopBlock      = llvm::BasicBlock::Create(*context, "whileloop", currentFunction);
    llvm::BasicBlock* afterLoopBlock = llvm::BasicBlock::Create(*context, "afterwhile", currentFunction);

    // Переход к блоку условия
    builder.CreateBr(conditionBlock);
    builder.SetInsertPoint(conditionBlock);

    // Оцениваем условие цикла
    llvm::Value* condition = execute(whileBlockCtx->expression());
    if (!condition->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Condition in while statement must be a boolean expression.");
    }

    // Создаем условный переход
    builder.CreateCondBr(condition, loopBlock, afterLoopBlock);

    // Генерируем тело цикла
    builder.SetInsertPoint(loopBlock);
    execute(whileBlockCtx->scope());
    // если в скопе вайле есть ретурн, то нет смысле в br
    if (builder.GetInsertBlock()->getTerminator() == nullptr) {
        builder.CreateBr(conditionBlock);
    }

    // Устанавливаем точку вставки в блок после цикла
    builder.SetInsertPoint(afterLoopBlock);

    return nullptr;
}


llvm::Value* LLVMIRGenerator::visitForBlock(FAMMParser::ForBlockContext* forBlockCtx) {
    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    // Создание базовых блоков для цикла
    llvm::BasicBlock* loopCondBB  = llvm::BasicBlock::Create(*context, "loopcond", currentFunction);
    llvm::BasicBlock* loopBodyBB  = llvm::BasicBlock::Create(*context, "loopbody", currentFunction);
    llvm::BasicBlock* loopIncBB   = llvm::BasicBlock::Create(*context, "loopinc", currentFunction);
    llvm::BasicBlock* afterLoopBB = llvm::BasicBlock::Create(*context, "afterloop", currentFunction);

    // Инициализация переменной цикла
    execute(forBlockCtx->declarationWithDefinition());
    const std::string loopVarName = forBlockCtx->declarationWithDefinition()->IDENTIFIER()->getText();
    llvm::AllocaInst* loopVarAlloca = findVariable(loopVarName);

    // Переход на блок условие
    builder.CreateBr(loopCondBB);
    builder.SetInsertPoint(loopCondBB);

    // Загрузка текущего значения переменной цикла
    llvm::Value* loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
    // Условие выхода из цикла
    llvm::Value* endValue = execute(forBlockCtx->expression(0));
    EnsureTypeEq(loopVarAlloca->getAllocatedType(), endValue->getType());

    llvm::Value* condVal = nullptr;
    if (loopVar->getType()->isIntegerTy()) {
        condVal = builder.CreateICmpSLT(loopVar, endValue, "loopcond");
    } else if (loopVar->getType()->isFloatingPointTy()) {
        condVal = builder.CreateFCmpULT(loopVar, endValue, "loopcond");
    } else {
        throw std::runtime_error("Can't compare types");
    }

    builder.CreateCondBr(condVal, loopBodyBB, afterLoopBB);

    // Тело цикла
    builder.SetInsertPoint(loopBodyBB);
    execute(forBlockCtx->scope());
    builder.CreateBr(loopIncBB);

    // Блок инкремента
    builder.SetInsertPoint(loopIncBB);
    loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
    llvm::Value* stepValue = execute(forBlockCtx->expression(1));
    llvm::Value* nextValue = builder.CreateAdd(loopVar, stepValue, "nextValue");
    builder.CreateStore(nextValue, loopVarAlloca)->setAlignment(llvm::Align(8));;
    builder.CreateBr(loopCondBB);

    // Переход к блоку после цикла
    builder.SetInsertPoint(afterLoopBB);

    return nullptr;
}


llvm::Value* LLVMIRGenerator::visitFunctionBlock(FAMMParser::FunctionBlockContext* node) {
    const std::string functionName = node->IDENTIFIER()->getText();

    if (module->getFunction(functionName) or functionName == "display") {
        throw std::runtime_error("A function with the same name already exists.");
    }

    llvm::Type* returnType;
    if (node->NIH_LIT()) {
        returnType = llvm::Type::getVoidTy(*context);
    } else {
        returnType = getLLVMType(node->type());
    }

    // Получаем вектор параметров функции
    std::vector<llvm::Type*> paramTypes;
    if (node->parameterList()){
        for (auto* parameter : node->parameterList()->parameter()) {
            llvm::Type* paramType = getLLVMType(parameter->type());
            paramTypes.push_back(paramType);
        }
    }

    // Создаем функцию
    llvm::FunctionType* functionType = llvm::FunctionType::get(returnType,paramTypes, false);
    llvm::Function* function =
        llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, functionName, *module);
    // Запомним блок
    llvm::BasicBlock* prevBlock = builder.GetInsertBlock();

    // создаем тело функции
    llvm::BasicBlock* basicBlock = llvm::BasicBlock::Create(*context, "entry", function);
    builder.SetInsertPoint(basicBlock);

    // нужно в скоп добавить все параметры функции
    unsigned idx = 0;
    enterScope();
    for (auto& arg : function->args()) {
        arg.setName(node->parameterList()->parameter(idx)->IDENTIFIER()->getText());
        llvm::AllocaInst* alloca = builder.CreateAlloca(arg.getType(), nullptr, arg.getName());
        builder.CreateStore(&arg, alloca)->setAlignment(llvm::Align(8));
        scopeStack.back().variables.insert({arg.getName().str(), alloca});

        idx++;
    }

    // посетим скоп функции
    execute(node->scope());

    // Проверим полученную функцию
    llvm::verifyFunction(*function, &llvm::errs());

    builder.SetInsertPoint(prevBlock);
    exitScope();

    return module->getFunction("main");;
}


llvm::Value* LLVMIRGenerator::visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx) {
    llvm::Value* condition = execute(ifBlockCtx->expression());

    if (!condition->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Condition in if statement must be a boolean expression.");
    }

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    llvm::BasicBlock* thenBlock  = llvm::BasicBlock::Create(*context, "then", currentFunction);
    llvm::BasicBlock* elseBlock  = llvm::BasicBlock::Create(*context, "else", currentFunction);
    llvm::BasicBlock* mergeBlock = llvm::BasicBlock::Create(*context, "ifcont", currentFunction);

    builder.CreateCondBr(condition, thenBlock, elseBlock);

    // Генерируем 'then' блок
    builder.SetInsertPoint(thenBlock);

    execute(ifBlockCtx->scope(0));

    if (builder.GetInsertBlock()->getTerminator() == nullptr) {
        builder.CreateBr(mergeBlock);
    }

    // Генерируем 'else' блок
    builder.SetInsertPoint(elseBlock);

    if (ifBlockCtx->ELSE()) {
        execute(ifBlockCtx->scope(1));
    }

    builder.CreateBr(mergeBlock);

    builder.SetInsertPoint(mergeBlock);

    return nullptr;
}
