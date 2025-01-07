#include "Visitor.h"

std::any LLVMIRGenerator::visitWhileBlock(FAMMParser::WhileBlockContext* whileBlockCtx) {
    llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();

    // Создаем базовые блоки для условия, тела цикла и выхода из цикла
    llvm::BasicBlock* conditionBlock = llvm::BasicBlock::Create(context, "whilecond", currentFunction);
    llvm::BasicBlock* loopBlock = llvm::BasicBlock::Create(context, "whileloop", currentFunction);
    llvm::BasicBlock* afterLoopBlock = llvm::BasicBlock::Create(context, "afterwhile", currentFunction);

    // Переход к блоку условия
    builder.CreateBr(conditionBlock);
    builder.SetInsertPoint(conditionBlock);

    // Оцениваем условие цикла
    llvm::Value* condition = visitExpression(whileBlockCtx->expression());
    if (!condition->getType()->isIntegerTy(1)) {
        throw std::runtime_error("Condition in while statement must be a boolean expression.");
    }

    // Создаем условный переход
    builder.CreateCondBr(condition, loopBlock, afterLoopBlock);

    // Генерируем тело цикла
    builder.SetInsertPoint(loopBlock);
    enterScope(); // Входим в новую область видимости
    for (auto line : whileBlockCtx->block()->line()) {
        visitLine(line);
    }
    exitScope(); // Выходим из области видимости
    builder.CreateBr(conditionBlock);

    // Устанавливаем точку вставки в блок после цикла
    builder.SetInsertPoint(afterLoopBlock);

    return nullptr;
}


// std::any LLVMIRGenerator::visitForLoop(FAMMParser::ForBlockContext* forBlockCtx) {
//     llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
//
//     // Create basic blocks for loop components
//     llvm::BasicBlock* loopCondBB = llvm::BasicBlock::Create(context, "loopcond", currentFunction);
//     llvm::BasicBlock* loopBodyBB = llvm::BasicBlock::Create(context, "loopbody", currentFunction);
//     llvm::BasicBlock* loopIncBB = llvm::BasicBlock::Create(context, "loopinc", currentFunction);
//     llvm::BasicBlock* afterLoopBB = llvm::BasicBlock::Create(context, "afterloop", currentFunction);
//
//     // Generate code for initialization
//     visit(forBlockCtx->declarationWithDefinition());
//
//     // Get the loop variable's name and AllocaInst
//     std::string loopVarName = forBlockCtx->declarationWithDefinition()->variableName();
//     llvm::AllocaInst* loopVarAlloca = namedValues[loopVarName];
//
//     // Jump to loop condition
//     builder.CreateBr(loopCondBB);
//
//     // Set insertion point to loop condition block
//     builder.SetInsertPoint(loopCondBB);
//
//     // Load the loop variable
//     llvm::Value* loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
//
//     // Visit the end value expression
//     llvm::Value* endValue = std::any_cast<llvm::Value*>(visit(forBlockCtx->expression(0)));
//
//     // Compare loop variable with end value
//     llvm::Value* condVal = builder.CreateICmpSLT(loopVar, endValue, "loopcond");
//
//     // Conditional branch to loop body or after loop
//     builder.CreateCondBr(condVal, loopBodyBB, afterLoopBB);
//
//     // Set insertion point to loop body block
//     builder.SetInsertPoint(loopBodyBB);
//
//     // Visit the loop body block
//     visit(forBlockCtx->block());
//
//     // Branch to increment block after loop body
//     builder.CreateBr(loopIncBB);
//
//     // Set insertion point to increment block
//     builder.SetInsertPoint(loopIncBB);
//
//     // Load the loop variable again
//     loopVar = builder.CreateLoad(loopVarAlloca->getAllocatedType(), loopVarAlloca, loopVarName);
//
//     // Visit the step value expression
//     llvm::Value* stepValue = std::any_cast<llvm::Value*>(visit(forBlockCtx->expression(1)));
//
//     // Compute the new value for loop variable
//     llvm::Value* nextValue = builder.CreateAdd(loopVar, stepValue, "nextValue");
//
//     // Store the updated value back to the loop variable
//     builder.CreateStore(nextValue, loopVarAlloca);
//
//     // Branch back to loop condition
//     builder.CreateBr(loopCondBB);
//
//     // Set insertion point to the block after the loop
//     builder.SetInsertPoint(afterLoopBB);
//
//     return nullptr;
// }
