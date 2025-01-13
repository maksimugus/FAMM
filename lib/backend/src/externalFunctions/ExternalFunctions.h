#pragma once
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>

llvm::Value* display(const std::unique_ptr<llvm::Module>& llvm_module, llvm::IRBuilder<>& builder,
    const std::string& format, const std::vector<llvm::Value*>& values = {});
llvm::Value* allocateMemory(const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* size);
llvm::Value* addRoot(const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* value);

const char* bool_to_string(bool value);
const char* int_to_string(long long value);
const char* float_to_string(double value);
long long string_to_int(const char* str);
double string_to_float(const char* str);
bool string_to_bool(const char* str);

llvm::Value* intCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module);
llvm::Value* floatCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module);
llvm::Value* boolCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module);
llvm::Value* stringCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module);

llvm::Value* stringAdd(
    const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* left, llvm::Value* right);
extern "C" char* my_stradd(char* left, char* right);

llvm::Value* stringCompare(
    const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* left, llvm::Value* right);
