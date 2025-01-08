
#pragma once

#include "llvm/MC/TargetRegistry.h"
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/Error.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/Target/TargetOptions.h>
#include <llvm/TargetParser/Host.h>

class ObjectEmitter {
public:
    static void emit(const std::unique_ptr<llvm::Module>& module, const std::string& filename, std::string& error) {
        const auto targetTriple = llvm::sys::getDefaultTargetTriple();

        const auto target = llvm::TargetRegistry::lookupTarget(targetTriple, error);

        if (!target) {
            return;
        }

        const auto cpu      = "generic";
        const auto features = "";

        const llvm::TargetOptions opt;
        constexpr auto RM        = std::optional<llvm::Reloc::Model>();
        const auto targetMachine = target->createTargetMachine(targetTriple, cpu, features, opt, RM);

        module->setDataLayout(targetMachine->createDataLayout());
        module->setTargetTriple(targetTriple);

        std::error_code ec;
        llvm::raw_fd_ostream dest(filename, ec, llvm::sys::fs::OF_None);

        if (ec) {
            error = "Could not open file: " + ec.message();
            return;
        }

        llvm::legacy::PassManager pass;

        if (constexpr auto FileType = llvm::CodeGenFileType::ObjectFile;
            targetMachine->addPassesToEmitFile(pass, dest, nullptr, FileType)) {
            error = "TargetMachine can't emit a file of this type";
            return;
        }

        pass.run(*module);
        dest.flush();
    }
};
