#pragma once
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/SectionMemoryManager.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Transforms/IPO.h>
#include <llvm/Transforms/InstCombine/InstCombine.h>
#include <llvm/Transforms/Scalar.h>
#include <llvm/Transforms/Scalar/GVN.h>
#include <llvm/Transforms/Utils.h>

class LLVMJIT {
public:
    static void run(std::unique_ptr<llvm::Module> module, std::string& error, const bool print_optimised) {
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


        optimizeModule(*module);
        if (print_optimised) {
            llvm::outs() << "Optimized IR:\n";
            module->print(llvm::outs(), nullptr);
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

        engine->addGlobalMapping("display", reinterpret_cast<uint64_t>(&printf));

        const std::vector<llvm::GenericValue> noArgs;
        const llvm::GenericValue result = engine->runFunction(mainFunction, noArgs);

        llvm::outs() << "Exit Code: " << result.IntVal << "\n";
    }

private:
    static void optimizeModule(llvm::Module& module) {
        llvm::legacy::PassManager passManager;

        // todo выбрать нужные нам оптимизации, посмотреть какие ещё есть

        passManager.add(llvm::createPromoteMemoryToRegisterPass()); // SSA form
        passManager.add(llvm::createInstructionCombiningPass()); // Combine instructions
        passManager.add(llvm::createReassociatePass()); // Reassociate expressions
        passManager.add(llvm::createGVNPass()); // Eliminate redundant loads/stores
        passManager.add(llvm::createCFGSimplificationPass()); // Simplify the control flow graph
        passManager.add(llvm::createDeadCodeEliminationPass()); // Remove dead code
        // passManager.add(llvm::createFunctionInliningPass());        // Inline small functions

        passManager.run(module);
    }
};
