#include "CustomVisitor.h"

#include <ranges>

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
    } else if (const auto scope = dynamic_cast<FAMMParser::ScopeContext*>(node)) {
        visitScope(scope);
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
    if (op->EQ()) program.emplace_back(Instr::EQ);
    else if (op->NEQ()) program.emplace_back(Instr::NE);
    else if (op->LT()) program.emplace_back(Instr::LT);
    else if (op->GT()) program.emplace_back(Instr::GT);
    else if (op->LE()) program.emplace_back(Instr::LE);
    else if (op->GE()) program.emplace_back(Instr::GE);
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
    for (auto & it : std::ranges::reverse_view(ctx->expression())) {
        execute(it);
    }
    auto fname = ctx->IDENTIFIER()->getText();
    if (fname == "display"){
        program.emplace_back(Instr::PRINT);
        return;
    }

    program.emplace_back(Instr::CALL);
    program.emplace_back(fname);
}

void FammByteCodeGenerator::visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* ctx) {
    program.emplace_back(Instr::LOAD);
    program.emplace_back(ctx->IDENTIFIER()->getText());
}

void FammByteCodeGenerator::visitStatement(FAMMParser::StatementContext* node) {
    if (const auto declWithDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionStatementContext*>(node)) {
        return visitDeclarationWithDefinition(declWithDef->declarationWithDefinition());
    }
    if (const auto declWithoutDef = dynamic_cast<FAMMParser::DeclarationWithoutDefinitionStatementContext*>(node)) {
        return visitDeclarationWithoutDefinition(declWithoutDef->declarationWithoutDefinition());
    }
    if (const auto definition = dynamic_cast<FAMMParser::DefinitionStatementContext*>(node)) {
        return visitDefinition(definition->definition());
    }
    if (const auto returnStatement = dynamic_cast<FAMMParser::ReturnStatementContext*>(node)) {
        return visitReturnStatement(returnStatement);
    }
    if (const auto blockStatement = dynamic_cast<FAMMParser::BlockStatementContext*>(node)) {
        return visitBlock(blockStatement->block());
    }
    if (const auto arrayElementStatement = dynamic_cast<FAMMParser::ArrayElementDefinitionStatementContext*>(node)) {
        return visitArrayElementDefinition(arrayElementStatement->arrayElementDefinition());
    }

    throw std::runtime_error("Unknown statement context");
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
    program.emplace_back(Instr::RET);
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
    // 1. Добавляем инструкцию объявления функции
    program.emplace_back(Instr::DECL_FUNC);

    // 2. Добавляем имя функции
    program.emplace_back(node->IDENTIFIER()->getText());

    // 3. Собираем и добавляем список параметров
    std::vector<std::string> paramNames;
    if (auto* paramList = node->parameterList()) {
        for (auto* param : paramList->parameter()) {
            paramNames.push_back(param->IDENTIFIER()->getText());
        }
    }
    program.emplace_back(paramNames);

    // 4. Добавляем тело функции
    visitScope(node->scope());
}

void FammByteCodeGenerator::visitIfBlock(FAMMParser::IfBlockContext* ctx) {
    // 1. Вычисляем условие
    execute(ctx->expression());

    // 2. Добавляем инструкцию условного перехода и резервируем место для адреса
    size_t condJumpPos = program.size();
    program.emplace_back(Instr::IF);  // Используем IF_EQ, так как условие уже на стеке
    program.emplace_back(static_cast<int64_t>(0));  // Placeholder для адреса перехода

    // 3. Генерируем код для then-блока
    execute(ctx->scope(0));

    // 4. Если есть else-блок
    if (ctx->ELSE() && ctx->scope().size() > 1) {
        // Добавляем GOTO для пропуска else-блока после выполнения then-блока
        size_t thenJumpPos = program.size();
        program.emplace_back(Instr::GOTO);
        program.emplace_back(static_cast<int64_t>(0));  // Placeholder для адреса после else

        // Записываем адрес начала else-блока в условный переход
        size_t elseStart = program.size();
        program[condJumpPos + 1] = static_cast<int64_t>(elseStart);

        // Генерируем код для else-блока
        execute(ctx->scope(1));

        // Обновляем адрес перехода после else-блока
        size_t afterElse = program.size();
        program[thenJumpPos + 1] = static_cast<int64_t>(afterElse);
    } else {
        // Если else-блока нет, просто записываем адрес следующей инструкции
        program[condJumpPos + 1] = static_cast<int64_t>(program.size());
    }
}

void FammByteCodeGenerator::visitWhileBlock(FAMMParser::WhileBlockContext* ctx) {
    size_t loopStart = program.size();
    
    execute(ctx->expression());
    
    size_t condJumpPos = program.size();
    program.emplace_back(Instr::IF);
    program.emplace_back(static_cast<int64_t>(0));
    
    execute(ctx->scope());
    
    program.emplace_back(Instr::GOTO);
    program.emplace_back(static_cast<int64_t>(loopStart));
    
    program[condJumpPos + 1] = static_cast<int64_t>(program.size());
}

void FammByteCodeGenerator::visitForBlock(FAMMParser::ForBlockContext* ctx) {
    // 1. Инициализация переменной цикла
    execute(ctx->declarationWithDefinition());

    // 2. Начало цикла
    size_t loopStart = program.size();

    // 3. Условие цикла (первое выражение после ARROW)
    execute(ctx->expression(0));

    // 4. Условный переход для выхода из цикла
    size_t condJumpPos = program.size();
    program.emplace_back(Instr::IF);
    program.emplace_back(0);  // Placeholder для адреса выхода

    // 5. Тело цикла
    execute(ctx->scope());

    // 6. Инкремент (выражение после BY)
    if (ctx->BY() && ctx->expression().size() > 1) {
        execute(ctx->expression(1));
    } else {
        // Если BY не указан, добавляем инкремент на 1 по умолчанию
        program.emplace_back(Instr::PUSH);
        program.emplace_back(static_cast<int64_t>(1));
    }

    // 7. Возврат к началу цикла
    program.emplace_back(Instr::GOTO);
    program.emplace_back(static_cast<int64_t>(loopStart));

    // 8. Обновляем адрес выхода из цикла
    program[condJumpPos + 1] = static_cast<int64_t>(program.size());
}

void FammByteCodeGenerator::visitScope(FAMMParser::ScopeContext* scope) {
    // Создаем новый фрейм для области видимости
    program.emplace_back(Instr::FRAME_PUSH);

    // Обрабатываем каждую строку кода внутри scope
    for (auto* line : scope->line()) {
        execute(line);
    }

    // Закрываем фрейм области видимости
    program.emplace_back(Instr::FRAME_POP);
}

void FammByteCodeGenerator::visitLine(FAMMParser::LineContext* node) {
    if (const auto statement = dynamic_cast<FAMMParser::StatementLineContext*>(node)) {
        return visitStatement(statement->statement());
    }
    if (const auto expression = dynamic_cast<FAMMParser::ExpressionLineContext*>(node)) {
        return visitExpression(expression->expression());
    }
    throw std::runtime_error("Unknown line context");
}

void FammByteCodeGenerator::pushDefaultValue(FAMMParser::TypeContext* typeCtx) {
    program.emplace_back(Instr::PUSH);
    // Обработка базовых типов
    if (auto* baseType = typeCtx->baseType()) {
        if (baseType->INT()) {
            program.emplace_back(0);
        }
        else if (baseType->BOOL()) {
            program.emplace_back(false);
        }
    }

    if (auto* arrayType = typeCtx->arrayType()) {
        auto elementType = arrayType->type();
        auto sizeCtx = arrayType->size();
        int64_t size = std::stoll(sizeCtx->INTEGER_LIT()->getText());

        if (elementType->baseType()) {
            if (elementType->baseType()->INT()) {
                program.emplace_back(std::vector<int64_t>(size, 0));
            }
            else if (elementType->baseType()->BOOL()) {
                program.emplace_back(std::vector<bool>(size, false));
            }
        }
    }

    throw std::runtime_error("Unsupported type in type declaration");
}

void FammByteCodeGenerator::visitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext* node) {

    // Для каждого идентификатора в объявлении
    for (auto* identifier : node->IDENTIFIER()) {
        // Помещаем значение по умолчанию на стек
        pushDefaultValue(node->type());

        // Сохраняем значение в переменную
        program.emplace_back(Instr::STORE);
        program.emplace_back(identifier->getText());
    }
}

void FammByteCodeGenerator::visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx) {

}
