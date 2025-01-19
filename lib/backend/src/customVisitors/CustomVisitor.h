#pragma once

#include "FAMMParser.h"
#include <vector>
#include "Scope.h"
#include "antlr4-runtime.h"
#include "interpreter/CustomInterpreter.h"


using namespace antlr4;

class FammByteCodeGenerator final : public tree::AbstractParseTreeVisitor {
public:

    void printFammIR() const;

    std::any visit(tree::ParseTree* node) override; // big if
    void execute(tree::ParseTree* node); // TODO rename ? run, exec, parse, visitALl

    void visitProgram(FAMMParser::ProgramContext* node);

    void visitExpression(FAMMParser::ExpressionContext* expressionContext); // big if

    void visitConstantExpression(FAMMParser::ConstantContext* constantContext);
    void visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx);
    void visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx);
    void visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx);
    void visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx);
    void visitNegationExpression(FAMMParser::NegationExpressionContext* negationCtx);
    void visitFunctionCallExpression(FAMMParser::FunctionCallContext* node);
    void visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx);
    void visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx);
    void visitArrayAccessExpression(FAMMParser::ArrayAccessExpressionContext* arrayAccessCtx);

    void visitStatement(FAMMParser::StatementContext* node); // big if

    void visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node);
    void visitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext* node);
    void visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx);
    void visitDefinition(FAMMParser::DefinitionContext* node);
    void visitArrayElementDefinition(FAMMParser::ArrayElementDefinitionContext* arrayElementCtx);

    void visitBlock(FAMMParser::BlockContext* block); // big if

    void visitFunctionBlock(FAMMParser::FunctionBlockContext* node);
    void visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx);
    void visitWhileBlock(FAMMParser::WhileBlockContext* whileBlockCtx);
    void visitForBlock(FAMMParser::ForBlockContext* forBlockCtx);

    void visitScope(FAMMParser::ScopeContext* scope);
    void visitLine(FAMMParser::LineContext* node); // big if


private:
    std::vector<ValueOrInstr> program = {};
    void pushDefaultValue(FAMMParser::TypeContext* typeCtx);
};
