#ifndef LLVM_MODULE_GENERATOR_H
#define LLVM_MODULE_GENERATOR_H

#include <llvm/IR/Function.h>
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

#endif // LLVM_MODULE_GENERATOR_H
