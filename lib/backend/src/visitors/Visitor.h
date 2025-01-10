#pragma once

#include "FAMMParser.h"
#include "Scope.h"
#include "antlr4-runtime.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"


using namespace antlr4;

class LLVMIRGenerator final : public tree::AbstractParseTreeVisitor {
public:
    LLVMIRGenerator();

    void printIR() const;
    std::unique_ptr<llvm::Module> getModule() {
        return std::move(module);
    }

    void enterScope();
    void exitScope();
    llvm::AllocaInst* findVariable(const std::string& name);

    void EnsureTypeEq(const llvm::Type* firstType, const llvm::Type* secondType);

    std::any visit(tree::ParseTree* node) override; // big if
    llvm::Value* execute(tree::ParseTree* node); // TODO rename ? run, exec, parse, visitALl

    llvm::Value* visitProgram(FAMMParser::ProgramContext* node);

    llvm::Value* visitExpression(FAMMParser::ExpressionContext* expressionContext); // big if

    llvm::Value* visitConstantExpression(FAMMParser::ConstantContext* constantContext);
    llvm::Value* visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx);
    llvm::Value* visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx);
    llvm::Value* visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx);
    llvm::Value* visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx);
    llvm::Value* visitNegationExpression(FAMMParser::NegationExpressionContext* negationCtx);
    llvm::Value* visitFunctionCallExpression(FAMMParser::FunctionCallContext* node);
    llvm::Value* visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx);
    llvm::Value* visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx);

    llvm::Value* createIntComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createDoubleComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createBoolComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createStringComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);

    llvm::Type* getLLVMType(FAMMParser::TypeContext* typeContext);

    llvm::Value* visitStatement(FAMMParser::StatementContext* node); // big if

    llvm::Value* visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node);
    llvm::Value* visitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext* node);
    llvm::Value* visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx);
    llvm::Value* visitDefinition(FAMMParser::DefinitionContext* node);

    llvm::Value* visitBlock(FAMMParser::BlockContext* block); // big if

    llvm::Value* visitFunctionBlock(FAMMParser::FunctionBlockContext* node);
    llvm::Value* visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx);
    llvm::Value* visitWhileBlock(FAMMParser::WhileBlockContext* whileBlockCtx);
    llvm::Value* visitForBlock(FAMMParser::ForBlockContext* forBlockCtx);

    llvm::Value* visitScope(FAMMParser::ScopeContext* scope);
    llvm::Value* visitLine(FAMMParser::LineContext* node); // big if


private:
    std::unique_ptr<llvm::LLVMContext> context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;
    std::vector<Scope> scopeStack;
};
