#include "FAMMVisiter.h"

FAMMVisitor::FAMMVisitor() : Builder(TheContext) {
    TheModule = std::make_unique<llvm::Module>("FAMMModule", TheContext);
}

llvm::Value* FAMMVisitor::visitProgram(FAMMParser::ProgramContext *ctx) {
    // Обработка программы
    for (auto line : ctx->line()) {
        visit(line);
    }
    return nullptr;
}



llvm::Value* FAMMVisitor::visitFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) {
    // Обработка определения функции
    std::string functionName = ctx->IDENTIFIER()->getText();
    // Создание функции в LLVM IR
    // ...
    return nullptr;
}

// Реализация других методов
