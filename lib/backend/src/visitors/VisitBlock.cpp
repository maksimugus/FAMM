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
    llvm::BasicBlock* conditionBlock = llvm::BasicBlock::Create(context, "whilecond", currentFunction);
    llvm::BasicBlock* loopBlock      = llvm::BasicBlock::Create(context, "whileloop", currentFunction);
    llvm::BasicBlock* afterLoopBlock = llvm::BasicBlock::Create(context, "afterwhile", currentFunction);

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
    enterScope(); // Входим в новую область видимости
    for (const auto line : whileBlockCtx->scope()->line()) {
        execute(line);
    }
    exitScope(); // Выходим из области видимости
    builder.CreateBr(conditionBlock);

    // Устанавливаем точку вставки в блок после цикла
    builder.SetInsertPoint(afterLoopBlock);

    return nullptr;
}


llvm::Value* LLVMIRGenerator::visitForBlock(FAMMParser::ForBlockContext* forBlockCtx) {
    // llvm::Function* currentFunction = builder.GetInsertBlock()->getParent(); // TODO
    //
    // // Create basic blocks for loop components
    // llvm::BasicBlock* loopCondBB = llvm::BasicBlock::Create(context, "loopcond", currentFunction);
    // llvm::BasicBlock* loopBodyBB = llvm::BasicBlock::Create(context, "loopbody", currentFunction);
    // llvm::BasicBlock* loopIncBB = llvm::BasicBlock::Create(context, "loopinc", currentFunction);
    // llvm::BasicBlock* afterLoopBB = llvm::BasicBlock::Create(context, "afterloop", currentFunction);
    //
    // // Generate code for initialization
    // visitDeclarationWithDefinition(forBlockCtx->declarationWithDefinition());
    //
    // // Get the loop variable's name and AllocaInst
    // std::string loopVarName = forBlockCtx->declarationWithDefinition()->IDENTIFIER()->getText();
    // llvm::AllocaInst* loopVarAlloca = namedValues[loopVarName];
    //
    // // Jump to loop condition
    // builder.CreateBr(loopCondBB);
    //
    // // Set insertion point to loop condition block
    // builder.SetInsertPoint(loopCondBB);
    //
    // // Load the loop variable
    // llvm::Value* loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
    //
    // // Visit the end value expression
    // const auto endValue = std::any_cast<llvm::Value*>(visit(forBlockCtx->expression(0)));
    //
    // // Compare loop variable with end value
    // llvm::Value* condVal = builder.CreateICmpSLT(loopVar, endValue, "loopcond");
    //
    // // Conditional branch to loop body or after loop
    // builder.CreateCondBr(condVal, loopBodyBB, afterLoopBB);
    //
    // // Set insertion point to loop body block
    // builder.SetInsertPoint(loopBodyBB);
    //
    // // Visit the loop body block
    // visitBlock(forBlockCtx->block());
    //
    // // Branch to increment block after loop body
    // builder.CreateBr(loopIncBB);
    //
    // // Set insertion point to increment block
    // builder.SetInsertPoint(loopIncBB);
    //
    // // Load the loop variable again
    // loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
    //
    // // Visit the step value expression
    // const auto stepValue = std::any_cast<llvm::Value*>(visit(forBlockCtx->expression(1)));
    //
    // // Compute the new value for loop variable
    // llvm::Value* nextValue = builder.CreateAdd(loopVar, stepValue, "nextValue");
    //
    // // Store the updated value back to the loop variable
    // builder.CreateStore(nextValue, loopVarAlloca);
    //
    // // Branch back to loop condition
    // builder.CreateBr(loopCondBB);
    //
    // // Set insertion point to the block after the loop
    // builder.SetInsertPoint(afterLoopBB);

    return nullptr;
}


llvm::Value* LLVMIRGenerator::visitFunctionBlock(FAMMParser::FunctionBlockContext* node) {
    const std::string functionName = node->IDENTIFIER()->getText();
    llvm::Type* returnType         = getLLVMType(visitType(node->type()));

    // Create a vector of parameter types
    std::vector<llvm::Type*> paramTypes;
    for (auto* parameter : node->parameterList()->parameter()) {
        // Получаем тип параметра через visitType
        llvm::Type* paramType = getLLVMType(visitType(parameter->type()));
        paramTypes.push_back(paramType);
    }

    // Create the function
    llvm::FunctionType* functionType = llvm::FunctionType::get(returnType, paramTypes, false);
    llvm::Function* function =
        llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, functionName, &module);

    // Запомним блок
    llvm::BasicBlock* prevBlock = builder.GetInsertBlock();

    // Create a new basic block to start insertion into
    llvm::BasicBlock* basicBlock = llvm::BasicBlock::Create(context, "entry", function);
    builder.SetInsertPoint(basicBlock);

    // Handle function parameters
    unsigned idx = 0;
    enterScope();
    for (auto& arg : function->args()) {
        arg.setName(node->parameterList()->parameter(idx)->IDENTIFIER()->getText());
        llvm::AllocaInst* alloca = builder.CreateAlloca(arg.getType(), nullptr, arg.getName());
        builder.CreateStore(&arg, alloca);
        scopeStack.back().variables.insert({arg.getName().str(), alloca});

        idx++;
    }

    // Visit the function body (block)
    execute(node->scope());

    // Validate the generated code
    llvm::verifyFunction(*function);

    builder.SetInsertPoint(prevBlock);
    exitScope();

    return module.getFunction("main");;
}


llvm::Value* LLVMIRGenerator::visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx) {
    llvm::Value* condition = execute(ifBlockCtx->expression());

    if (!condition->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Condition in if statement must be a boolean expression.");
    }

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    llvm::BasicBlock* thenBlock  = llvm::BasicBlock::Create(context, "then", currentFunction);
    llvm::BasicBlock* elseBlock  = llvm::BasicBlock::Create(context, "else", currentFunction);
    llvm::BasicBlock* mergeBlock = llvm::BasicBlock::Create(context, "ifcont", currentFunction);

    builder.CreateCondBr(condition, thenBlock, elseBlock);

    // Генерируем 'then' блок
    builder.SetInsertPoint(thenBlock);

    execute(ifBlockCtx->scope(0));

    builder.CreateBr(mergeBlock);

    // Генерируем 'else' блок
    builder.SetInsertPoint(elseBlock);

    if (ifBlockCtx->ELSE()) {
        execute(ifBlockCtx->scope(1));
    }

    builder.CreateBr(mergeBlock);

    builder.SetInsertPoint(mergeBlock);

    return nullptr;
}
