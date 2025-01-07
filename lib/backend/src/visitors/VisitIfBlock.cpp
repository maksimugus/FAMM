#include "Visitor.h"

llvm::Value* LLVMIRGenerator::visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx) {
    llvm::Value* condition = visitExpression(ifBlockCtx->expression());

    if (!condition->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Condition in if statement must be a boolean expression.");
    }

    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    llvm::BasicBlock* thenBlock = llvm::BasicBlock::Create(context, "then", currentFunction);
    llvm::BasicBlock* elseBlock = llvm::BasicBlock::Create(context, "else", currentFunction);
    llvm::BasicBlock* mergeBlock = llvm::BasicBlock::Create(context, "ifcont", currentFunction);

    builder.CreateCondBr(condition, thenBlock, elseBlock);

    // Генерируем 'then' блок
    builder.SetInsertPoint(thenBlock);
    enterScope(); // Входим в новую область видимости
    for (auto block : ifBlockCtx->block(0)->line()) {
        visitLine(block);
    }
    exitScope(); // Выходим из области видимости
    builder.CreateBr(mergeBlock);

    // Генерируем 'else' блок
    builder.SetInsertPoint(elseBlock);
    enterScope(); // Входим в новую область видимости
    if (ifBlockCtx->ELSE()) {
        for (auto line : ifBlockCtx->block(1)->line()) {
            visitLine(line);
        }
    }
    exitScope(); // Выходим из области видимости
    builder.CreateBr(mergeBlock);

    builder.SetInsertPoint(mergeBlock);

    return nullptr;
}
