#pragma once

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "Scope.h"

#include "antlr4-runtime.h"
#include "FAMMParser.h"

using namespace antlr4;

class LLVMIRGenerator : public tree::AbstractParseTreeVisitor {
public:
    LLVMIRGenerator();

    void printIR() const;

    void enterScope();
    void exitScope();
    llvm::AllocaInst* findVariable(const std::string& name);

    void EnsureTypeEq(llvm::Type* firstType, llvm::Type* secondType);
    std::any visit(tree::ParseTree *node) override;
    std::any visitProgram(FAMMParser::ProgramContext* node);
    llvm::Value* visitConstant(FAMMParser::ConstantContext* constantContext);
    llvm::Value* visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx);
    llvm::Value* visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx);
    llvm::Value* createIntComparison(FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createFloatComparison(FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createBoolComparison(FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx);
    llvm::Value* visitBoolExpression(FAMMParser::BoolExpressionContext* boolCtx);
    llvm::Value* visitNegationExpression(FAMMParser::NegationExpressionContext* negationCtx);
    llvm::Value* visitFunctionCall(FAMMParser::FunctionCallContext* node);
    llvm::Value* visitIdentifierExpression(FAMMParser::IdentifierExpressionContext* identCtx);
    llvm::Value* visitNegativeExpression(FAMMParser::NegativeExpressionContext* negativeCtx);
    llvm::Value* visitExpression(FAMMParser::ExpressionContext* expressionContext);

    llvm::Type* getLLVMType(const std::string& typeStr);
    std::string visitType(FAMMParser::TypeContext* typeContext);
    std::string visitBaseType(FAMMParser::BaseTypeContext* baseTypeContext);

    std::any visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node);
    std::any visitDeclaration(FAMMParser::DeclarationContext* node);
    std::any visitStatement(FAMMParser::StatementContext* node);
    std::any visitFunctionDefinition(FAMMParser::FunctionDefinitionContext* node);
    std::any visitReturnStatement(FAMMParser::ReturnStatementContext* returnCtx);
    std::any visitLine(FAMMParser::LineContext* node);
    llvm::Value* visitIfBlock(FAMMParser::IfBlockContext* ifBlockCtx);
    llvm::Value* visitWhileBlock(FAMMParser::WhileBlockContext* ifBlockCtx);
    std::any visitDefinition(FAMMParser::DefinitionContext* node);
private:
    llvm::LLVMContext context;
    llvm::IRBuilder<> builder;
    llvm::Module module;
    std::vector<Scope> scopeStack;
};