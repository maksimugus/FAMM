#include "Visitor.h"

std::any LLVMIRGenerator::visitProgram(FAMMParser::ProgramContext* node) {
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
    llvm::verifyFunction(*mainFunction);

    exitScope();

    return nullptr;
}

std::any LLVMIRGenerator::visitLine(FAMMParser::LineContext* node) {
    if (node->statement()) {
        return visitStatement(node->statement());
    }
    if (node->functionDefinition()) {
        return visitFunctionDefinition(node->functionDefinition());
    }
    if (node->expression()) {
        return visitExpression(node->expression());
    }
    if (node->ifBlock()) {
        return visitIfBlock(node->ifBlock());
    }
    if (node->whileBlock()) {
        return visitWhileBlock(node->whileBlock());
    }
//    if (node->forBlock()) {
//        return visitForBlock(node->forBlock());
//    }
    if (node->SEMICOLON()) {
        return nullptr;
    }

    throw std::runtime_error("Unknown line context");
}

std::any LLVMIRGenerator::visitBlock(FAMMParser::BlockContext* block) {
    enterScope();
    for (const auto line : block->line()) {
        visitLine(line);
    }
    exitScope();
    return nullptr;
}
