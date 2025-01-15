#pragma once
#include "externalFunctions/ExternalFunctions.h"
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/SectionMemoryManager.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Module.h>
#include <llvm/Transforms/InstCombine/InstCombine.h>
#include <llvm/Transforms/Scalar.h>
#include <llvm/Transforms/Scalar/GVN.h>
#include <llvm/Transforms/Utils.h>
#include <llvm/ExecutionEngine/Interpreter.h>

class LLVMJIT {
public:
    static void run(std::unique_ptr<llvm::Module> module, std::string& error, const CLIManager& cli) {
        if (!module) {
            error = "Module is null.";
            return;
        }

        llvm::Function* mainFunction = module->getFunction("main");

        if (!mainFunction) {
            error = "Function 'main' not found in module.";
            return;
        }
        //
        //        if (verifyModule(*module, &llvm::errs())) {
        //            error = "Module verification failed.";
        //            return;
        //        }

        if (cli.optimize()) {
            optimizeModule(*module);
            if (cli.printOptimized()) {
                llvm::outs() << "Optimized IR:\n";
                module->print(llvm::outs(), nullptr);
            }
        }

//        LLVMLinkInInterpreter();
        llvm::ExecutionEngine* engine = llvm::EngineBuilder(std::move(module))
                                            .setErrorStr(&error)
                                            .setEngineKind(llvm::EngineKind::JIT) // todo интерпретатор надо прикрутить
                                            .setMCJITMemoryManager(std::make_unique<llvm::SectionMemoryManager>())
                                            .create();

        if (!engine) {
            error = "Failed to create ExecutionEngine: " + error;
            return;
        }

        initLibFunctions(engine);

        const std::vector<llvm::GenericValue> noArgs;
        const llvm::GenericValue result = engine->runFunction(mainFunction, noArgs);

        llvm::outs() << "Exit Code: " << result.IntVal << "\n";
    }

private:
    static void initLibFunctions(llvm::ExecutionEngine* engine){
        engine->addGlobalMapping("display", reinterpret_cast<uint64_t>(&printf));
        engine->addGlobalMapping("strcmp", reinterpret_cast<uint64_t>(&strcmp));
        engine->addGlobalMapping("stradd", reinterpret_cast<uint64_t>(&stradd));
        engine->addGlobalMapping("strmult", reinterpret_cast<uint64_t>(&strmult));
        engine->addGlobalMapping("strneg", reinterpret_cast<uint64_t>(&strneg));
        engine->addGlobalMapping("bool_to_string", reinterpret_cast<uint64_t>(&bool_to_string));
        engine->addGlobalMapping("int_to_string", reinterpret_cast<uint64_t>(&int_to_string));
        engine->addGlobalMapping("float_to_string", reinterpret_cast<uint64_t>(&float_to_string));
        engine->addGlobalMapping("string_to_int", reinterpret_cast<uint64_t>(&string_to_int));
        engine->addGlobalMapping("string_to_float", reinterpret_cast<uint64_t>(&string_to_float));
        engine->addGlobalMapping("string_to_bool", reinterpret_cast<uint64_t>(&string_to_bool));
    }

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
