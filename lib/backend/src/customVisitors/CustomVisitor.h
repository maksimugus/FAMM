#pragma once

#include "FAMMParser.h"
#include <vector>
#include "Scope.h"
#include "antlr4-runtime.h"
#include "interpreter/CustomInterpreter.h"


using namespace antlr4;

class FammByteCodeGenerator final : public tree::AbstractParseTreeVisitor {
public:

    void printIR() const;
    std::unique_ptr<llvm::Module> getModule() {
        return std::move(module);
    }

    void setFammIR() {
        fammIR = true;
    }

    void enterScope();
    void exitScope();
    llvm::AllocaInst* findVariable(const std::string& name);

    void EnsureTypeEq(const llvm::Type* firstType, const llvm::Type* secondType);

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
    bool fammIR                       = false;
    std::vector<ValueOrInstr> program = {};

    std::unique_ptr<llvm::LLVMContext> context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;
    std::vector<Scope> scopeStack;
    void pushDefaultValue(FAMMParser::TypeContext* typeCtx);
};
