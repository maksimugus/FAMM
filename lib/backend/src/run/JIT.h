#pragma once
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/SectionMemoryManager.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/TargetParser/Host.h>

class LLVMJIT {
private:
 std::unique_ptr<llvm::Module> module;
public:
    LLVMJIT(std::unique_ptr<llvm::Module> other){
        module = std::move(other);
    }

    void runCode() {
        LLVMLinkInMCJIT();
        llvm::InitializeNativeTarget();
        llvm::InitializeNativeTargetAsmPrinter();
        llvm::InitializeNativeTargetAsmParser();
        llvm::Function *mainFunction = module->getFunction("main");

        if (!mainFunction) {
            llvm::errs() << "Function 'main' not found in module.\n";
            return;
        }

        if (llvm::verifyModule(*module, &llvm::errs())) {
            llvm::errs() << "Module verification failed.\n";
            return;
        }
        std::string error;
        llvm::ExecutionEngine *engine = llvm::EngineBuilder(std::move(module))
            .setErrorStr(&error)
            .setEngineKind(llvm::EngineKind::JIT)
            .setMCJITMemoryManager(std::make_unique<llvm::SectionMemoryManager>())
            .create();

        if (!engine) {
            llvm::errs() << "Failed to create ExecutionEngine: " << error << "\n";
            return;
        }
        // Компиляция и выполнение функции
        std::vector<llvm::GenericValue> noArgs;
        llvm::GenericValue result = engine->runFunction(mainFunction, noArgs);

        //Вывод результата
        llvm::outs() << "Exit Code: " << result.IntVal << "\n";
    }
};
