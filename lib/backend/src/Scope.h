#pragma once
#include <llvm/IR/Instructions.h>
#include <string>
#include <unordered_map>

struct Scope {
    std::unordered_map<std::string, llvm::AllocaInst*> variables;
};