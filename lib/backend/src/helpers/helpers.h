#include "llvm/IR/Value.h"
#include "llvm/IR/Type.h"

bool IsDouble(llvm::Value* value);

bool IsInt(llvm::Value* value);

bool IsBool(llvm::Value* value);

bool IsString(llvm::Value* value);

void EnsureIntOrDouble(llvm::Value* value);

