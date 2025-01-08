#include "Visitor.h"
#include <llvm/IR/Verifier.h>

llvm::Value* LLVMIRGenerator::visitProgram(FAMMParser::ProgramContext* node) {
    // TODO очень похоже на scope
    enterScope(); // Глобальный скопец

    llvm::FunctionType* mainType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
    llvm::Function* mainFunction = llvm::Function::Create(mainType, llvm::Function::ExternalLinkage, "main", module);

    llvm::BasicBlock* entry = llvm::BasicBlock::Create(context, "entry", mainFunction);
    builder.SetInsertPoint(entry);

    for (const auto line : node->line()) {
        visitLine(line);
    }

    // Return 0 from main
    builder.CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), 0));

    // Verify the function
    verifyFunction(*mainFunction);

    exitScope();

    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitLine(FAMMParser::LineContext* node) {
    if (const auto statement = dynamic_cast<FAMMParser::StatementLineContext*>(node)) {
        return visitStatement(statement->statement());
    }
    if (const auto expression = dynamic_cast<FAMMParser::ExpressionLineContext*>(node)) {
        return visitExpression(expression->expression());
    }
    throw std::runtime_error("Unknown line context");
}

llvm::Value* LLVMIRGenerator::visitScope(FAMMParser::ScopeContext* scope) {
    enterScope();
    for (const auto line : scope->line()) {
        execute(line);
    }
    exitScope();
    return nullptr;
}
