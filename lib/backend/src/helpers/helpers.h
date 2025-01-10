#include "llvm/IR/Value.h"
#include "llvm/IR/Type.h"

bool IsFloat(llvm::Value* value) {
    return value->getType()->isFloatTy();
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

void EnsureIntOrFloat(llvm::Value* value){
    if (!IsInt(value) && !IsFloat(value)){
        throw std::runtime_error("The provided value must be Int or Float");
    }
}

