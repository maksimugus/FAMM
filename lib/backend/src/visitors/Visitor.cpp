#include "Visitor.h"

#include <stdexcept>


LLVMIRGenerator::LLVMIRGenerator() : context(), builder(context), module("my_module", context) {}

void LLVMIRGenerator::printIR() const {
    module.print(llvm::outs(), nullptr);
}

std::any LLVMIRGenerator::visit(tree::ParseTree* node) {
    if (const auto program = dynamic_cast<FAMMParser::ProgramContext*>(node)) {
        return visitProgram(program);
    }
    return nullptr;
}

std::any LLVMIRGenerator::visitProgram(FAMMParser::ProgramContext* node) {
    // Create the main function: int main()
    llvm::FunctionType* mainType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
    llvm::Function* mainFunction = llvm::Function::Create(mainType, llvm::Function::ExternalLinkage, "main", module);

    // Create a new basic block to start insertion into
    llvm::BasicBlock* entry = llvm::BasicBlock::Create(context, "entry", mainFunction);
    builder.SetInsertPoint(entry);

    // Visit each line in the program
    for (const auto line : node->line()) {
        visitLine(line);
    }

    // Return 0 from main
    builder.CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), 0));

    // Verify the function
    llvm::verifyFunction(*mainFunction);

    return nullptr;
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
    }

    throw std::runtime_error("Unknown constant type");
}

llvm::Value* LLVMIRGenerator::visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx) {
    llvm::Value* left  = visitExpression(addSubCtx->expression(0));
    llvm::Value* right = visitExpression(addSubCtx->expression(1));
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

llvm::Value* LLVMIRGenerator::createIntComparison(
    FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right) {
    if (compareCtx->compareOp()->EQ()) {
        return builder.CreateICmpEQ(left, right, "eqtmp");
    }
    if (compareCtx->compareOp()->NEQ()) {
        return builder.CreateICmpNE(left, right, "neqtmp");
    }
    if (compareCtx->compareOp()->LT()) {
        return builder.CreateICmpSLT(left, right, "lttmp");
    }
    if (compareCtx->compareOp()->LE()) {
        return builder.CreateICmpSLE(left, right, "letmp");
    }
    if (compareCtx->compareOp()->GT()) {
        return builder.CreateICmpSGT(left, right, "gttmp");
    }
    if (compareCtx->compareOp()->GE()) {
        return builder.CreateICmpSGE(left, right, "getmp");
    }

    throw std::runtime_error("Invalid comparison operation for integers.");
}

llvm::Value* LLVMIRGenerator::createFloatComparison(
    FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right) {
    if (compareCtx->compareOp()->EQ()) {
        return builder.CreateFCmpUEQ(left, right, "feqtmp");
    }
    if (compareCtx->compareOp()->NEQ()) {
        return builder.CreateFCmpUNE(left, right, "fneqtmp");
    }
    if (compareCtx->compareOp()->LT()) {
        return builder.CreateFCmpULT(left, right, "fltltmp");
    }
    if (compareCtx->compareOp()->LE()) {
        return builder.CreateFCmpULE(left, right, "fletmp");
    }
    if (compareCtx->compareOp()->GT()) {
        return builder.CreateFCmpUGT(left, right, "fgttmp");
    }
    if (compareCtx->compareOp()->GE()) {
        return builder.CreateFCmpUGE(left, right, "fgetmp");
    }

    throw std::runtime_error("Invalid comparison operation for floats.");
}

llvm::Value* LLVMIRGenerator::createBoolComparison(
    FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right) {
    if (compareCtx->compareOp()->EQ()) {
        return builder.CreateICmpEQ(left, right, "booleqtmp");
    }
    if (compareCtx->compareOp()->NEQ()) {
        return builder.CreateICmpNE(left, right, "boolneqtmp");
    }

    throw std::runtime_error("Unsupported comparison for boolean type. Use only == or !=.");
}

llvm::Value* LLVMIRGenerator::visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx) {
    llvm::Value* left  = visitExpression(compareCtx->expression(0));
    llvm::Value* right = visitExpression(compareCtx->expression(1));

    llvm::Type* leftType  = left->getType();
    llvm::Type* rightType = right->getType();

    if (leftType != rightType) {
        throw std::runtime_error("Type mismatch in comparison operation.");
    }

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
    } /*else if (auto boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(expressionContext)) {
        llvm::Value* left = visitExpression(boolCtx->expression(0));
        llvm::Value* right = visitExpression(boolCtx->expression(1));
        return visitBoolOp(boolCtx->boolOp(), left, right);
    } else if (auto negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(expressionContext)) {
        llvm::Value* value = visitExpression(negationCtx->expression());
        return builder.CreateNot(value, "nottmp");
    } else if (auto funcCallCtx = dynamic_cast<FAMMParser::FunctionCallExpressionContext*>(expressionContext)) {
        return visitFunctionCall(funcCallCtx->functionCall());
    } else if (auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(expressionContext)) {
        return visitIdentifier(identCtx->IDENTIFIER());
    }*/

    throw std::runtime_error("Unknown expression type");
}

llvm::Type* LLVMIRGenerator::getLLVMType(const std::string& typeStr) {
    if (typeStr.find("array") == 0) {
        size_t start = typeStr.find('<') + 1;
        size_t end = typeStr.find('>');
        std::string elementType = typeStr.substr(start, end - start);
        llvm::Type* elementLLVMType = getLLVMType(elementType);
        return llvm::ArrayType::get(elementLLVMType, 0 /*arraySize*/); // TODO: НУЖНО ПРИДУМАТЬ КАК ДОБЫВАТЬ РАЗМЕР МАССИВА
    }

    if (typeStr == "int") {
        return llvm::Type::getInt32Ty(context);
    } else if (typeStr == "float") {
        return llvm::Type::getFloatTy(context);
    } else if (typeStr == "string") {
        // TODO НЕПОНЯТНО ЧТО ДЕЛАТЬ С УКАЗАТЕЛЕМ НА ЧАРИК
        //  return llvm::Type::getInt8PtrTy(context);
        return nullptr;
    } else if (typeStr == "bool") {
        return llvm::Type::getInt1Ty(context); // Boolean as a 1-bit integer
    } else {
        throw std::runtime_error("Unknown type string: " + typeStr);
    }
}

std::string LLVMIRGenerator::visitType(FAMMParser::TypeContext* typeContext) {
    if (auto baseType = typeContext->baseType()) {
        return visitBaseType(baseType);
    }

    if (auto arrayType = typeContext->arrayType()) {
        return "array<" + visitBaseType(arrayType->type()->baseType()) + ">";
    }

    throw std::runtime_error("Unknown type in TypeContext");
}

std::string LLVMIRGenerator::visitBaseType(FAMMParser::BaseTypeContext* baseTypeContext) {
    if (baseTypeContext->INT())
        return "int";

    if (baseTypeContext->FLOAT())
        return "float";

    if (baseTypeContext->STRING())
        return "string";

    if (baseTypeContext->BOOL())
        return "bool";

    throw std::runtime_error("Unknown type in BaseTypeContext");
}

std::string getTypeName(llvm::Type* type) {
    std::string typeName;
    llvm::raw_string_ostream rso(typeName);
    type->print(rso);
    return rso.str();
}

void EnsureTypeEq(llvm::Type* firstType, llvm::Type* secondType) {
    if (firstType != secondType) {
        std::string firstTypeName = getTypeName(firstType);
        std::string secondTypeName = getTypeName(secondType);

        throw std::runtime_error("Type mismatch: first value of type '" + firstTypeName +
                                 "' cannot be compared or assigned to second value of type '" + secondTypeName + "'.");
    }
}

void LLVMIRGenerator::visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
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

    builder.CreateStore(initialValue, alloca);
}

std::any LLVMIRGenerator::visitDeclaration(FAMMParser::DeclarationContext* node) {
    if (node->declarationWithDefinition()) {
        visitDeclarationWithDefinition(node->declarationWithDefinition());
    } // without тоже надо бы

    return nullptr;
}

std::any LLVMIRGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (node->declaration()) {
        // Обработка объявления
        return visitDeclaration(node->declaration());
    } /*else if (node->definition()) {
        // Обработка определения
        return visitDefinition(node->definition());
    } else if (node->functionCall()) {
        // Обработка вызова функции
        return visitFunctionCall(node->functionCall());
    }*/
    // Если ни одно из условий не выполнено, можно выбросить исключение или вернуть nullptr
    throw std::runtime_error("Unknown statement context");
}

std::any LLVMIRGenerator::visitLine(FAMMParser::LineContext* node) {
    if (node->statement()) {
        return visitStatement(node->statement());
    }
    //    } else if (node->expression()) {
    //        return visitExpression(node->expression());
    //    } else if (node->ifBlock()) {
    //        return visitIfBlock(node->ifBlock());
    //    } else if (node->whileBlock()) {
    //        // Обработка блока while
    //        return visitWhileBlock(node->whileBlock());
    //    } else if (node->forBlock()) {
    //        // Обработка блока for
    //        return visitForBlock(node->forBlock());
    //    } else if (node->functionDefinition()) {
    //        // Обработка определения функции
    //        return visitFunctionDefinition(node->functionDefinition());
    //    } else if (node->SEMICOLON()) {
    //        // Пустая строка или просто ';'
    //        return nullptr;
    //    }
    // Если ни одно из условий не выполнено, можно выбросить исключение или вернуть nullptr
    throw std::runtime_error("Unknown line context");
}
