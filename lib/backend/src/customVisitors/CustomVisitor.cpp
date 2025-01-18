#include "CustomVisitor.h"

void FammByteCodeGenerator::enterScope() {
    scopeStack.emplace_back();
}

void FammByteCodeGenerator::exitScope() {
    if (!scopeStack.empty()) {
        scopeStack.pop_back();
    }
}

std::any FammByteCodeGenerator::visit(tree::ParseTree* node) {
    if (!fammIR) return node->accept(this);
    
    if (auto* prog = dynamic_cast<FAMMParser::ProgramContext*>(node)) {
        visitProgram(prog);
    } else if (auto* expr = dynamic_cast<FAMMParser::ExpressionContext*>(node)) {
        visitExpression(expr);
    } else if (auto* stmt = dynamic_cast<FAMMParser::StatementContext*>(node)) {
        visitStatement(stmt);
    } else if (auto* block = dynamic_cast<FAMMParser::BlockContext*>(node)) {
        visitBlock(block);
    }
    return {};
}

void FammByteCodeGenerator::execute(tree::ParseTree* node) {
    visit(node);
}

void FammByteCodeGenerator::visitProgram(FAMMParser::ProgramContext* node) {
    for (auto* line : node->line()) {
        visitLine(line);
    }
}

void FammByteCodeGenerator::visitExpression(FAMMParser::ExpressionContext* ctx) {
    if (auto* constCtx = dynamic_cast<FAMMParser::ConstantContext*>(ctx)) {
        visitConstantExpression(constCtx);
    } else if (auto* addSubCtx = dynamic_cast<FAMMParser::AddSubExpressionContext*>(ctx)) {
        visitAddSubExpression(addSubCtx);
    } else if (auto* mulDivCtx = dynamic_cast<FAMMParser::MulDivExpressionContext*>(ctx)) {
        visitMulDivExpression(mulDivCtx);
    } else if (auto* compareCtx = dynamic_cast<FAMMParser::CompareExpressionContext*>(ctx)) {
        visitCompareExpression(compareCtx);
    } else if (auto* boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(ctx)) {
        visitBoolExpression(boolCtx);
    } else if (auto* negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(ctx)) {
        visitNegationExpression(negationCtx);
    } else if (auto* funcCallCtx = dynamic_cast<FAMMParser::FunctionCallContext*>(ctx)) {
        visitFunctionCallExpression(funcCallCtx);
    } else if (auto* identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(ctx)) {
        visitIdentifierExpression(identCtx);
    }
}

void FammByteCodeGenerator::visitConstantExpression(FAMMParser::ConstantContext* ctx) {
    program.emplace_back(Instr::PUSH);
    
    if (ctx->INTEGER_LIT()) {
        program.emplace_back(static_cast<int64_t>(std::stoll(ctx->INTEGER_LIT()->getText())));
    } else if (ctx->BOOL_LIT()) {
        program.emplace_back(ctx->BOOL_LIT()->getText() == "true");
    }
}

void FammByteCodeGenerator::visitAddSubExpression(FAMMParser::AddSubExpressionContext* ctx) {
    execute(ctx->expression(0));
    execute(ctx->expression(1));
    
    if (ctx->addOp()->PLUS()) {
        program.emplace_back(Instr::ADD);
    } else {
        program.emplace_back(Instr::SUB);
    }
}

void FammByteCodeGenerator::visitMulDivExpression(FAMMParser::MulDivExpressionContext* ctx) {
    execute(ctx->expression(0));  // Вычисляем левый операнд
    execute(ctx->expression(1));  // Вычисляем правый операнд

    auto multOp = ctx->multOp();
    if (multOp->MULT()) {
        program.emplace_back(Instr::MULT);
    } else if (multOp->DIV()) {
        program.emplace_back(Instr::DIV);
    } else if (multOp->FLOOR_DIV()) {
        program.emplace_back(Instr::FLOOR_DIV);
    } else if (multOp->MOD()) {
        program.emplace_back(Instr::MOD);
    } else {
        throw std::runtime_error("Unknown multiplication/division operator");
    }
}

void FammByteCodeGenerator::visitCompareExpression(FAMMParser::CompareExpressionContext* ctx) {
    execute(ctx->expression(0));
    execute(ctx->expression(1));
    
    auto op = ctx->compareOp();
    if (op->EQ()) program.emplace_back(Instr::IF_EQ);
    else if (op->NEQ()) program.emplace_back(Instr::IF_NE);
    else if (op->LT()) program.emplace_back(Instr::IF_LT);
    else if (op->GT()) program.emplace_back(Instr::IF_GT);
    else if (op->LE()) program.emplace_back(Instr::IF_LE);
    else if (op->GE()) program.emplace_back(Instr::IF_GE);
}

void FammByteCodeGenerator::visitBoolExpression(FAMMParser::BoolExpressionContext* ctx) {
    execute(ctx->expression(0));
    execute(ctx->expression(1));
    
    if (ctx->boolOp()->AND()) {
        program.emplace_back(Instr::AND);
    } else {
        program.emplace_back(Instr::OR);
    }
}

void FammByteCodeGenerator::visitNegationExpression(FAMMParser::NegationExpressionContext* ctx) {
    execute(ctx->expression());
    program.emplace_back(Instr::NOT);
}

void FammByteCodeGenerator::visitFunctionCallExpression(FAMMParser::FunctionCallContext* ctx) {
    // Push arguments in reverse order
    for (auto it = ctx->expression().rbegin(); it != ctx->expression().rend(); ++it) {
        execute(*it);
    }

    program.emplace_back(Instr::PUSH);
    program.emplace_back(Instr::CALL);
    program.emplace_back(ctx->IDENTIFIER()->getText());
}

void FammByteCodeGenerator::visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* ctx) {
    program.emplace_back(Instr::LOAD);
    program.emplace_back(ctx->IDENTIFIER()->getText());
}

void FammByteCodeGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (auto* declDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionContext*>(node)) {
        visitDeclarationWithDefinition(declDef);
    } else if (auto* returnStmt = dynamic_cast<FAMMParser::ReturnStatementContext*>(node)) {
        visitReturnStatement(returnStmt);
    } else if (auto* block = dynamic_cast<FAMMParser::BlockContext*>(node)) {
        visitBlock(block);
    }
}

void FammByteCodeGenerator::visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
    execute(node->expression());
    program.emplace_back(Instr::STORE);
    program.emplace_back(node->IDENTIFIER()->getText());
}

void FammByteCodeGenerator::visitReturnStatement(FAMMParser::ReturnStatementContext* ctx) {
    if (ctx->expression()) {
        execute(ctx->expression());
    }
    program.push_back(Instr::RET);
}

void FammByteCodeGenerator::visitBlock(FAMMParser::BlockContext* block) {
    if (auto* funcBlock = dynamic_cast<FAMMParser::FunctionBlockContext*>(block)) {
        visitFunctionBlock(funcBlock);
    } else if (auto* ifBlock = dynamic_cast<FAMMParser::IfBlockContext*>(block)) {
        visitIfBlock(ifBlock);
    } else if (auto* whileBlock = dynamic_cast<FAMMParser::WhileBlockContext*>(block)) {
        visitWhileBlock(whileBlock);
    } else if (auto* forBlock = dynamic_cast<FAMMParser::ForBlockContext*>(block)) {
        visitForBlock(forBlock);
    }
}

void FammByteCodeGenerator::visitFunctionBlock(FAMMParser::FunctionBlockContext* node) {
    program.push_back(Instr::FRAME_APPEND);
    
    for (auto* statement : node->statement()) {
        execute(statement);
    }
    
    program.push_back(Instr::FRAME_POP);
}

void FammByteCodeGenerator::visitIfBlock(FAMMParser::IfBlockContext* ctx) {
    execute(ctx->condition);
    
    size_t jumpPos = program.size();
    program.push_back(Instr::IF_EQ);
    program.push_back(static_cast<int64_t>(0)); // Placeholder for jump address
    
    execute(ctx->thenBlock);
    
    if (ctx->elseBlock) {
        size_t elseJumpPos = program.size();
        program.push_back(Instr::GOTO);
        program.push_back(static_cast<int64_t>(0)); // Placeholder
        
        size_t elseStart = program.size();
        program[jumpPos + 1] = static_cast<int64_t>(elseStart);
        
        execute(ctx->elseBlock);
        
        size_t afterElse = program.size();
        program[elseJumpPos + 1] = static_cast<int64_t>(afterElse);
    } else {
        program[jumpPos + 1] = static_cast<int64_t>(program.size());
    }
}

void FammByteCodeGenerator::visitWhileBlock(FAMMParser::WhileBlockContext* ctx) {
    size_t loopStart = program.size();
    
    execute(ctx->condition);
    
    size_t condJumpPos = program.size();
    program.push_back(Instr::IF_EQ);
    program.push_back(static_cast<int64_t>(0));
    
    execute(ctx->block);
    
    program.push_back(Instr::GOTO);
    program.push_back(static_cast<int64_t>(loopStart));
    
    program[condJumpPos + 1] = static_cast<int64_t>(program.size());
}

void FammByteCodeGenerator::visitForBlock(FAMMParser::ForBlockContext* ctx) {
    execute(ctx->init);
    
    size_t loopStart = program.size();
    execute(ctx->condition);
    
    size_t condJumpPos = program.size();
    program.push_back(Instr::IF_EQ);
    program.push_back(static_cast<int64_t>(0));
    
    execute(ctx->block);
    execute(ctx->increment);
    
    program.push_back(Instr::GOTO);
    program.push_back(static_cast<int64_t>(loopStart));
    
    program[condJumpPos + 1] = static_cast<int64_t>(program.size());
}