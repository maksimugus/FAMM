#pragma once
#include <llvm/IR/IRBuilder.h>

llvm::Value* display(const std::unique_ptr<llvm::Module>& llvm_module, llvm::IRBuilder<>& builder,
    const std::string& format, const std::vector<llvm::Value*>& values = {});

llvm::Value* intCast(llvm::Value* value, llvm::IRBuilder<>& builder);
llvm::Value* floatCast(llvm::Value* value, llvm::IRBuilder<>& builder);
llvm::Value* boolCast(llvm::Value* value, llvm::IRBuilder<>& builder);

extern "C" char* my_stradd(char* left, char* right);