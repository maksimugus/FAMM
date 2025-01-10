#include "Visitor.h"

// TODO move from visitors

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

llvm::Value* LLVMIRGenerator::createDoubleComparison(
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

llvm::Value* LLVMIRGenerator::createStringComparison(
    FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right) {

    llvm::Function* strcmpFunc = module->getFunction("strcmp");
    if (!strcmpFunc) {
        llvm::FunctionType* strcmpType = llvm::FunctionType::get(
            llvm::Type::getInt32Ty(*context), // Return type: int
            {llvm::PointerType::get(llvm::Type::getInt8Ty(*context), 0), llvm::PointerType::get(llvm::Type::getInt8Ty(*context), 0)}, // Parameters: char*, char*
            false);
        strcmpFunc = llvm::Function::Create(strcmpType, llvm::Function::ExternalLinkage, "strcmp", module.get());
    }

    llvm::Value* result = builder.CreateCall(strcmpFunc, {left, right});

    llvm::Value* zero = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*context), 0);

    if (compareCtx->compareOp()->EQ()) {
        return builder.CreateICmpEQ(result, zero);
    }
    if (compareCtx->compareOp()->NEQ()) {
        return builder.CreateICmpNE(result, zero);
    }
    if (compareCtx->compareOp()->LT()) {
        return builder.CreateICmpSLT(result, zero);
    }
    if (compareCtx->compareOp()->LE()) {
        return builder.CreateICmpSLE(result, zero);
    }
    if (compareCtx->compareOp()->GT()) {
        return builder.CreateICmpSGT(result, zero);
    }
    if (compareCtx->compareOp()->GE()) {
        return builder.CreateICmpSGE(result, zero);
    }

    throw std::runtime_error("Invalid comparison operation for strings.");
}