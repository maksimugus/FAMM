#include "Visitor.h"

#include <stdexcept>


LLVMIRGenerator::LLVMIRGenerator() : context(), builder(context), module("my_module", context) {}

void LLVMIRGenerator::printIR() const {
    module.print(llvm::outs(), nullptr);
}

void LLVMIRGenerator::enterScope() {
    scopeStack.push_back(Scope());
}

void LLVMIRGenerator::exitScope() {
    if (!scopeStack.empty()) {
        scopeStack.pop_back();
    } else {
        throw std::runtime_error("Attempted to exit a scope when none exists.");
    }
}

std::any LLVMIRGenerator::visit(tree::ParseTree* node) {
    if (const auto program = dynamic_cast<FAMMParser::ProgramContext*>(node)) {
        return visitProgram(program);
    }

    if (const auto line = dynamic_cast<FAMMParser::LineContext*>(node)) {
        return visitLine(line);
    }

    return nullptr;
}

llvm::AllocaInst* LLVMIRGenerator::findVariable(const std::string& name) {
    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        if (auto& variables = it->variables; variables.contains(name)) {
            return variables[name];
        }
    }
    throw std::runtime_error("Variable '" + name + "' not found in any active scope.");
}


