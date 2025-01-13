#pragma once
#include "externalFunctions/ExternalFunctions.h"
#include "gc/gc.h"
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

        llvm::ExecutionEngine* engine = llvm::EngineBuilder(std::move(module))
                                            .setErrorStr(&error)
                                            .setEngineKind(llvm::EngineKind::JIT)
                                            .setMCJITMemoryManager(std::make_unique<llvm::SectionMemoryManager>())
                                            .create();

        if (!engine) {
            error = "Failed to create ExecutionEngine: " + error;
            return;
        }

        initLibFunctions(engine);
        initGCFunctions(engine);

        const std::vector<llvm::GenericValue> noArgs;
        const llvm::GenericValue result = engine->runFunction(mainFunction, noArgs);

        // Запуск сборки мусора перед завершением
        CustomGC::getInstance().collect();
        llvm::outs() << "Exit Code: " << result.IntVal << "\n";
    }

private:
    static void setGCForModule(llvm::Module& module) {
        for (auto& function : module) {
            if (!function.isDeclaration()) {
                function.setGC("custom-gc");
            }
        }
    }

    static void initGCFunctions(llvm::ExecutionEngine* engine) {
        engine->addGlobalMapping("gc_allocate", reinterpret_cast<uint64_t>(&CustomGC::allocateMemory));
        engine->addGlobalMapping("gc_add_root", reinterpret_cast<uint64_t>(&CustomGC::addRoot));
        engine->addGlobalMapping("gc_remove_root", reinterpret_cast<uint64_t>(&CustomGC::removeRoot));
    }

    static void initLibFunctions(llvm::ExecutionEngine* engine){
        engine->addGlobalMapping("display", reinterpret_cast<uint64_t>(&printf));
        engine->addGlobalMapping("strcmp", reinterpret_cast<uint64_t>(&strcmp));
        engine->addGlobalMapping("my_stradd", reinterpret_cast<uint64_t>(&my_stradd));
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
