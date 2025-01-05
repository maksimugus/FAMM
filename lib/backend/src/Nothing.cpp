#include "Nothing.h"

LLVMModuleGenerator::LLVMModuleGenerator() {
    module = new llvm::Module("my_module", context);
}

LLVMModuleGenerator::~LLVMModuleGenerator() {
    delete module;
}

void LLVMModuleGenerator::generateModule() {
    llvm::FunctionType* funcType = llvm::FunctionType::get(llvm::Type::getVoidTy(context), false);
    llvm::Function* func = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, "my_function", module);

    llvm::outs() << "Module generated:\n";
    module->print(llvm::outs(), nullptr);
}
