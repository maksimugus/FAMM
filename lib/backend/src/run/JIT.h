#pragma once
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/SectionMemoryManager.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>

class LLVMJIT {
public:
    static void run(std::unique_ptr<llvm::Module> module, std::string& error) {
        if (!module) {
            error = "Module is null.";
            return;
        }

        llvm::Function* mainFunction = module->getFunction("main");

        if (!mainFunction) {
            error = "Function 'main' not found in module.";
            return;
        }

        if (verifyModule(*module, &llvm::errs())) {
            error = "Module verification failed.";
            return;
        }

        llvm::ExecutionEngine* engine = llvm::EngineBuilder(std::move(module))
                                            .setErrorStr(&error)
                                            .setEngineKind(llvm::EngineKind::JIT)
                                            .setMCJITMemoryManager(std::make_unique<llvm::SectionMemoryManager>())
                                            .create();

        if (!engine) {
            error = "Failed to create ExecutionEngine: " + error;
            return;
        }

        const std::vector<llvm::GenericValue> noArgs;
        const llvm::GenericValue result = engine->runFunction(mainFunction, noArgs);

        llvm::outs() << "Exit Code: " << result.IntVal << "\n";
    }
};
