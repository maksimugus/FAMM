#include "Visitor.h"
#include "externalFunctions/ExternalFunctions.h"
#include "helpers/helpers.h"

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
    if (const auto arrayAccessCtx = dynamic_cast<FAMMParser::ArrayAccessExpressionContext*>(expressionContext)) {
        return visitArrayAccessExpression(arrayAccessCtx);
    }

    throw std::runtime_error("Unknown expression type");
}

llvm::Value* LLVMIRGenerator::visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx) {
    const std::string varName = identCtx->IDENTIFIER()->getText();

    llvm::AllocaInst* alloca = findVariable(varName);

    // Проверить, является ли тип массива
    //    if (alloca->getAllocatedType()->isArrayTy()) {
    //        // Если переменная — массив, вернуть указатель на массив
    //        llvm::Value* a = alloca;
    //        return alloca;
    //    }

    // Если переменная не массив, вернуть значение через загрузку
    llvm::LoadInst* loadInst = builder.CreateLoad(alloca->getAllocatedType(), alloca, varName + "_load");
    return loadInst;
}

llvm::Value* LLVMIRGenerator::visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx) {
    llvm::Value* exprValue = execute(negativeCtx->expression());

    if (IsInt(exprValue)) {
        return builder.CreateNeg(exprValue, "negtmp");
    }
    if (IsDouble(exprValue)) {
        return builder.CreateFNeg(exprValue, "negtmp");
    }
    if (IsString(exprValue)) {
        return stringNeg(*module, builder, exprValue);
    }
    throw std::runtime_error(
        "Unsupported type for negation in visitNegativeExpression (support only string, int or float)");
}

llvm::Value* LLVMIRGenerator::visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx) {
    llvm::Value* left  = execute(boolCtx->expression(0));
    llvm::Value* right = execute(boolCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

    if (!IsBool(left)) {
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
    if (llvm::Value* value = execute(negationCtx->expression()); IsBool(value)) {
        return builder.CreateNot(value, "nottmp");
    }
    throw std::runtime_error("Unsupported type of value in bool operation.");
}

llvm::Value* LLVMIRGenerator::visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx) {
    llvm::Value* left  = execute(compareCtx->expression(0));
    llvm::Value* right = execute(compareCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());

    if (IsInt(left)) {
        return createIntComparison(compareCtx, left, right);
    }
    if (IsDouble(left)) {
        return createDoubleComparison(compareCtx, left, right);
    }
    if (IsBool(left)) {
        return createBoolComparison(compareCtx, left, right);
    }
    if (IsString(left)) {
        return createStringComparison(compareCtx, left, right);
    }

    throw std::runtime_error("Unsupported type in comparison operation.");
}

llvm::Value* LLVMIRGenerator::visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx) {
    llvm::Value* left  = execute(addSubCtx->expression(0));
    llvm::Value* right = execute(addSubCtx->expression(1));

    EnsureTypeEq(left->getType(), right->getType());
    if (IsBool(left)) {
        throw std::runtime_error(R"('+' and '-' can't be applied to bool)");
    }
    if (addSubCtx->addOp()->PLUS()) {
        if (IsDouble(left)) {
            return builder.CreateFAdd(left, right, "addtmp");
        }
        if (IsInt(left)) {
            return builder.CreateAdd(left, right, "addtmp");
        }
        if (IsString(left)) {
            return stringAdd(module, builder, left, right);
        }

        throw std::runtime_error("Unsupported type for '+'");
    }
    if (addSubCtx->addOp()->MINUS()) {
        if (IsDouble(left)) {
            return builder.CreateFSub(left, right, "subtmp");
        }
        if (IsInt(left)) {
            return builder.CreateSub(left, right, "subtmp");
        }
        if (IsString(left)) {
            return stringAdd(module, builder, left, stringNeg(*module, builder, right));
        }
        throw std::runtime_error("Unsupported type for '-'");
    }

    throw std::runtime_error("Invalid operation. Possible operations: + or -");
}

llvm::Value* LLVMIRGenerator::visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx) {
    llvm::Value* left  = execute(mulDivCtx->expression(0));
    llvm::Value* right = execute(mulDivCtx->expression(1));

    if (mulDivCtx->multOp()->MULT()) {
        if (IsString(left) and IsInt(right)) {
            return stringMult(*module, builder, left, right);
        }
        if (IsString(right) and IsInt(left)) {
            return stringMult(*module, builder, right, left);
        }

        EnsureTypeEq(left->getType(), right->getType());
        EnsureIntOrDouble(left);
        if (IsDouble(left)) {
            return builder.CreateFMul(left, right, "multmp");
        }
        return builder.CreateMul(left, right, "multmp");
    }

    EnsureTypeEq(left->getType(), right->getType());
    if (mulDivCtx->multOp()->DIV()) {
        ThrowIfNotDouble(left, "Float division can be can only be applied to the float type");
        return builder.CreateFDiv(left, right, "doubleDivtmp");
    }

    if (mulDivCtx->multOp()->MOD()) {
        ThrowIfNotInt(left, "Mod operation can be can only be applied to the int type");
        return builder.CreateSRem(left, right, "modtmp");
    }

    if (mulDivCtx->multOp()->FLOOR_DIV()) {
        ThrowIfNotInt(left, "Mod operation can be can only be applied to the int type");
        return builder.CreateSDiv(left, right, "intDivtmp");
    }

    throw RuntimeException("Invalid operation. Possible operations: + or -");
}

llvm::Value* LLVMIRGenerator::visitConstantExpression(FAMMParser::ConstantContext* constantContext) {
    if (constantContext->INTEGER_LIT()) {
        // Convert the integer literal text to an integer value
        const int64_t intValue = std::stoll(constantContext->INTEGER_LIT()->getText());
        return llvm::ConstantInt::get(llvm::Type::getInt64Ty(*context), intValue, true);
    }

    if (constantContext->FLOAT_LIT()) {
        // Convert the float literal text to a float value
        const double doubleValue = std::stod(constantContext->FLOAT_LIT()->getText());
        return llvm::ConstantFP::get(llvm::Type::getDoubleTy(*context), doubleValue);
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
        const bool boolValue = constantContext->BOOL_LIT()->getText() == "true";
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*context), boolValue, false);
    }

    if (auto* arrayLiteral = constantContext->arrayLiteral()) {
        auto expressions          = arrayLiteral->expression();
        llvm::Value* firstElement = visitExpression(expressions[0]);
        llvm::Type* elementType   = firstElement->getType();

        std::vector<llvm::Constant*> elements;
        for (auto* expression : expressions) {
            llvm::Value* elementValue = visitExpression(expression);
            if (elementValue->getType() != elementType) {
                throw std::runtime_error("Type mismatch in array elements.");
            }

            auto* constantElement = llvm::dyn_cast<llvm::Constant>(elementValue);

            elements.push_back(constantElement);
        }

        auto* arrayType = llvm::ArrayType::get(elementType, elements.size());
        return llvm::ConstantArray::get(arrayType, elements);
    }

    throw std::runtime_error("Unknown constant type");
}

llvm::Value* LLVMIRGenerator::visitFunctionCallExpression(FAMMParser::FunctionCallContext* node) {
    const std::string funcName = node->IDENTIFIER()->getText();

    std::vector<llvm::Value*> args;
    for (const auto exprCtx : node->expression()) {
        llvm::Value* arg = execute(exprCtx);
        if (!arg) {
            throw std::runtime_error("Error processing function argument " + funcName);
        }
        args.push_back(arg);
    }

    if (funcName == "display") {
        if (args.size() > 1) {
            return display(module, builder, "", args);
        }
        return sdisplay(module, builder, "", args[0]);
    }

    if (funcName == "to_int") {
        if (args.size() > 1) {
            throw std::runtime_error("Too many args");
        }
        return intCast(args[0], builder, *module);
    }
    if (funcName == "to_float") {
        if (args.size() > 1) {
            throw std::runtime_error("Too many args");
        }
        return floatCast(args[0], builder, *module);
    }
    if (funcName == "to_bool") {
        if (args.size() > 1) {
            throw std::runtime_error("Too many args");
        }
        return boolCast(args[0], builder, *module);
    }
    if (funcName == "to_string") {
        if (args.size() > 1) {
            throw std::runtime_error("Too many args");
        }
        return stringCast(args[0], builder, *module);
    }

    llvm::Function* function = module->getFunction(funcName);
    if (!function) {
        throw std::runtime_error("Function " + funcName + " not found in module");
    }

    if (args.size() != function->arg_size()) {
        throw std::runtime_error("Inconsistency in the number of arguments in a function call " + funcName);
    }

    return builder.CreateCall(function, args);
}

llvm::Value* LLVMIRGenerator::visitArrayAccessExpression(FAMMParser::ArrayAccessExpressionContext* arrayAccessCtx) {
    auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(arrayAccessCtx->expression(0));
    if (!identCtx) {
        throw std::runtime_error("No access to array expression");
    }

    const std::string varName = identCtx->IDENTIFIER()->getText();
    llvm::AllocaInst* alloca  = findVariable(varName);
    llvm::Type* elementType   = alloca->getAllocatedType()->getContainedType(0);

    // Получаем индекс
    llvm::Value* index = execute(arrayAccessCtx->expression(1));
    if (!index->getType()->isIntegerTy(64)) {
        throw std::runtime_error("Array index must be an integer.");
    }

    auto* arrayType = alloca->getAllocatedType();
    // Проверяем, что это действительно массив
    if (!arrayType->isArrayTy()) {
        throw std::runtime_error("Left expression must be an array type.");
    }

    // Создаем указатель на элемент массива
    std::vector<llvm::Value*> indices = {
        builder.getInt64(0), // Первый индекс всегда 0 для разыменования указателя
        index // Индекс элемента массива
    };

    llvm::Value* elementPtr = builder.CreateInBoundsGEP(arrayType, alloca, indices, "arrayElementPtr");

    // Загружаем значение
    return builder.CreateLoad(elementType, elementPtr, "arrayLoad");
}
