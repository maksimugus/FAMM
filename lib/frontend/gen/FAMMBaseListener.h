
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "FAMMListener.h"


/**
 * This class provides an empty implementation of FAMMListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FAMMBaseListener : public FAMMListener {
public:

  virtual void enterProgram(FAMMParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(FAMMParser::ProgramContext * /*ctx*/) override { }

  virtual void enterLine(FAMMParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(FAMMParser::LineContext * /*ctx*/) override { }

  virtual void enterStatement(FAMMParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(FAMMParser::StatementContext * /*ctx*/) override { }

  virtual void enterIfBlock(FAMMParser::IfBlockContext * /*ctx*/) override { }
  virtual void exitIfBlock(FAMMParser::IfBlockContext * /*ctx*/) override { }

  virtual void enterWhileBlock(FAMMParser::WhileBlockContext * /*ctx*/) override { }
  virtual void exitWhileBlock(FAMMParser::WhileBlockContext * /*ctx*/) override { }

  virtual void enterForBlock(FAMMParser::ForBlockContext * /*ctx*/) override { }
  virtual void exitForBlock(FAMMParser::ForBlockContext * /*ctx*/) override { }

  virtual void enterBlock(FAMMParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(FAMMParser::BlockContext * /*ctx*/) override { }

  virtual void enterDeclaration(FAMMParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(FAMMParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext * /*ctx*/) override { }
  virtual void exitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext * /*ctx*/) override { }

  virtual void enterDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext * /*ctx*/) override { }
  virtual void exitDeclarationWithoutDefinition(FAMMParser::DeclarationWithoutDefinitionContext * /*ctx*/) override { }

  virtual void enterDefinition(FAMMParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(FAMMParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(FAMMParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(FAMMParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(FAMMParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(FAMMParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterParameterList(FAMMParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(FAMMParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(FAMMParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(FAMMParser::ParameterContext * /*ctx*/) override { }

  virtual void enterReturnStatement(FAMMParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(FAMMParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterAddSubExpression(FAMMParser::AddSubExpressionContext * /*ctx*/) override { }
  virtual void exitAddSubExpression(FAMMParser::AddSubExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(FAMMParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(FAMMParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterParenExpression(FAMMParser::ParenExpressionContext * /*ctx*/) override { }
  virtual void exitParenExpression(FAMMParser::ParenExpressionContext * /*ctx*/) override { }

  virtual void enterCompareExpression(FAMMParser::CompareExpressionContext * /*ctx*/) override { }
  virtual void exitCompareExpression(FAMMParser::CompareExpressionContext * /*ctx*/) override { }

  virtual void enterNegationExpression(FAMMParser::NegationExpressionContext * /*ctx*/) override { }
  virtual void exitNegationExpression(FAMMParser::NegationExpressionContext * /*ctx*/) override { }

  virtual void enterArrayAccessExpression(FAMMParser::ArrayAccessExpressionContext * /*ctx*/) override { }
  virtual void exitArrayAccessExpression(FAMMParser::ArrayAccessExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(FAMMParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(FAMMParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(FAMMParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(FAMMParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterNegativeExpression(FAMMParser::NegativeExpressionContext * /*ctx*/) override { }
  virtual void exitNegativeExpression(FAMMParser::NegativeExpressionContext * /*ctx*/) override { }

  virtual void enterMulDivExpression(FAMMParser::MulDivExpressionContext * /*ctx*/) override { }
  virtual void exitMulDivExpression(FAMMParser::MulDivExpressionContext * /*ctx*/) override { }

  virtual void enterBoolExpression(FAMMParser::BoolExpressionContext * /*ctx*/) override { }
  virtual void exitBoolExpression(FAMMParser::BoolExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOp(FAMMParser::AssignmentOpContext * /*ctx*/) override { }
  virtual void exitAssignmentOp(FAMMParser::AssignmentOpContext * /*ctx*/) override { }

  virtual void enterMultOp(FAMMParser::MultOpContext * /*ctx*/) override { }
  virtual void exitMultOp(FAMMParser::MultOpContext * /*ctx*/) override { }

  virtual void enterAddOp(FAMMParser::AddOpContext * /*ctx*/) override { }
  virtual void exitAddOp(FAMMParser::AddOpContext * /*ctx*/) override { }

  virtual void enterCompareOp(FAMMParser::CompareOpContext * /*ctx*/) override { }
  virtual void exitCompareOp(FAMMParser::CompareOpContext * /*ctx*/) override { }

  virtual void enterBoolOp(FAMMParser::BoolOpContext * /*ctx*/) override { }
  virtual void exitBoolOp(FAMMParser::BoolOpContext * /*ctx*/) override { }

  virtual void enterType(FAMMParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(FAMMParser::TypeContext * /*ctx*/) override { }

  virtual void enterArrayType(FAMMParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(FAMMParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterBaseType(FAMMParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(FAMMParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterConstant(FAMMParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(FAMMParser::ConstantContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(FAMMParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(FAMMParser::ArrayLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

