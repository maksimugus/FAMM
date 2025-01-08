#pragma once
// #include <llvm/ExecutionEngine/ExecutionEngine.h>
// #include <llvm/ExecutionEngine/Orc/BasicExecutorContact.h>
// #include <llvm/ExecutionEngine/Orc/LLJIT.h>
// #include <llvm/IR/Module.h>
// #include <llvm/TargetParser/Host.h>
// #include <llvm/Support/TargetSelect.h>
//
// class LLVMJIT {
// public:
//     static std::unique_ptr<llvm::orc::LLJIT> createJIT(std::unique_ptr<llvm::Module> module) {
//         // Initialize LLVM's JIT
//         llvm::InitializeNativeTarget();
//         llvm::InitializeNativeTargetAsmParser();
//         llvm::InitializeNativeTargetAsmPrinter();
//
//         llvm::orc::LLJITBuilder jitBuilder;
//         jitBuilder.setJITTargetMachineBuilder(llvm::TargetMachine::getDefaultTargetTriple());
//
//         auto jit = llvm::orc::LLJITBuilder()
//                     .create();
//
//         if (!jit) {
//             llvm::errs() << "Failed to create JIT\n";
//             return nullptr;
//         }
//
//         // Add module to JIT execution engine
//         if (auto err = jit->addIRModule(llvm::ThreadSafeModule(std::move(module), std::make_shared<llvm::LLVMContext>()))){
//             llvm::errs() << "Failed to add IR module: " << toString(std::move(err)) << "\n";
//             return nullptr;
//         }
//
//         return jit;
//     }
//
//     static int runJIT(std::unique_ptr<llvm::orc::LLJIT>& jit, const std::string& funcName) {
//         auto symbol = jit->lookup(funcName);
//         if (!symbol) {
//             llvm::errs() << "Could not find function: " << funcName << "\n";
//             return 1;
//         }
//
//         auto funcPtr = reinterpret_cast<int (*)()>(symbol.get().getAddress());
//         return funcPtr();
//     }
// };
