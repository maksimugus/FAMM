#include "Visitor.h"


std::any LLVMIRGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (const auto declWithDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionContext*>(node)) {
        return visitDeclarationWithDefinition(declWithDef);
    }
    //     if (const auto declWithoutDef = dynamic_cast<FAMMParser::DeclarationWithoutDefinitionContext*>(node)) {
    //         return visitDeclarationWithoutDefinition(declWithoutDef);
    //     } // TODO
    if (const auto definition = dynamic_cast<FAMMParser::DefinitionContext*>(node)) {
        return visitDefinition(definition);
    }

    if (const auto returnStatement = dynamic_cast<FAMMParser::ReturnStatementContext*>(node)) {
        return visitReturnStatement(returnStatement);
    }

    throw std::runtime_error("Unknown statement context");
}

std::any LLVMIRGenerator::visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
    const std::string variableName           = node->IDENTIFIER()->getText();
    const auto typeContext                = node->type();
    const std::string variableType     = visitType(typeContext);
    const auto expressionContext    = node->expression();
    llvm::Value* initialValue = visitExpression(expressionContext);
    llvm::Type* llvmType      = getLLVMType(variableType);

    EnsureTypeEq(llvmType, initialValue->getType());

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    llvm::IRBuilder tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());
    llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

    if (!scopeStack.empty()) {
        scopeStack.back().variables[variableName] = alloca;
    } else {
        throw std::runtime_error("No active scope to declare variable.");
    }

    builder.CreateStore(initialValue, alloca);
    return nullptr;
}

std::any LLVMIRGenerator::visitDefinition(FAMMParser::DefinitionContext* node) {
    const std::string variableName = node->IDENTIFIER()->getText();

    // Пытаемся найти переменную в скопах
    llvm::AllocaInst* alloca = findVariable(variableName);

    llvm::Value* newValue = visitExpression(node->expression());

    // Убедимся что с типом всё ок
    const llvm::Type* variableType = alloca->getAllocatedType();
    EnsureTypeEq(variableType, newValue->getType());

    builder.CreateStore(newValue, alloca);

    return nullptr;
}

std::any LLVMIRGenerator::visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx) {
    const llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    const llvm::Type* returnType = currentFunction->getReturnType();

    if (returnCtx->expression()) {
        llvm::Value* returnValue = visitExpression(returnCtx->expression());
        EnsureTypeEq(returnType, returnValue->getType());
        return builder.CreateRet(returnValue);
    }
    if (!returnType->isVoidTy()) {
        throw std::runtime_error("Function must return a value, but return statement is empty.");
    }
    return builder.CreateRetVoid();
}
