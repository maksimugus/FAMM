#include "Visitor.h"

std::any LLVMIRGenerator::visitProgram(FAMMParser::ProgramContext* node) {
    enterScope(); // Enter global scope

    // Create the main function: int main()
    llvm::FunctionType* mainType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
    llvm::Function* mainFunction = llvm::Function::Create(mainType, llvm::Function::ExternalLinkage, "main", module);

    // Create a new basic block to start insertion into
    llvm::BasicBlock* entry = llvm::BasicBlock::Create(context, "entry", mainFunction);
    builder.SetInsertPoint(entry);

    // Visit each line in the program
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
//    if (node->whileBlock()) {
//        return visitWhileBlock(node->whileBlock());
//    } else if (node->forBlock()) {
//         Обработка блока for
//        return visitForBlock(node->forBlock());
//    } else if (node->SEMICOLON()) {
//        return nullptr;
//    }

    throw std::runtime_error("Unknown line context");
}