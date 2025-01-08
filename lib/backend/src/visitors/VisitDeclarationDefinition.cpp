#include "Visitor.h"

std::any LLVMIRGenerator::visitDeclaration(FAMMParser::DeclarationContext* node) {
    if (node->declarationWithDefinition()) {
        return visitDeclarationWithDefinition(node->declarationWithDefinition());
    }
    if (node->declarationWithoutDefinition()) {
        return visitDeclarationWithoutDefinition(node->declarationWithoutDefinition());
    }
    return nullptr;
}

std::any LLVMIRGenerator::visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
    std::string variableName  = node->IDENTIFIER()->getText();
    auto typeContext          = node->type();
    std::string variableType  = visitType(typeContext);
    auto expressionContext    = node->expression();
    llvm::Value* initialValue = visitExpression(expressionContext);
    llvm::Type* llvmType      = getLLVMType(variableType);

    EnsureTypeEq(llvmType, initialValue->getType());

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    llvm::IRBuilder<> tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());
    llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

    if (!scopeStack.empty()) {
        if (!scopeStack.back().variables.contains(variableName)){
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

std::any LLVMIRGenerator::visitDefinition(FAMMParser::DefinitionContext* node) {
    std::string variableName = node->IDENTIFIER()->getText();

    // Пытаемся найти переменную в скопах
    llvm::AllocaInst* alloca = findVariable(variableName);

    llvm::Value* newValue = visitExpression(node->expression());

    // Убедимся что с типом всё ок
    llvm::Type* variableType = alloca->getAllocatedType();
    EnsureTypeEq(variableType, newValue->getType());

    builder.CreateStore(newValue, alloca);

    return nullptr;
}

std::any LLVMIRGenerator::visitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext* node) {
    // Extract the variable name and type
    for(const auto identifier : node->IDENTIFIER()) {
        std::string variableName = identifier->getText();

        auto typeContext = node->type();
        std::string variableType = visitType(typeContext);
        llvm::Type* llvmType = getLLVMType(variableType);
        llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
        llvm::IRBuilder<> tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());

        llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

        if (!scopeStack.empty()) {
            if (!scopeStack.back().variables.contains(variableName)){
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