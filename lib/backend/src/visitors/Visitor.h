#pragma once

#include "FAMMParser.h"
#include "Scope.h"
#include "antlr4-runtime.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

using namespace antlr4;

class LLVMIRGenerator : public tree::AbstractParseTreeVisitor {
public:
    LLVMIRGenerator();

    void printIR() const;

    void enterScope();
    void exitScope();
    llvm::AllocaInst* findVariable(const std::string& name);

    void EnsureTypeEq(const llvm::Type* firstType, const llvm::Type* secondType);

    std::any visit(tree::ParseTree* node) override;  // big if

    std::any visitProgram(FAMMParser::ProgramContext* node);

    llvm::Value* visitExpression(FAMMParser::ExpressionContext* expressionContext); // big if

    llvm::Value* visitConstantExpression(FAMMParser::ConstantContext* constantContext);
    llvm::Value* visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx);
    llvm::Value* visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx);
    llvm::Value* createIntComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createFloatComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createBoolComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx);
    llvm::Value* visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx);
    llvm::Value* visitNegationExpression(FAMMParser::NegationExpressionContext* negationCtx);
    llvm::Value* visitFunctionCallExpression(FAMMParser::FunctionCallContext* node);
    llvm::Value* visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx);
    llvm::Value* visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx);


    llvm::Type* getLLVMType(const std::string& typeStr);
    std::string visitType(FAMMParser::TypeContext* typeContext);
    std::string visitBaseType(FAMMParser::BaseTypeContext* baseTypeContext);


    std::any visitStatement(FAMMParser::StatementContext* node); // big if

    std::any visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node);
    std::any visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx);
    std::any visitDefinition(FAMMParser::DefinitionContext* node);

    std::any visitBlock(FAMMParser::BlockContext* block);  // big if

    std::any visitFunctionBlock(FAMMParser::FunctionBlockContext* node);
    std::any visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx);
    std::any visitWhileBlock(FAMMParser::WhileBlockContext* whileBlockCtx);
    std::any visitForBlock(FAMMParser::ForBlockContext* forBlockCtx);

    std::any visitScope(FAMMParser::ScopeContext* scope);
    std::any visitLine(FAMMParser::LineContext* node);  // big if


private:
    llvm::LLVMContext context;
    llvm::IRBuilder<> builder;
    llvm::Module module;
    std::vector<Scope> scopeStack;
};
