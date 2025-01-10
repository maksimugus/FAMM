#include "ExternalFunctions.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/Module.h>

llvm::Value* display(const std::unique_ptr<llvm::Module>& llvm_module, llvm::IRBuilder<>& builder,
    const std::string& format, const std::vector<llvm::Value*>& values) {
    llvm::LLVMContext& context = llvm_module->getContext();

    llvm::FunctionType* displayTy = llvm::FunctionType::get(
        llvm::IntegerType::getInt32Ty(context), llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(context)), true);

    const llvm::FunctionCallee displayFunc = llvm_module->getOrInsertFunction("display", displayTy);

    std::string formatStr = format;
    if (formatStr.empty()) {
        for (const llvm::Value* val : values) {
            if (const llvm::Type* ty = val->getType(); ty->isIntegerTy(1)) {
                formatStr += "%d ";
            } else if (ty->isIntegerTy(64)) {
                formatStr += "%lld ";  // Use %lld for 64-bit integers
            } else if (ty->isIntegerTy()) {
                formatStr += "%d ";
            } else if (ty->isFloatingPointTy()) {
                formatStr += "%f ";
            } else if (ty->isPointerTy()) {
                formatStr += "%s ";
            } else {
                formatStr += "%p ";
            }
        }
        formatStr += "\n";
    }

    llvm::Constant* formatConst = llvm::ConstantDataArray::getString(context, formatStr);
    const auto formatStrVar     = new llvm::GlobalVariable(
        *llvm_module, formatConst->getType(), true, llvm::GlobalValue::PrivateLinkage, formatConst, ".str");

    llvm::Constant* zero         = llvm::ConstantInt::get(context, llvm::APInt(32, 0));
    llvm::Constant* indices[]    = {zero, zero};
    llvm::Constant* formatStrPtr = llvm::ConstantExpr::getGetElementPtr(formatConst->getType(), formatStrVar, indices);

    std::vector<llvm::Value*> displayArgs;
    displayArgs.push_back(formatStrPtr);
    for (llvm::Value* val : values) {
        if (const llvm::Type* valTy = val->getType(); valTy->isIntegerTy(1)) {
            val = builder.CreateIntCast(val, llvm::Type::getInt32Ty(context), false);
        } else if (valTy->isIntegerTy() && valTy->getIntegerBitWidth() < 64) {
            val = builder.CreateIntCast(val, llvm::Type::getInt64Ty(context), false);
        } else if (valTy->isFloatingPointTy() && valTy->getPrimitiveSizeInBits() < 64) {
            val = builder.CreateFPExt(val, llvm::Type::getDoubleTy(context));
        }
        displayArgs.push_back(val);
    }

    return builder.CreateCall(displayFunc, displayArgs, "displayCall");
}
