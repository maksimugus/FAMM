#pragma once
#include "llvm/IR/Type.h"
#include "llvm/IR/Value.h"

bool IsDouble(llvm::Value* value);

bool IsInt(llvm::Value* value);

bool IsBool(llvm::Value* value);

bool IsString(llvm::Value* value);

bool IsArray(llvm::Value* value);

void EnsureIntOrDouble(llvm::Value* value);

void ThrowIfNotInt(llvm::Value* value, const std::string& message);

void ThrowIfNotDouble(llvm::Value* value, const std::string& message);

