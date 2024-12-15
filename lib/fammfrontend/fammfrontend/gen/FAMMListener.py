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


    # Enter a parse tree produced by FAMMParser#line.
    def enterLine(self, ctx:FAMMParser.LineContext):
        pass

    # Exit a parse tree produced by FAMMParser#line.
    def exitLine(self, ctx:FAMMParser.LineContext):
        pass


    # Enter a parse tree produced by FAMMParser#statement.
    def enterStatement(self, ctx:FAMMParser.StatementContext):
        pass

    # Exit a parse tree produced by FAMMParser#statement.
    def exitStatement(self, ctx:FAMMParser.StatementContext):
        pass


    # Enter a parse tree produced by FAMMParser#ifBlock.
    def enterIfBlock(self, ctx:FAMMParser.IfBlockContext):
        pass

    # Exit a parse tree produced by FAMMParser#ifBlock.
    def exitIfBlock(self, ctx:FAMMParser.IfBlockContext):
        pass


    # Enter a parse tree produced by FAMMParser#whileBlock.
    def enterWhileBlock(self, ctx:FAMMParser.WhileBlockContext):
        pass

    # Exit a parse tree produced by FAMMParser#whileBlock.
    def exitWhileBlock(self, ctx:FAMMParser.WhileBlockContext):
        pass


    # Enter a parse tree produced by FAMMParser#block.
    def enterBlock(self, ctx:FAMMParser.BlockContext):
        pass

    # Exit a parse tree produced by FAMMParser#block.
    def exitBlock(self, ctx:FAMMParser.BlockContext):
        pass


    # Enter a parse tree produced by FAMMParser#declaration.
    def enterDeclaration(self, ctx:FAMMParser.DeclarationContext):
        pass

    # Exit a parse tree produced by FAMMParser#declaration.
    def exitDeclaration(self, ctx:FAMMParser.DeclarationContext):
        pass


    # Enter a parse tree produced by FAMMParser#definition.
    def enterDefinition(self, ctx:FAMMParser.DefinitionContext):
        pass

    # Exit a parse tree produced by FAMMParser#definition.
    def exitDefinition(self, ctx:FAMMParser.DefinitionContext):
        pass


    # Enter a parse tree produced by FAMMParser#functionCall.
    def enterFunctionCall(self, ctx:FAMMParser.FunctionCallContext):
        pass

    # Exit a parse tree produced by FAMMParser#functionCall.
    def exitFunctionCall(self, ctx:FAMMParser.FunctionCallContext):
        pass


    # Enter a parse tree produced by FAMMParser#expression.
    def enterExpression(self, ctx:FAMMParser.ExpressionContext):
        pass

    # Exit a parse tree produced by FAMMParser#expression.
    def exitExpression(self, ctx:FAMMParser.ExpressionContext):
        pass


    # Enter a parse tree produced by FAMMParser#assignmentOp.
    def enterAssignmentOp(self, ctx:FAMMParser.AssignmentOpContext):
        pass

    # Exit a parse tree produced by FAMMParser#assignmentOp.
    def exitAssignmentOp(self, ctx:FAMMParser.AssignmentOpContext):
        pass


    # Enter a parse tree produced by FAMMParser#multOp.
    def enterMultOp(self, ctx:FAMMParser.MultOpContext):
        pass

    # Exit a parse tree produced by FAMMParser#multOp.
    def exitMultOp(self, ctx:FAMMParser.MultOpContext):
        pass


    # Enter a parse tree produced by FAMMParser#addOp.
    def enterAddOp(self, ctx:FAMMParser.AddOpContext):
        pass

    # Exit a parse tree produced by FAMMParser#addOp.
    def exitAddOp(self, ctx:FAMMParser.AddOpContext):
        pass


    # Enter a parse tree produced by FAMMParser#compareOp.
    def enterCompareOp(self, ctx:FAMMParser.CompareOpContext):
        pass

    # Exit a parse tree produced by FAMMParser#compareOp.
    def exitCompareOp(self, ctx:FAMMParser.CompareOpContext):
        pass


    # Enter a parse tree produced by FAMMParser#boolOp.
    def enterBoolOp(self, ctx:FAMMParser.BoolOpContext):
        pass

    # Exit a parse tree produced by FAMMParser#boolOp.
    def exitBoolOp(self, ctx:FAMMParser.BoolOpContext):
        pass


    # Enter a parse tree produced by FAMMParser#type.
    def enterType(self, ctx:FAMMParser.TypeContext):
        pass

    # Exit a parse tree produced by FAMMParser#type.
    def exitType(self, ctx:FAMMParser.TypeContext):
        pass


    # Enter a parse tree produced by FAMMParser#constant.
    def enterConstant(self, ctx:FAMMParser.ConstantContext):
        pass

    # Exit a parse tree produced by FAMMParser#constant.
    def exitConstant(self, ctx:FAMMParser.ConstantContext):
        pass



del FAMMParser