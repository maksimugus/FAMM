#include "CustomVisitor.h"

#include <iomanip>
#include <ranges>

std::any FammByteCodeGenerator::visit(tree::ParseTree* node) {
    if (const auto program = dynamic_cast<FAMMParser::ProgramContext*>(node)) {
        visitProgram(program);
        return nullptr;
    }
    if (const auto line = dynamic_cast<FAMMParser::LineContext*>(node)) {
        visitLine(line);
        return nullptr;
    }
    if (const auto expr = dynamic_cast<FAMMParser::ExpressionContext*>(node)) {
        visitExpression(expr);
        return nullptr;
    }
    if (const auto stat = dynamic_cast<FAMMParser::StatementContext*>(node)) {
        visitStatement(stat);
        return nullptr;
    }
    if (const auto scope = dynamic_cast<FAMMParser::ScopeContext*>(node)) {
        visitScope(scope);
        return nullptr;
    }
    if (const auto declWithDef = dynamic_cast<FAMMParser::DeclarationWithDefinitionContext*>(node)) {
        visitDeclarationWithDefinition(declWithDef);
        return nullptr;
    }
    return nullptr;
}

void FammByteCodeGenerator::execute(tree::ParseTree* node) {
    visit(node);
}

void FammByteCodeGenerator::visitProgram(FAMMParser::ProgramContext* node) {
    for (auto* line : node->line()) {
        visitLine(line);
    }
}

void FammByteCodeGenerator::visitExpression(FAMMParser::ExpressionContext* expressionContext) {
    if (const auto addSubCtx = dynamic_cast<FAMMParser::AddSubExpressionContext*>(expressionContext)) {
        return visitAddSubExpression(addSubCtx);
    }
    if (const auto mulDivCtx = dynamic_cast<FAMMParser::MulDivExpressionContext*>(expressionContext)) {
        return visitMulDivExpression(mulDivCtx);
    }
    if (const auto constCtx = dynamic_cast<FAMMParser::ConstantExpressionContext*>(expressionContext)) {
        return visitConstantExpression(constCtx->constant());
    }
    if (const auto parenCtx = dynamic_cast<FAMMParser::ParenExpressionContext*>(expressionContext)) {
        return visitExpression(parenCtx->expression());
    }
    if (const auto compareCtx = dynamic_cast<FAMMParser::CompareExpressionContext*>(expressionContext)) {
        return visitCompareExpression(compareCtx);
    }
    if (const auto boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(expressionContext)) {
        return visitBoolExpression(boolCtx);
    }
    if (const auto negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(expressionContext)) {
        return visitNegationExpression(negationCtx);
    }
    if (const auto funcCallCtx = dynamic_cast<FAMMParser::FunctionCallExpressionContext*>(expressionContext)) {
        return visitFunctionCallExpression(funcCallCtx->functionCall());
    }
    if (const auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(expressionContext)) {
        return visitIdentifierExpression(identCtx);
    }
    if (const auto negativeCtx = dynamic_cast<FAMMParser::NegativeExpressionContext*>(expressionContext)) {
        return visitNegativeExpression(negativeCtx);
    }
    if (const auto arrayAccessCtx = dynamic_cast<FAMMParser::ArrayAccessExpressionContext*>(expressionContext)) {
        return visitArrayAccessExpression(arrayAccessCtx);
    }

    throw std::runtime_error("Unknown expression type");
}

void FammByteCodeGenerator::visitConstantExpression(FAMMParser::ConstantContext* ctx) {
    if (auto* arrayLiteral = ctx->arrayLiteral()) {
        for (auto expr : arrayLiteral->expression()) {
            execute(expr);
        }

        program.emplace_back(Instr::ARR_MAKE);
        program.emplace_back(static_cast<int64_t>(arrayLiteral->expression().size()));
        return;
    }

    program.emplace_back(Instr::PUSH);

    if (ctx->INTEGER_LIT()) {
        program.emplace_back(static_cast<int64_t>(std::stoll(ctx->INTEGER_LIT()->getText())));
    }
    else if (ctx->BOOL_LIT()) {
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
    execute(ctx->expression(0)); // Вычисляем левый операнд
    execute(ctx->expression(1)); // Вычисляем правый операнд

    auto multOp = ctx->multOp();
    if (multOp->MULT()) {
        program.emplace_back(Instr::MUL);
    } else if (multOp->DIV()) {
        program.emplace_back(Instr::DIV);
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
    if (op->EQ()) {
        program.emplace_back(Instr::EQ);
    } else if (op->NEQ()) {
        program.emplace_back(Instr::NE);
    } else if (op->LT()) {
        program.emplace_back(Instr::LT);
    } else if (op->GT()) {
        program.emplace_back(Instr::GT);
    } else if (op->LE()) {
        program.emplace_back(Instr::LE);
    } else if (op->GE()) {
        program.emplace_back(Instr::GE);
    }
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
    auto expression = ctx->expression();
    for (auto it = expression.rbegin(); it != expression.rend(); ++it) {
        execute(*it);
    }
    auto fname = ctx->IDENTIFIER()->getText();
    if (fname == "display") {
        if (expression.size() > 1)
            throw "Number of display args must be 1";
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
    if (const auto arrayElementStatement =
        dynamic_cast<FAMMParser::ArrayElementDefinitionStatementContext*>(node)) {
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
    auto endFuncDecl = program.size();
    program.emplace_back(static_cast<int64_t>(0)); // резерв для

    // 4. Добавляем тело функции
    visitScope(node->scope());

    program[endFuncDecl] = static_cast<int64_t>(program.size());
}

void FammByteCodeGenerator::visitIfBlock(FAMMParser::IfBlockContext* ctx) {
    // 1. Вычисляем условие
    execute(ctx->expression());

    // 2. Добавляем инструкцию условного перехода и резервируем место для адреса
    size_t condJumpPos = program.size();
    program.emplace_back(Instr::IF); // Используем IF_EQ, так как условие уже на стеке
    program.emplace_back(static_cast<int64_t>(0)); // Placeholder для адреса перехода

    // 3. Генерируем код для then-блока
    execute(ctx->scope(0));

    // 4. Если есть else-блок
    if (ctx->ELSE() && ctx->scope().size() > 1) {
        // Добавляем GOTO для пропуска else-блока после выполнения then-блока
        size_t thenJumpPos = program.size();
        program.emplace_back(Instr::GOTO);
        program.emplace_back(static_cast<int64_t>(0)); // Placeholder для адреса после else

        // Записываем адрес начала else-блока в условный переход
        size_t elseStart         = program.size();
        program[condJumpPos + 1] = static_cast<int64_t>(elseStart);

        // Генерируем код для else-блока
        execute(ctx->scope(1));

        // Обновляем адрес перехода после else-блока
        size_t afterElse         = program.size();
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
    program.emplace_back(Instr::LOAD);
    auto forLoopVarName = ctx->declarationWithDefinition()->IDENTIFIER()->getText();
    program.emplace_back(forLoopVarName);
    execute(ctx->expression(0));
    program.emplace_back(Instr::LT);
    // 4. Условный переход для выхода из цикла
    size_t condJumpPos = program.size();
    program.emplace_back(Instr::IF);
    program.emplace_back(static_cast<int64_t>(0)); // Placeholder для адреса выхода

    // 5. Тело цикла
    execute(ctx->scope());

    // 6. Инкремент (выражение после BY)
    execute(ctx->expression(1));
    program.emplace_back(Instr::LOAD);
    program.emplace_back(forLoopVarName);
    program.emplace_back(Instr::ADD);
    program.emplace_back(Instr::STORE);
    program.emplace_back(forLoopVarName);

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
            program.emplace_back(static_cast<int64_t>(0));
        } else if (baseType->BOOL()) {
            program.emplace_back(false);
        }
    }

    if (auto* arrayType = typeCtx->arrayType()) {
        auto elementType = arrayType->type();
        auto sizeCtx     = arrayType->size();
        int64_t size     = std::stoll(sizeCtx->INTEGER_LIT()->getText());

        if (elementType->baseType()) {
            if (elementType->baseType()->INT()) {
                program.emplace_back(std::vector<int64_t>(size, 0));
            } else if (elementType->baseType()->BOOL()) {
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
    // Сначала вычисляем выражение внутри
    execute(negativeCtx->expression());

    // Затем помещаем -1 на стек
    program.emplace_back(Instr::PUSH);
    program.emplace_back(static_cast<int64_t>(-1));

    // Умножаем значение на -1
    program.emplace_back(Instr::MUL);
}

void FammByteCodeGenerator::printFammIR() const {
    std::cout << "=== FAMM Bytecode Instructions ===" << std::endl;

    for (size_t i = 0; i < program.size(); ++i) {
        std::cout << std::setw(4) << i << ": ";

        const auto& instr = program[i];
        if (std::holds_alternative<Instr>(instr)) {
            auto instruction = std::get<Instr>(instr);
            switch (instruction) {
            case Instr::NOP:
                std::cout << "NOP";
                break;
            case Instr::PUSH:
                std::cout << "PUSH";
                break;
            case Instr::ADD:
                std::cout << "ADD";
                break;
            case Instr::SUB:
                std::cout << "SUB";
                break;
            case Instr::MUL:
                std::cout << "MULT";
                break;
            case Instr::DIV:
                std::cout << "DIV";
                break;
            case Instr::MOD:
                std::cout << "MOD";
                break;
            case Instr::AND:
                std::cout << "AND";
                break;
            case Instr::OR:
                std::cout << "OR";
                break;
            case Instr::NOT:
                std::cout << "NOT";
                break;
            case Instr::PRINT:
                std::cout << "PRINT";
                break;
            case Instr::LOAD:
                std::cout << "LOAD";
                break;
            case Instr::STORE:
                std::cout << "STORE";
                break;
            case Instr::GOTO:
                std::cout << "GOTO";
                break;
            case Instr::FRAME_PUSH:
                std::cout << "FRAME_PUSH";
                break;
            case Instr::FRAME_POP:
                std::cout << "FRAME_POP";
                break;
            case Instr::DECL_FUNC:
                std::cout << "DECL_FUNC";
                break;
            case Instr::CALL:
                std::cout << "CALL";
                break;
            case Instr::RET:
                std::cout << "RET";
                break;
            case Instr::EQ:
                std::cout << "EQ";
                break;
            case Instr::NE:
                std::cout << "NE";
                break;
            case Instr::LT:
                std::cout << "LT";
                break;
            case Instr::GT:
                std::cout << "GT";
                break;
            case Instr::LE:
                std::cout << "LE";
                break;
            case Instr::GE:
                std::cout << "GE";
                break;
            case Instr::IF:
                std::cout << "IF";
                break;
            case Instr::ARR_LOAD_ELEM:
                std::cout << "ARR_LOAD_ELEM";
                break;
            case Instr::ARR_STORE_ELEM:
                std::cout << "ARR_STORE_ELEM";
                break;
            case Instr::ARR_MAKE:
                std::cout << "ARR_MAKE";
                break;
            default:
                std::cout << "UNKNOWN";
                break;
            }
        } else {
            const auto& value = std::get<Value>(instr);
            if (std::holds_alternative<int64_t>(value)) {
                std::cout << std::get<int64_t>(value);
            } else if (std::holds_alternative<bool>(value)) {
                std::cout << (std::get<bool>(value) ? "true" : "false");
            } else if (std::holds_alternative<std::string>(value)) {
                std::cout << "\"" << std::get<std::string>(value) << "\"";
            } else if (std::holds_alternative<std::vector<std::string>>(value)) {
                const auto& params = std::get<std::vector<std::string>>(value);
                std::cout << "[";
                for (size_t j = 0; j < params.size(); ++j) {
                    if (j > 0) {
                        std::cout << ", ";
                    }
                    std::cout << params[j];
                }
                std::cout << "]";
            } else if (std::holds_alternative<std::vector<int64_t>>(value)) {
                const auto& array = std::get<std::vector<int64_t>>(value);
                std::cout << "[";
                for (size_t j = 0; j < array.size(); ++j) {
                    if (j > 0) {
                        std::cout << ", ";
                    }
                    std::cout << array[j];
                }
                std::cout << "]";
            } else if (std::holds_alternative<std::vector<bool>>(value)) {
                const auto& array = std::get<std::vector<bool>>(value);
                std::cout << "[";
                for (size_t j = 0; j < array.size(); ++j) {
                    if (j > 0) {
                        std::cout << ", ";
                    }
                    std::cout << (array[j] ? "true" : "false");
                }
                std::cout << "]";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "=== End of Bytecode ===" << std::endl;
}

void FammByteCodeGenerator::visitDefinition(FAMMParser::DefinitionContext* node) {
    // 1. Вычисляем правую часть выражения и помещаем результат на стек
    execute(node->expression());

    // 2. Получаем оператор присваивания
    auto varName= node->IDENTIFIER()->getText();
    auto* assignOp = node->assignmentOp();
    if (!assignOp->ASSIGNMENT()) {
        // Составное присваивание (+=, -=, *=, /=)
        // Сначала загружаем текущее значение переменной
        program.emplace_back(Instr::LOAD);
        program.emplace_back(varName);

        // Выполняем соответствующую операцию
        if (assignOp->PLUS_ASSIGNMENT()) {
            program.emplace_back(Instr::ADD);
        }
        else if (assignOp->MINUS_ASSIGNMENT()) {
            program.emplace_back(Instr::SUB);
        }
        else if (assignOp->MULT_ASSIGNMENT()) {
            program.emplace_back(Instr::MUL);
        }
        else if (assignOp->DIV_ASSIGNMENT()) {
            program.emplace_back(Instr::DIV);
        }
    }

    program.emplace_back(Instr::STORE);
    program.emplace_back(varName);
}

void FammByteCodeGenerator::visitArrayAccessExpression(FAMMParser::ArrayAccessExpressionContext* arrayAccessCtx) {
    // 1. Вычисляем индекс (второе выражение)
    execute(arrayAccessCtx->expression(1));

    // 2. Вычисляем выражение массива (первое выражение)
    execute(arrayAccessCtx->expression(0));

    // 3. Добавляем инструкцию доступа к элементу массива
    program.emplace_back(Instr::ARR_LOAD_ELEM);
}

void FammByteCodeGenerator::visitArrayElementDefinition(FAMMParser::ArrayElementDefinitionContext* arrayElementCtx) {
    execute(arrayElementCtx->expression(2)); // expr to set in arr
    execute(arrayElementCtx->expression(1)); // idx
    auto identifierExpr = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(arrayElementCtx->expression(0)); // identifier

    program.emplace_back(identifierExpr->IDENTIFIER()->getText());

    program.emplace_back(Instr::ARR_STORE_ELEM);
}
