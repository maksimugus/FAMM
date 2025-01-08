#pragma once
#include <llvm/IR/Instructions.h>
#include <string>
#include <unordered_map>

struct Scope {
    std::unordered_map<std::string, llvm::AllocaInst*> variables;
};


// TODO может такой скоуп?
// Я украл это в https://github.com/quantumsheep/llvm-antlr4-starter/blob/master/src/logic/Scope.hpp

// Scope.h
// class Scope {
// public:
//     std::unordered_map<std::string, llvm::Value*> variables;
//
//     llvm::Function* currentFunction = nullptr;
//
//     Scope(llvm::Function* _currentFunction = nullptr) : currentFunction(_currentFunction) {}
//
//     llvm::Value* setVariable(const std::string& name, llvm::Value*);
//
//     llvm::Value* getVariable(const std::string& name);
// };

// Scope.cpp
// llvm::Value *Scope::setVariable(const std::string &name, llvm::Value *value)
// {
//     this->variables[name] = value;
//     return value;
// }
//
// llvm::Value *Scope::getVariable(const std::string &name)
// {
//     try
//     {
//         return this->variables.at(name);
//     }
//     catch (std::out_of_range)
//     {
//         return nullptr;
//     }
// }


