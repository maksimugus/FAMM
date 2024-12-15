
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

  virtual void enterFunctionBlock(FAMMParser::FunctionBlockContext * /*ctx*/) override { }
  virtual void exitFunctionBlock(FAMMParser::FunctionBlockContext * /*ctx*/) override { }

  virtual void enterParameterList(FAMMParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(FAMMParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(FAMMParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(FAMMParser::ParameterContext * /*ctx*/) override { }

  virtual void enterReturnType(FAMMParser::ReturnTypeContext * /*ctx*/) override { }
  virtual void exitReturnType(FAMMParser::ReturnTypeContext * /*ctx*/) override { }

  virtual void enterBlock(FAMMParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(FAMMParser::BlockContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(FAMMParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(FAMMParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDefinition(FAMMParser::VariableDefinitionContext * /*ctx*/) override { }
  virtual void exitVariableDefinition(FAMMParser::VariableDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(FAMMParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(FAMMParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgumentList(FAMMParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(FAMMParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterExpression(FAMMParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(FAMMParser::ExpressionContext * /*ctx*/) override { }

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

  virtual void enterConstant(FAMMParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(FAMMParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

