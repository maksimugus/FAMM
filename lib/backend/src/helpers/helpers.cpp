#include "helpers.h"
bool IsDouble(llvm::Value* value) {
    return value->getType()->isDoubleTy();
}
bool IsInt(llvm::Value* value) {
    return value->getType()->isIntegerTy(64);
}
bool IsBool(llvm::Value* value) {
    return value->getType()->isIntegerTy(1);
}
bool IsString(llvm::Value* value) {
    return value->getType()->isPointerTy();
}
void EnsureIntOrDouble(llvm::Value* value) {
    if (!IsInt(value) && !IsDouble(value)){
        throw std::runtime_error("The provided value must be Int or Double");
    }
}
