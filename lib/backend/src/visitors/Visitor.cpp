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
    return nullptr;
}

llvm::AllocaInst* LLVMIRGenerator::findVariable(const std::string& name) {
    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        auto& variables = it->variables;
        if (variables.find(name) != variables.end()) {
            return variables[name];
        }
    }
    throw std::runtime_error("Variable '" + name + "' not found in any active scope.");
}

std::any LLVMIRGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (node->declaration()) {
        return visitDeclaration(node->declaration());
    }
    if (node->definition()) {
        return visitDefinition(node->definition());
    }
    if (node->functionCall()) {
        return visitFunctionCall(node->functionCall());
    } else if (node->returnStatement()) {
        return visitReturnStatement(node->returnStatement());
    }

    throw std::runtime_error("Unknown statement context");
}
