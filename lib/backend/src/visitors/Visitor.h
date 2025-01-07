#pragma once

#include "FAMMParser.h"
#include "antlr4-runtime.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"

using namespace antlr4;

class LLVMIRGenerator : public tree::AbstractParseTreeVisitor {
public:
    LLVMIRGenerator();

    void printIR() const;

    std::any visit(tree::ParseTree* node) override;
    std::any visitProgram(FAMMParser::ProgramContext* node);
    llvm::Value* visitConstant(FAMMParser::ConstantContext* constantContext);
    llvm::Value* visitAddSubExpression(FAMMParser::AddSubExpressionContext* addSubCtx);
    llvm::Value* visitMulDivExpression(FAMMParser::MulDivExpressionContext* mulDivCtx);
    llvm::Value* createIntComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createFloatComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* createBoolComparison(
        FAMMParser::CompareExpressionContext* compareCtx, llvm::Value* left, llvm::Value* right);
    llvm::Value* visitCompareExpression(FAMMParser::CompareExpressionContext* compareCtx);
    llvm::Value* visitExpression(FAMMParser::ExpressionContext* expressionContext);

    llvm::Type* getLLVMType(const std::string& typeStr);
    std::string visitType(FAMMParser::TypeContext* typeContext);
    std::string visitBaseType(FAMMParser::BaseTypeContext* baseTypeContext);

    void visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node);
    std::any visitDeclaration(FAMMParser::DeclarationContext* node);
    std::any visitStatement(FAMMParser::StatementContext* node);
    std::any visitLine(FAMMParser::LineContext* node);

private:
    llvm::LLVMContext context;
    llvm::IRBuilder<> builder;
    llvm::Module module;
};
