#include "Visitor.h"

llvm::Value* LLVMIRGenerator::visitExpression(FAMMParser::ExpressionContext* expressionContext) {
    if (const auto addSubCtx = dynamic_cast<FAMMParser::AddSubExpressionContext*>(expressionContext)) {
        return visitAddSubExpression(addSubCtx);
    }
    if (const auto mulDivCtx = dynamic_cast<FAMMParser::MulDivExpressionContext*>(expressionContext)) {
        return visitMulDivExpression(mulDivCtx);
    }
    if (const auto constCtx = dynamic_cast<FAMMParser::ConstantExpressionContext*>(expressionContext)) {
        return visitConstantExpression(constCtx->constant());
    }
    if (const auto parenCtx = dynamic_cast<FAMMParser::ParenExpressionContext*>(expressionContext)) {
        return visitExpression(parenCtx->expression());
    }
    if (const auto compareCtx = dynamic_cast<FAMMParser::CompareExpressionContext*>(expressionContext)) {
        return visitCompareExpression(compareCtx);
    }
    if (const auto boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(expressionContext)) {
        return visitBoolExpression(boolCtx);
    }
    if (const auto negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(expressionContext)) {
        return visitNegationExpression(negationCtx);
    }
    if (const auto funcCallCtx = dynamic_cast<FAMMParser::FunctionCallExpressionContext*>(expressionContext)) {
        return visitFunctionCallExpression(funcCallCtx->functionCall());
    }
    if (const auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(expressionContext)) {
        return visitIdentifierExpression(identCtx);
    }
    if (const auto negativeCtx = dynamic_cast<FAMMParser::NegativeExpressionContext*>(expressionContext)) {
        return visitNegativeExpression(negativeCtx);
    }

    throw std::runtime_error("Unknown expression type");
}

llvm::Value* LLVMIRGenerator::visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx) {
    const std::string varName = identCtx->IDENTIFIER()->getText();

    llvm::AllocaInst* alloca = findVariable(varName);
    return builder.CreateLoad(alloca->getAllocatedType(), alloca, varName + "_load");
}

llvm::Value* LLVMIRGenerator::visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx) {
    llvm::Value* exprValue = execute(negativeCtx->expression());

    if (exprValue->getType()->isIntegerTy()) {
        return builder.CreateNeg(exprValue, "negtmp");
    }
    if (exprValue->getType()->isFloatingPointTy()) {
        return builder.CreateFNeg(exprValue, "negtmp");
    }
    throw std::runtime_error("Unsupported type for negation in visitNegativeExpression");
}

llvm::Value* LLVMIRGenerator::visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx) {
    llvm::Value* left  = execute(boolCtx->expression(0));
    llvm::Value* right = execute(boolCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

    if (!left->getType()->isIntegerTy(1) or !right->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Unsupported type of value in bool operation.");
    }

    if (boolCtx->boolOp()->AND()) {
        return builder.CreateAnd(left, right, "andtmp");
    }
    if (boolCtx->boolOp()->OR()) {
        return builder.CreateOr(left, right, "ortmp");
    }

    throw std::runtime_error("Unsupported type in bool operation.");
}

llvm::Value* LLVMIRGenerator::visitNegationExpression(FAMMParser::NegationExpressionContext* negationCtx) {
    if (llvm::Value* value = execute(negationCtx->expression()); value->getType()->isIntegerTy(1)) {
        return builder.CreateNot(value, "nottmp");
    }
    throw std::runtime_error("Unsupported type of value in bool operation.");
}

llvm::Value* LLVMIRGenerator::visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx) {
    llvm::Value* left  = execute(compareCtx->expression(0));
    llvm::Value* right = execute(compareCtx->expression(1));

    const llvm::Type* leftType        = left->getType();
    const llvm::Type* rightType = right->getType();

    EnsureTypeEq(leftType, rightType);

    if (leftType->isIntegerTy(32)) {
        return createIntComparison(compareCtx, left, right);
    }
    if (leftType->isFloatTy()) {
        return createFloatComparison(compareCtx, left, right);
    }
    if (leftType->isIntegerTy(1)) {
        return createBoolComparison(compareCtx, left, right);
    }

    throw std::runtime_error("Unsupported type in comparison operation.");
}

llvm::Value* LLVMIRGenerator::visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx) {
    llvm::Value* left  = execute(addSubCtx->expression(0));
    llvm::Value* right = execute(addSubCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

    // TODO че делать со стрингами ёлы палы
    if (addSubCtx->addOp()->PLUS()) {
        return builder.CreateAdd(left, right, "addtmp");
    }
    if (addSubCtx->addOp()->MINUS()) {
        return builder.CreateSub(left, right, "subtmp");
    }

    throw std::runtime_error("Invalid operation. Possible operations: + or -");
}

llvm::Value* LLVMIRGenerator::visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx) {
    llvm::Value* left  = execute(mulDivCtx->expression(0));
    llvm::Value* right = execute(mulDivCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());
    // TODO че делать со стрингами ёлы палы
    if (mulDivCtx->multOp()->MULT()) {
        return builder.CreateMul(left, right, "multmp");
    }

    if (mulDivCtx->multOp()->DIV()) {
        return builder.CreateFDiv(left, right, "floatDivtmp");
    }

    if (mulDivCtx->multOp()->MOD()) {
        return builder.CreateSRem(left, right, "modtmp");
    }

    if (mulDivCtx->multOp()->FLOOR_DIV()) {
        return builder.CreateSDiv(left, right, "intDivtmp");
    }

    throw RuntimeException("Invalid operation. Possible operations: + or -");
}

llvm::Value* LLVMIRGenerator::visitConstantExpression(FAMMParser::ConstantContext* constantContext) {
    if (constantContext->INTEGER_LIT()) {
        // Convert the integer literal text to an integer value
        const int intValue = std::stoi(constantContext->INTEGER_LIT()->getText());
        return llvm::ConstantInt::get(llvm::Type::getInt32Ty(*context), intValue, true);
    }
    if (constantContext->FLOAT_LIT()) {
        // Convert the float literal text to a float value
        const float floatValue = std::stof(constantContext->FLOAT_LIT()->getText());
        return llvm::ConstantFP::get(llvm::Type::getFloatTy(*context), floatValue);
    }
    if (constantContext->STRING_LIT()) {
        // Get the string literal text, assuming it is properly escaped
        std::string strValue = constantContext->STRING_LIT()->getText();
        // Remove quotes if necessary
        strValue = strValue.substr(1, strValue.length() - 2);
        return builder.CreateGlobalStringPtr(strValue, "strtmp");
    }
    if (constantContext->BOOL_LIT()) {
        // Convert the boolean literal text to a boolean value
        const bool boolValue = (constantContext->BOOL_LIT()->getText() == "true");
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*context), boolValue, false);
    }
    // TODO: не хватает массива
    //    llvm::ConstantArray
    throw std::runtime_error("Unknown constant type");
}

llvm::Value* LLVMIRGenerator::visitFunctionCallExpression(FAMMParser::FunctionCallContext* node) {
    const std::string funcName = node->IDENTIFIER()->getText();

    llvm::Function* function = module->getFunction(funcName);
    if (!function) {
        throw std::runtime_error("Function " + funcName + " not found in module");
    }

    std::vector<llvm::Value*> args;
    for (const auto exprCtx : node->expression()) {
        llvm::Value* arg = execute(exprCtx);
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