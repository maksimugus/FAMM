
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

  virtual void enterFunctionBlock(FAMMParser::FunctionBlockContext *ctx) = 0;
  virtual void exitFunctionBlock(FAMMParser::FunctionBlockContext *ctx) = 0;

  virtual void enterParameterList(FAMMParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(FAMMParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(FAMMParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(FAMMParser::ParameterContext *ctx) = 0;

  virtual void enterReturnType(FAMMParser::ReturnTypeContext *ctx) = 0;
  virtual void exitReturnType(FAMMParser::ReturnTypeContext *ctx) = 0;

  virtual void enterBlock(FAMMParser::BlockContext *ctx) = 0;
  virtual void exitBlock(FAMMParser::BlockContext *ctx) = 0;

  virtual void enterVariableDeclaration(FAMMParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(FAMMParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterVariableDefinition(FAMMParser::VariableDefinitionContext *ctx) = 0;
  virtual void exitVariableDefinition(FAMMParser::VariableDefinitionContext *ctx) = 0;

  virtual void enterFunctionCall(FAMMParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(FAMMParser::FunctionCallContext *ctx) = 0;

  virtual void enterArgumentList(FAMMParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(FAMMParser::ArgumentListContext *ctx) = 0;

  virtual void enterExpression(FAMMParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(FAMMParser::ExpressionContext *ctx) = 0;

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

