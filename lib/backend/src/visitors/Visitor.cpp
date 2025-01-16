#include "Visitor.h"

#include <ranges>
#include <stdexcept>


LLVMIRGenerator::LLVMIRGenerator()
    : context(std::make_unique<llvm::LLVMContext>()),
      builder(*context),
      module(std::make_unique<llvm::Module>("my_module", *context)) {}

void LLVMIRGenerator::printIR() const {
    module->print(llvm::outs(), nullptr);
}

void LLVMIRGenerator::enterScope() {
    scopeStack.emplace_back();
}

void LLVMIRGenerator::exitScope() {
    if (!scopeStack.empty()) {
        auto [variables] = scopeStack.back();
        scopeStack.pop_back();
        llvm::Function* collectFunc = module->getFunction("gc_collect");
        for (const auto& var : variables) {
            if (var.second->getType()->isPointerTy()) {
                builder.CreateCall(collectFunc, {var.second}, "collectedMem");
            }
        }
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
    if (const auto expr = dynamic_cast<FAMMParser::ExpressionContext*>(node)) {
        return visitExpression(expr);
    }
    if (const auto stat = dynamic_cast<FAMMParser::StatementContext*>(node)) {
        return visitStatement(stat);
    }
    if (const auto scope = dynamic_cast<FAMMParser::ScopeContext*>(node)) {
        return visitScope(scope);
    }
    if (const auto declWithDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionContext*>(node)) {
        return visitDeclarationWithDefinition(declWithDef);
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::execute(tree::ParseTree* node) {
    return std::any_cast<llvm::Value*>(visit(node));
}

llvm::AllocaInst* LLVMIRGenerator::findVariable(const std::string& name) {
    for (auto & [variables] : std::ranges::reverse_view(scopeStack)) {
        if (variables.contains(name)) {
            return variables[name];
        }
    }
    throw std::runtime_error("Variable '" + name + "' not found in any active scope.");
}
