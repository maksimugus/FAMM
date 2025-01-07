#include <unordered_map>
#include <string>
#include <llvm/IR/Instructions.h>

struct Scope {
    std::unordered_map<std::string, llvm::AllocaInst*> variables;
};