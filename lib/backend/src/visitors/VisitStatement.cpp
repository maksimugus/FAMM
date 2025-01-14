#include "Visitor.h"
#include "externalFunctions/ExternalFunctions.h"
#include "helpers/helpers.h"


llvm::Value* LLVMIRGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (const auto declWithDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionStatementContext*>(node)) {
        return visitDeclarationWithDefinition(declWithDef->declarationWithDefinition());
    }
    if (const auto declWithoutDef = dynamic_cast<FAMMParser::DeclarationWithoutDefinitionStatementContext*>(node)) {
        return visitDeclarationWithoutDefinition(declWithoutDef->declarationWithoutDefinition());
    }
    if (const auto definition = dynamic_cast<FAMMParser::DefinitionStatementContext*>(node)) {
        return visitDefinition(definition->definition());
    }
    if (const auto returnStatement = dynamic_cast<FAMMParser::ReturnStatementContext*>(node)) {
        return visitReturnStatement(returnStatement);
    }
    if (const auto blockStatement = dynamic_cast<FAMMParser::BlockStatementContext*>(node)) {
        return visitBlock(blockStatement->block());
    }
    if (const auto arrayElementStatement = dynamic_cast<FAMMParser::ArrayElementDefinitionStatementContext*>(node)) {
        return visitArrayElementDefinition(arrayElementStatement->arrayElementDefinition());
    }

    throw std::runtime_error("Unknown statement context");
}

llvm::Value* LLVMIRGenerator::visitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext* node) {
    // Extract the variable name and type
    for (const auto identifier : node->IDENTIFIER()) {
        std::string variableName = identifier->getText();

        auto typeContext                = node->type();
        llvm::Type* llvmType            = getLLVMType(typeContext);
        llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
        llvm::IRBuilder<> tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());

        llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

        if (!scopeStack.empty()) {
            if (!scopeStack.back().variables.contains(variableName)) {
                scopeStack.back().variables[variableName] = alloca;
            } else {
                throw std::runtime_error("Variable: \'" + variableName + "\' is already exists in scope");
            }
        } else {
            throw std::runtime_error("No active scope to declare variable.");
        }
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
    const std::string variableName = node->IDENTIFIER()->getText();
    const auto typeContext         = node->type();
    const auto expressionContext   = node->expression();
    llvm::Value* initialValue      = execute(expressionContext);
    llvm::Type* llvmType           = getLLVMType(typeContext);

    EnsureTypeEq(llvmType, initialValue->getType());

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    llvm::IRBuilder tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());
    llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

    if (!scopeStack.empty()) {
        if (!scopeStack.back().variables.contains(variableName)) {
            scopeStack.back().variables[variableName] = alloca;
        } else {
            throw std::runtime_error("Variable: \'" + variableName + "\' is already exists in scope");
        }
    } else {
        throw std::runtime_error("No active scope to declare variable.");
    }

    if (llvmType->isArrayTy()) {
        builder.CreateStore(initialValue, alloca)->setAlignment(llvm::Align(8));
        return nullptr;
    }
    builder.CreateStore(initialValue, alloca);
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitDefinition(FAMMParser::DefinitionContext* node) {
    const std::string variableName = node->IDENTIFIER()->getText();

    // Пытаемся найти переменную в скопах
    llvm::AllocaInst* alloca = findVariable(variableName);

    llvm::Value* newValue = visitExpression(node->expression());

    // Убедимся что с типом всё ок
    llvm::Type* variableType = alloca->getAllocatedType();
    EnsureTypeEq(variableType, newValue->getType());

    if (node->assignmentOp()->ASSIGNMENT()) {
        builder.CreateStore(newValue, alloca);
    }

    if (node->assignmentOp()->PLUS_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = nullptr;
        if (IsInt(newValue)) {
            result = builder.CreateAdd(currentValue, newValue);
        }
        if (IsDouble(newValue)) {
            result = builder.CreateFAdd(currentValue, newValue);
        }
        if (IsString(newValue)) {
            result = stringAdd(module, builder, currentValue, newValue);
        }
        builder.CreateStore(result, alloca);
        return nullptr;
    }

    EnsureIntOrDouble(newValue);
    if (node->assignmentOp()->MULT_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = nullptr;
        if (IsInt(newValue)) {
            result = builder.CreateMul(currentValue, newValue);
        }
        if (IsDouble(newValue)) {
            result = builder.CreateFMul(currentValue, newValue);
        }
        builder.CreateStore(result, alloca);
        return nullptr;
    }
    if (node->assignmentOp()->DIV_ASSIGNMENT()) {
        ThrowIfNotDouble(newValue, "Float division cannot be applied to int");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateFDiv(currentValue, newValue);
        builder.CreateStore(result, alloca);
        return nullptr;
    }
    if (node->assignmentOp()->FLOOR_DIV_ASSIGNMENT()) {
        ThrowIfNotInt(newValue, "Integer division cannot be applied to float");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateSDiv(currentValue, newValue); // Assuming integer division
        builder.CreateStore(result, alloca);
        return nullptr;
    }
    if (node->assignmentOp()->MOD_ASSIGNMENT()) {
        ThrowIfNotInt(newValue, "Mod operation cannot be applied to float");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateSRem(currentValue, newValue);
        builder.CreateStore(result, alloca);
        return nullptr;
    }

    if (node->assignmentOp()->MINUS_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = nullptr;
        if (IsInt(newValue)) {
            result = builder.CreateSub(currentValue, newValue);
        }
        if (IsDouble(newValue)) {
            result = builder.CreateFSub(currentValue, newValue);
        }
        builder.CreateStore(result, alloca);
        return nullptr;
    }

    return nullptr;
}
llvm::Value* LLVMIRGenerator::visitArrayElementDefinition(FAMMParser::ArrayElementDefinitionContext* arrayElementCtx) {
    auto res = execute(arrayElementCtx->expression(0));
    llvm::Type* pointedType;
    bool isAlloca = llvm::isa<llvm::AllocaInst>(res);

    // Определяем базовый тип массива
    if (isAlloca) {
        // Если res это результат alloca, берем тип, на который он указывает
        pointedType = res->getType()->getContainedType(0);
    } else {
        // Для значения массива берем его тип напрямую
        pointedType = res->getType();
    }

    // Получаем индекс
    llvm::Value* index = execute(arrayElementCtx->expression(1));
    if (!index->getType()->isIntegerTy(64)) {
        throw std::runtime_error("Array index must be an integer.");
    }

    // Проверяем, что это действительно массив
    if (!pointedType->isArrayTy()) {
        throw std::runtime_error("Left expression must be an array type.");
    }

    auto* arrayType = llvm::cast<llvm::ArrayType>(pointedType);
    llvm::Type* elementType = arrayType->getElementType();

    // Если res не является результатом alloca, нам нужно создать временное хранилище
    llvm::Value* arrayPtr;
    if (!isAlloca) {
        // Создаем временное хранилище для массива
        arrayPtr = builder.CreateAlloca(pointedType, nullptr, "arrayTemp");
        builder.CreateStore(res, arrayPtr);
    } else {
        arrayPtr = res;
    }

    // Создаем указатель на элемент массива
    std::vector<llvm::Value*> indices = {
        builder.getInt64(0),  // Первый индекс всегда 0 для разыменования указателя
        index                 // Индекс элемента массива
    };

    llvm::Value* elementPtr = builder.CreateInBoundsGEP(
        pointedType,
        arrayPtr,
        indices,
        "arrayElementPtr"
    );
    llvm::Value* valueToStore = execute(arrayElementCtx->expression(2));
    if (valueToStore->getType() != elementType) {
        throw std::runtime_error("Type mismatch: Cannot store value in array element.");
    }

    builder.CreateStore(valueToStore, elementPtr);

    return nullptr;

}



llvm::Value* LLVMIRGenerator::visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx) {
    const llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    const llvm::Type* returnType          = currentFunction->getReturnType();

    if (returnCtx->expression()) {
        llvm::Value* returnValue = visitExpression(returnCtx->expression());
        EnsureTypeEq(returnType, returnValue->getType());
        return builder.CreateRet(returnValue);
    }
    if (!returnType->isVoidTy()) { // TODO return; когда функция nih
        throw std::runtime_error("Function must return a value, but return statement is empty.");
    }
    return builder.CreateRetVoid();
}
