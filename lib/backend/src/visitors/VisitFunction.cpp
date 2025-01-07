#include "Visitor.h"

std::any LLVMIRGenerator::visitFunctionDefinition(FAMMParser::FunctionDefinitionContext* node) {
    std::string functionName = node->IDENTIFIER()->getText();
    llvm::Type* returnType = getLLVMType(visitType(node->type()));

    // Create a vector of parameter types
    std::vector<llvm::Type*> paramTypes;
    for (auto* parameter : node->parameterList()->parameter()) {
        // Получаем тип параметра через visitType
        llvm::Type* paramType = getLLVMType(visitType(parameter->type()));
        paramTypes.push_back(paramType);
    }

    // Create the function
    llvm::FunctionType* functionType = llvm::FunctionType::get(returnType, paramTypes, false);
    llvm::Function* function = llvm::Function::Create(
        functionType, llvm::Function::ExternalLinkage, functionName, &module);

    // Create a new basic block to start insertion into
    llvm::BasicBlock* basicBlock = llvm::BasicBlock::Create(context, "entry", function);
    builder.SetInsertPoint(basicBlock);

    // Handle function parameters
    unsigned idx = 0;
    for (auto& arg : function->args()) {
        arg.setName(node->parameterList()->parameter(idx)->getText());
        llvm::AllocaInst* alloca = builder.CreateAlloca(arg.getType(), nullptr, arg.getName());
        builder.CreateStore(&arg, alloca);
        scopeStack.back().variables.insert({arg.getName().str(), alloca});

        idx++;
    }

    // Visit the function body (block)
    visit(node->block()); // TODO

    // Validate the generated code
    llvm::verifyFunction(*function);

    return function;
}

llvm::Value* LLVMIRGenerator::visitFunctionCall(FAMMParser::FunctionCallContext* node) {
    std::string funcName = node->IDENTIFIER()->getText();

    llvm::Function* function = module.getFunction(funcName);
    if (!function) {
        throw std::runtime_error("Function " + funcName + " not found in module");
    }

    std::vector<llvm::Value*> args;
    for (auto exprCtx : node->expression()) {
        llvm::Value* arg = visitExpression(exprCtx);
        if (!arg) {
            throw std::runtime_error("Error processing function argument " + funcName);
        }
        args.push_back(arg);
    }

    if (args.size() != function->arg_size()) {
        throw std::runtime_error("Inconsistency in the number of arguments in a function call " + funcName);
    }

    return builder.CreateCall(function, args, funcName + "_call");
}

std::any LLVMIRGenerator::visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx) {
    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
    llvm::Type* returnType = currentFunction->getReturnType();

    if (returnCtx->expression()) {
        llvm::Value* returnValue = visitExpression(returnCtx->expression());
        EnsureTypeEq(returnType, returnValue->getType());
        return builder.CreateRet(returnValue);
    } else {
        if (!returnType->isVoidTy()) {
            throw std::runtime_error("Function must return a value, but return statement is empty.");
        }
        return builder.CreateRetVoid();
    }
}