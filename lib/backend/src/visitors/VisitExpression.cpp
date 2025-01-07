#include "Visitor.h"

llvm::Value* LLVMIRGenerator::visitExpression(FAMMParser::ExpressionContext* expressionContext) {
    if (const auto addSubCtx = dynamic_cast<FAMMParser::AddSubExpressionContext*>(expressionContext)) {
        return visitAddSubExpression(addSubCtx);
    } else if (const auto mulDivCtx = dynamic_cast<FAMMParser::MulDivExpressionContext*>(expressionContext)) {
        return visitMulDivExpression(mulDivCtx);
    } else if (const auto constCtx = dynamic_cast<FAMMParser::ConstantExpressionContext*>(expressionContext)) {
        return visitConstant(constCtx->constant());
    } else if (auto parenCtx = dynamic_cast<FAMMParser::ParenExpressionContext*>(expressionContext)) {
        return visitExpression(parenCtx->expression());
    } else if (auto compareCtx = dynamic_cast<FAMMParser::CompareExpressionContext*>(expressionContext)) {
        return visitCompareExpression(compareCtx);
    } else if (auto boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(expressionContext)) {
        return visitBoolExpression(boolCtx);
    } else if (auto negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(expressionContext)) {
        return visitNegationExpression(negationCtx);
    } else if (auto funcCallCtx = dynamic_cast<FAMMParser::FunctionCallExpressionContext*>(expressionContext)) {
        return visitFunctionCall(funcCallCtx->functionCall());
    } else if (auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(expressionContext)) {
        return visitIdentifierExpression(identCtx);
    } else if (auto negativeCtx = dynamic_cast<FAMMParser::NegativeExpressionContext*>(expressionContext)) {
        return visitNegativeExpression(negativeCtx);
    }

    throw std::runtime_error("Unknown expression type");
}

llvm::Value* LLVMIRGenerator::visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx) {
    std::string varName = identCtx->IDENTIFIER()->getText();

    llvm::AllocaInst* alloca = findVariable(varName);
    return builder.CreateLoad(alloca->getAllocatedType(), alloca, varName + "_load");
}

llvm::Value* LLVMIRGenerator::visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx) {
    llvm::Value* exprValue = visitExpression(negativeCtx->expression());

    if (exprValue->getType()->isIntegerTy()) {
        return builder.CreateNeg(exprValue, "negtmp");
    } else if (exprValue->getType()->isFloatingPointTy()) {
        return builder.CreateFNeg(exprValue, "negtmp");
    } else {
        throw std::runtime_error("Unsupported type for negation in visitNegativeExpression");
    }
}

llvm::Value* LLVMIRGenerator::visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx) {
    llvm::Value* left = visitExpression(boolCtx->expression(0));
    llvm::Value* right = visitExpression(boolCtx->expression(1));

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
    llvm::Value* value = visitExpression(negationCtx->expression());
    if (value->getType()->isIntegerTy(1)) {
        return builder.CreateNot(value, "nottmp");
    }
    throw std::runtime_error("Unsupported type of value in bool operation.");
}

llvm::Value* LLVMIRGenerator::visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx) {
    llvm::Value* left  = visitExpression(compareCtx->expression(0));
    llvm::Value* right = visitExpression(compareCtx->expression(1));

    llvm::Type* leftType  = left->getType();
    llvm::Type* rightType = right->getType();

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
    llvm::Value* left  = visitExpression(addSubCtx->expression(0));
    llvm::Value* right = visitExpression(addSubCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

    if (addSubCtx->addOp()->PLUS()) {
        return builder.CreateAdd(left, right, "addtmp");
    }
    if (addSubCtx->addOp()->MINUS()) {
        return builder.CreateSub(left, right, "subtmp");
    }

    throw std::runtime_error("Invalid operation. Possible operations: + or -");
}

llvm::Value* LLVMIRGenerator::visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx) {
    llvm::Value* left  = visitExpression(mulDivCtx->expression(0));
    llvm::Value* right = visitExpression(mulDivCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

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

llvm::Value* LLVMIRGenerator::visitConstant(FAMMParser::ConstantContext* constantContext) {
    if (constantContext->INTEGER_LIT()) {
        // Convert the integer literal text to an integer value
        int intValue = std::stoi(constantContext->INTEGER_LIT()->getText());
        return llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), intValue, true);
    } else if (constantContext->FLOAT_LIT()) {
        // Convert the float literal text to a float value
        float floatValue = std::stof(constantContext->FLOAT_LIT()->getText());
        return llvm::ConstantFP::get(llvm::Type::getFloatTy(context), floatValue);
    } else if (constantContext->STRING_LIT()) {
        // Get the string literal text, assuming it is properly escaped
        std::string strValue = constantContext->STRING_LIT()->getText();
        // Remove quotes if necessary
        strValue = strValue.substr(1, strValue.length() - 2);
        return builder.CreateGlobalStringPtr(strValue, "strtmp");
    } else if (constantContext->BOOL_LIT()) {
        // Convert the boolean literal text to a boolean value
        bool boolValue = (constantContext->BOOL_LIT()->getText() == "true");
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(context), boolValue, false);
    } // TODO: не хватает массива
//    llvm::ConstantArray
    throw std::runtime_error("Unknown constant type");
}