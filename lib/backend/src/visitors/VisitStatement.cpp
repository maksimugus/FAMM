#include "Visitor.h"
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
    EnsureIntOrDouble(newValue);

    if (node->assignmentOp()->ASSIGNMENT()) {
        builder.CreateStore(newValue, alloca);
    }
    if (node->assignmentOp()->MULT_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result = nullptr;
        if (IsInt(newValue))
            result = builder.CreateMul(currentValue, newValue);
        if (IsDouble(newValue))
            result = builder.CreateFMul(currentValue, newValue);
        builder.CreateStore(result, alloca);
    }
    if (node->assignmentOp()->DIV_ASSIGNMENT()) {
        ThrowIfNotDouble(newValue, "Float division cannot be applied to int");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateFDiv(currentValue, newValue);
        builder.CreateStore(result, alloca);
    }
    if (node->assignmentOp()->FLOOR_DIV_ASSIGNMENT()) {
        ThrowIfNotInt(newValue, "Integer division cannot be applied to float");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateSDiv(currentValue, newValue); // Assuming integer division
        builder.CreateStore(result, alloca);
    }
    if (node->assignmentOp()->MOD_ASSIGNMENT()) {
        ThrowIfNotInt(newValue, "Mod operation cannot be applied to float");
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result       = builder.CreateSRem(currentValue, newValue);
        builder.CreateStore(result, alloca);
    }
    if (node->assignmentOp()->PLUS_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result = nullptr;
        if (IsInt(newValue))
            result = builder.CreateAdd(currentValue, newValue);
        if (IsDouble(newValue))
            result = builder.CreateFAdd(currentValue, newValue);
        builder.CreateStore(result, alloca);
    }
    if (node->assignmentOp()->MINUS_ASSIGNMENT()) {
        llvm::Value* currentValue = builder.CreateLoad(variableType, alloca, variableName + "_load");
        llvm::Value* result = nullptr;
        if (IsInt(newValue))
            result = builder.CreateSub(currentValue, newValue);
        if (IsDouble(newValue))
            result = builder.CreateFSub(currentValue, newValue);
        builder.CreateStore(result, alloca);
    }

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
