#pragma once
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/raw_ostream.h>

class LLVMModuleGenerator {
public:
  LLVMModuleGenerator(); // Конструктор
  ~LLVMModuleGenerator(); // Деструктор

  void generateModule(); // Метод для генерации модуля

private:
  llvm::LLVMContext context; // Контекст LLVM
  llvm::Module* module; // Модуль LLVM
};