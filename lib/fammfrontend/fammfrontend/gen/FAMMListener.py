# Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .FAMMParser import FAMMParser
else:
    from FAMMParser import FAMMParser

# This class defines a complete listener for a parse tree produced by FAMMParser.
class FAMMListener(ParseTreeListener):

    # Enter a parse tree produced by FAMMParser#program.
    def enterProgram(self, ctx:FAMMParser.ProgramContext):
        pass

    # Exit a parse tree produced by FAMMParser#program.
    def exitProgram(self, ctx:FAMMParser.ProgramContext):
        pass


    # Enter a parse tree produced by FAMMParser#varDecl.
    def enterVarDecl(self, ctx:FAMMParser.VarDeclContext):
        pass

    # Exit a parse tree produced by FAMMParser#varDecl.
    def exitVarDecl(self, ctx:FAMMParser.VarDeclContext):
        pass


    # Enter a parse tree produced by FAMMParser#funcDef.
    def enterFuncDef(self, ctx:FAMMParser.FuncDefContext):
        pass

    # Exit a parse tree produced by FAMMParser#funcDef.
    def exitFuncDef(self, ctx:FAMMParser.FuncDefContext):
        pass


    # Enter a parse tree produced by FAMMParser#parameters.
    def enterParameters(self, ctx:FAMMParser.ParametersContext):
        pass

    # Exit a parse tree produced by FAMMParser#parameters.
    def exitParameters(self, ctx:FAMMParser.ParametersContext):
        pass


    # Enter a parse tree produced by FAMMParser#parameter.
    def enterParameter(self, ctx:FAMMParser.ParameterContext):
        pass

    # Exit a parse tree produced by FAMMParser#parameter.
    def exitParameter(self, ctx:FAMMParser.ParameterContext):
        pass


    # Enter a parse tree produced by FAMMParser#returnType.
    def enterReturnType(self, ctx:FAMMParser.ReturnTypeContext):
        pass

    # Exit a parse tree produced by FAMMParser#returnType.
    def exitReturnType(self, ctx:FAMMParser.ReturnTypeContext):
        pass


    # Enter a parse tree produced by FAMMParser#statements.
    def enterStatements(self, ctx:FAMMParser.StatementsContext):
        pass

    # Exit a parse tree produced by FAMMParser#statements.
    def exitStatements(self, ctx:FAMMParser.StatementsContext):
        pass


    # Enter a parse tree produced by FAMMParser#statement.
    def enterStatement(self, ctx:FAMMParser.StatementContext):
        pass

    # Exit a parse tree produced by FAMMParser#statement.
    def exitStatement(self, ctx:FAMMParser.StatementContext):
        pass


    # Enter a parse tree produced by FAMMParser#assignment.
    def enterAssignment(self, ctx:FAMMParser.AssignmentContext):
        pass

    # Exit a parse tree produced by FAMMParser#assignment.
    def exitAssignment(self, ctx:FAMMParser.AssignmentContext):
        pass


    # Enter a parse tree produced by FAMMParser#assignmentOperator.
    def enterAssignmentOperator(self, ctx:FAMMParser.AssignmentOperatorContext):
        pass

    # Exit a parse tree produced by FAMMParser#assignmentOperator.
    def exitAssignmentOperator(self, ctx:FAMMParser.AssignmentOperatorContext):
        pass


    # Enter a parse tree produced by FAMMParser#ifStatement.
    def enterIfStatement(self, ctx:FAMMParser.IfStatementContext):
        pass

    # Exit a parse tree produced by FAMMParser#ifStatement.
    def exitIfStatement(self, ctx:FAMMParser.IfStatementContext):
        pass


    # Enter a parse tree produced by FAMMParser#whileLoop.
    def enterWhileLoop(self, ctx:FAMMParser.WhileLoopContext):
        pass

    # Exit a parse tree produced by FAMMParser#whileLoop.
    def exitWhileLoop(self, ctx:FAMMParser.WhileLoopContext):
        pass


    # Enter a parse tree produced by FAMMParser#forLoop.
    def enterForLoop(self, ctx:FAMMParser.ForLoopContext):
        pass

    # Exit a parse tree produced by FAMMParser#forLoop.
    def exitForLoop(self, ctx:FAMMParser.ForLoopContext):
        pass


    # Enter a parse tree produced by FAMMParser#returnStatement.
    def enterReturnStatement(self, ctx:FAMMParser.ReturnStatementContext):
        pass

    # Exit a parse tree produced by FAMMParser#returnStatement.
    def exitReturnStatement(self, ctx:FAMMParser.ReturnStatementContext):
        pass


    # Enter a parse tree produced by FAMMParser#expressionStatement.
    def enterExpressionStatement(self, ctx:FAMMParser.ExpressionStatementContext):
        pass

    # Exit a parse tree produced by FAMMParser#expressionStatement.
    def exitExpressionStatement(self, ctx:FAMMParser.ExpressionStatementContext):
        pass


    # Enter a parse tree produced by FAMMParser#expression.
    def enterExpression(self, ctx:FAMMParser.ExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#expression.
    def exitExpression(self, ctx:FAMMParser.ExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#logicalOrExpression.
    def enterLogicalOrExpression(self, ctx:FAMMParser.LogicalOrExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#logicalOrExpression.
    def exitLogicalOrExpression(self, ctx:FAMMParser.LogicalOrExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#logicalAndExpression.
    def enterLogicalAndExpression(self, ctx:FAMMParser.LogicalAndExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#logicalAndExpression.
    def exitLogicalAndExpression(self, ctx:FAMMParser.LogicalAndExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#equalityExpression.
    def enterEqualityExpression(self, ctx:FAMMParser.EqualityExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#equalityExpression.
    def exitEqualityExpression(self, ctx:FAMMParser.EqualityExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#comparisonExpression.
    def enterComparisonExpression(self, ctx:FAMMParser.ComparisonExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#comparisonExpression.
    def exitComparisonExpression(self, ctx:FAMMParser.ComparisonExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#additiveExpression.
    def enterAdditiveExpression(self, ctx:FAMMParser.AdditiveExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#additiveExpression.
    def exitAdditiveExpression(self, ctx:FAMMParser.AdditiveExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#multiplicativeExpression.
    def enterMultiplicativeExpression(self, ctx:FAMMParser.MultiplicativeExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#multiplicativeExpression.
    def exitMultiplicativeExpression(self, ctx:FAMMParser.MultiplicativeExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#unaryExpression.
    def enterUnaryExpression(self, ctx:FAMMParser.UnaryExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#unaryExpression.
    def exitUnaryExpression(self, ctx:FAMMParser.UnaryExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#primaryExpression.
    def enterPrimaryExpression(self, ctx:FAMMParser.PrimaryExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#primaryExpression.
    def exitPrimaryExpression(self, ctx:FAMMParser.PrimaryExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#functionCall.
    def enterFunctionCall(self, ctx:FAMMParser.FunctionCallContext):
        pass

    # Exit a parse tree produced by FAMMParser#functionCall.
    def exitFunctionCall(self, ctx:FAMMParser.FunctionCallContext):
        pass


    # Enter a parse tree produced by FAMMParser#argumentList.
    def enterArgumentList(self, ctx:FAMMParser.ArgumentListContext):
        pass

    # Exit a parse tree produced by FAMMParser#argumentList.
    def exitArgumentList(self, ctx:FAMMParser.ArgumentListContext):
        pass


    # Enter a parse tree produced by FAMMParser#typeCast.
    def enterTypeCast(self, ctx:FAMMParser.TypeCastContext):
        pass

    # Exit a parse tree produced by FAMMParser#typeCast.
    def exitTypeCast(self, ctx:FAMMParser.TypeCastContext):
        pass


    # Enter a parse tree produced by FAMMParser#arrayAccess.
    def enterArrayAccess(self, ctx:FAMMParser.ArrayAccessContext):
        pass

    # Exit a parse tree produced by FAMMParser#arrayAccess.
    def exitArrayAccess(self, ctx:FAMMParser.ArrayAccessContext):
        pass


    # Enter a parse tree produced by FAMMParser#literal.
    def enterLiteral(self, ctx:FAMMParser.LiteralContext):
        pass

    # Exit a parse tree produced by FAMMParser#literal.
    def exitLiteral(self, ctx:FAMMParser.LiteralContext):
        pass


    # Enter a parse tree produced by FAMMParser#arrayLiteral.
    def enterArrayLiteral(self, ctx:FAMMParser.ArrayLiteralContext):
        pass

    # Exit a parse tree produced by FAMMParser#arrayLiteral.
    def exitArrayLiteral(self, ctx:FAMMParser.ArrayLiteralContext):
        pass


    # Enter a parse tree produced by FAMMParser#expressionList.
    def enterExpressionList(self, ctx:FAMMParser.ExpressionListContext):
        pass

    # Exit a parse tree produced by FAMMParser#expressionList.
    def exitExpressionList(self, ctx:FAMMParser.ExpressionListContext):
        pass


    # Enter a parse tree produced by FAMMParser#type.
    def enterType(self, ctx:FAMMParser.TypeContext):
        pass

    # Exit a parse tree produced by FAMMParser#type.
    def exitType(self, ctx:FAMMParser.TypeContext):
        pass



del FAMMParser