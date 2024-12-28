
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "FAMMParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by FAMMParser.
 */
class  FAMMListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(FAMMParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(FAMMParser::ProgramContext *ctx) = 0;

  virtual void enterLine(FAMMParser::LineContext *ctx) = 0;
  virtual void exitLine(FAMMParser::LineContext *ctx) = 0;

  virtual void enterStatement(FAMMParser::StatementContext *ctx) = 0;
  virtual void exitStatement(FAMMParser::StatementContext *ctx) = 0;

  virtual void enterIfBlock(FAMMParser::IfBlockContext *ctx) = 0;
  virtual void exitIfBlock(FAMMParser::IfBlockContext *ctx) = 0;

  virtual void enterWhileBlock(FAMMParser::WhileBlockContext *ctx) = 0;
  virtual void exitWhileBlock(FAMMParser::WhileBlockContext *ctx) = 0;

  virtual void enterForBlock(FAMMParser::ForBlockContext *ctx) = 0;
  virtual void exitForBlock(FAMMParser::ForBlockContext *ctx) = 0;

  virtual void enterBlock(FAMMParser::BlockContext *ctx) = 0;
  virtual void exitBlock(FAMMParser::BlockContext *ctx) = 0;

  virtual void enterDeclaration(FAMMParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(FAMMParser::DeclarationContext *ctx) = 0;

  virtual void enterDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext *ctx) = 0;
  virtual void exitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext *ctx) = 0;

  virtual void enterDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext *ctx) = 0;
  virtual void exitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext *ctx) = 0;

  virtual void enterDefinition(FAMMParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(FAMMParser::DefinitionContext *ctx) = 0;

  virtual void enterFunctionCall(FAMMParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(FAMMParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterParameterList(FAMMParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(FAMMParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(FAMMParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(FAMMParser::ParameterContext *ctx) = 0;

  virtual void enterAddSubExpression(FAMMParser::AddSubExpressionContext *ctx) = 0;
  virtual void exitAddSubExpression(FAMMParser::AddSubExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(FAMMParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(FAMMParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterParenExpression(FAMMParser::ParenExpressionContext *ctx) = 0;
  virtual void exitParenExpression(FAMMParser::ParenExpressionContext *ctx) = 0;

  virtual void enterCompareExpression(FAMMParser::CompareExpressionContext *ctx) = 0;
  virtual void exitCompareExpression(FAMMParser::CompareExpressionContext *ctx) = 0;

  virtual void enterNegationExpression(FAMMParser::NegationExpressionContext *ctx) = 0;
  virtual void exitNegationExpression(FAMMParser::NegationExpressionContext *ctx) = 0;

  virtual void enterFunctionCallExpression(FAMMParser::FunctionCallExpressionContext *ctx) = 0;
  virtual void exitFunctionCallExpression(FAMMParser::FunctionCallExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(FAMMParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(FAMMParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBoolExpression(FAMMParser::BoolExpressionContext *ctx) = 0;
  virtual void exitBoolExpression(FAMMParser::BoolExpressionContext *ctx) = 0;

  virtual void enterMulDivExpression(FAMMParser::MulDivExpressionContext *ctx) = 0;
  virtual void exitMulDivExpression(FAMMParser::MulDivExpressionContext *ctx) = 0;

  virtual void enterAssignmentOp(FAMMParser::AssignmentOpContext *ctx) = 0;
  virtual void exitAssignmentOp(FAMMParser::AssignmentOpContext *ctx) = 0;

  virtual void enterMultOp(FAMMParser::MultOpContext *ctx) = 0;
  virtual void exitMultOp(FAMMParser::MultOpContext *ctx) = 0;

  virtual void enterAddOp(FAMMParser::AddOpContext *ctx) = 0;
  virtual void exitAddOp(FAMMParser::AddOpContext *ctx) = 0;

  virtual void enterCompareOp(FAMMParser::CompareOpContext *ctx) = 0;
  virtual void exitCompareOp(FAMMParser::CompareOpContext *ctx) = 0;

  virtual void enterBoolOp(FAMMParser::BoolOpContext *ctx) = 0;
  virtual void exitBoolOp(FAMMParser::BoolOpContext *ctx) = 0;

  virtual void enterType(FAMMParser::TypeContext *ctx) = 0;
  virtual void exitType(FAMMParser::TypeContext *ctx) = 0;

  virtual void enterConstant(FAMMParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(FAMMParser::ConstantContext *ctx) = 0;


};

