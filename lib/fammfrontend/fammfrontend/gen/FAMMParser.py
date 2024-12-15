# Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,44,150,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,
        0,1,0,1,1,1,1,1,1,3,1,46,8,1,1,1,1,1,1,2,1,2,1,2,3,2,53,8,2,1,3,
        1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,5,5,
        71,8,5,10,5,12,5,74,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,
        1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,5,8,94,8,8,10,8,12,8,97,9,8,3,8,
        99,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,113,8,
        9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
        9,5,9,131,8,9,10,9,12,9,134,9,9,1,10,1,10,1,11,1,11,1,12,1,12,1,
        13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,16,0,1,18,17,0,2,4,6,8,10,
        12,14,16,18,20,22,24,26,28,30,32,0,7,2,0,11,11,14,19,1,0,20,23,1,
        0,24,25,1,0,26,31,1,0,32,33,1,0,34,37,1,0,39,43,148,0,37,1,0,0,0,
        2,45,1,0,0,0,4,52,1,0,0,0,6,54,1,0,0,0,8,62,1,0,0,0,10,68,1,0,0,
        0,12,77,1,0,0,0,14,84,1,0,0,0,16,88,1,0,0,0,18,112,1,0,0,0,20,135,
        1,0,0,0,22,137,1,0,0,0,24,139,1,0,0,0,26,141,1,0,0,0,28,143,1,0,
        0,0,30,145,1,0,0,0,32,147,1,0,0,0,34,36,3,2,1,0,35,34,1,0,0,0,36,
        39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,37,1,0,0,
        0,40,41,5,0,0,1,41,1,1,0,0,0,42,46,3,4,2,0,43,46,3,6,3,0,44,46,3,
        8,4,0,45,42,1,0,0,0,45,43,1,0,0,0,45,44,1,0,0,0,46,47,1,0,0,0,47,
        48,5,1,0,0,48,3,1,0,0,0,49,53,3,12,6,0,50,53,3,14,7,0,51,53,3,16,
        8,0,52,49,1,0,0,0,52,50,1,0,0,0,52,51,1,0,0,0,53,5,1,0,0,0,54,55,
        5,2,0,0,55,56,5,3,0,0,56,57,3,18,9,0,57,58,5,4,0,0,58,59,3,10,5,
        0,59,60,5,5,0,0,60,61,3,10,5,0,61,7,1,0,0,0,62,63,5,6,0,0,63,64,
        5,3,0,0,64,65,3,18,9,0,65,66,5,4,0,0,66,67,3,10,5,0,67,9,1,0,0,0,
        68,72,5,7,0,0,69,71,3,2,1,0,70,69,1,0,0,0,71,74,1,0,0,0,72,70,1,
        0,0,0,72,73,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,76,5,8,0,0,76,
        11,1,0,0,0,77,78,5,9,0,0,78,79,5,38,0,0,79,80,5,10,0,0,80,81,3,30,
        15,0,81,82,5,11,0,0,82,83,3,18,9,0,83,13,1,0,0,0,84,85,5,38,0,0,
        85,86,3,20,10,0,86,87,3,18,9,0,87,15,1,0,0,0,88,89,5,38,0,0,89,98,
        5,3,0,0,90,95,3,18,9,0,91,92,5,12,0,0,92,94,3,18,9,0,93,91,1,0,0,
        0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,99,1,0,0,0,97,95,
        1,0,0,0,98,90,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,101,5,4,0,
        0,101,17,1,0,0,0,102,103,6,9,-1,0,103,113,3,32,16,0,104,113,5,38,
        0,0,105,113,3,16,8,0,106,107,5,3,0,0,107,108,3,18,9,0,108,109,5,
        4,0,0,109,113,1,0,0,0,110,111,5,13,0,0,111,113,3,18,9,5,112,102,
        1,0,0,0,112,104,1,0,0,0,112,105,1,0,0,0,112,106,1,0,0,0,112,110,
        1,0,0,0,113,132,1,0,0,0,114,115,10,4,0,0,115,116,3,22,11,0,116,117,
        3,18,9,5,117,131,1,0,0,0,118,119,10,3,0,0,119,120,3,24,12,0,120,
        121,3,18,9,4,121,131,1,0,0,0,122,123,10,2,0,0,123,124,3,26,13,0,
        124,125,3,18,9,3,125,131,1,0,0,0,126,127,10,1,0,0,127,128,3,28,14,
        0,128,129,3,18,9,2,129,131,1,0,0,0,130,114,1,0,0,0,130,118,1,0,0,
        0,130,122,1,0,0,0,130,126,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,
        0,132,133,1,0,0,0,133,19,1,0,0,0,134,132,1,0,0,0,135,136,7,0,0,0,
        136,21,1,0,0,0,137,138,7,1,0,0,138,23,1,0,0,0,139,140,7,2,0,0,140,
        25,1,0,0,0,141,142,7,3,0,0,142,27,1,0,0,0,143,144,7,4,0,0,144,29,
        1,0,0,0,145,146,7,5,0,0,146,31,1,0,0,0,147,148,7,6,0,0,148,33,1,
        0,0,0,9,37,45,52,72,95,98,112,130,132
    ]

class FAMMParser ( Parser ):

    grammarFileName = "FAMM.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "';'", "'if'", "'('", "')'", "'else'", 
                     "'while'", "'{'", "'}'", "'var'", "':'", "'='", "','", 
                     "'!'", "'+='", "'-='", "'*='", "'/='", "'//='", "'%='", 
                     "'*'", "'/'", "'//'", "'%'", "'+'", "'-'", "'=='", 
                     "'!='", "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", 
                     "'int'", "'float'", "'string'", "'bool'", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "'nih'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "IDENTIFIER", "INTEGER_LIT", 
                      "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", 
                      "WS" ]

    RULE_program = 0
    RULE_line = 1
    RULE_statement = 2
    RULE_ifBlock = 3
    RULE_whileBlock = 4
    RULE_block = 5
    RULE_declaration = 6
    RULE_definition = 7
    RULE_functionCall = 8
    RULE_expression = 9
    RULE_assignmentOp = 10
    RULE_multOp = 11
    RULE_addOp = 12
    RULE_compareOp = 13
    RULE_boolOp = 14
    RULE_type = 15
    RULE_constant = 16

    ruleNames =  [ "program", "line", "statement", "ifBlock", "whileBlock", 
                   "block", "declaration", "definition", "functionCall", 
                   "expression", "assignmentOp", "multOp", "addOp", "compareOp", 
                   "boolOp", "type", "constant" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    T__8=9
    T__9=10
    T__10=11
    T__11=12
    T__12=13
    T__13=14
    T__14=15
    T__15=16
    T__16=17
    T__17=18
    T__18=19
    T__19=20
    T__20=21
    T__21=22
    T__22=23
    T__23=24
    T__24=25
    T__25=26
    T__26=27
    T__27=28
    T__28=29
    T__29=30
    T__30=31
    T__31=32
    T__32=33
    T__33=34
    T__34=35
    T__35=36
    T__36=37
    IDENTIFIER=38
    INTEGER_LIT=39
    FLOAT_LIT=40
    STRING_LIT=41
    BOOL_LIT=42
    NIH_LIT=43
    WS=44

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ProgramContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EOF(self):
            return self.getToken(FAMMParser.EOF, 0)

        def line(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.LineContext)
            else:
                return self.getTypedRuleContext(FAMMParser.LineContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_program

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterProgram" ):
                listener.enterProgram(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitProgram" ):
                listener.exitProgram(self)




    def program(self):

        localctx = FAMMParser.ProgramContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_program)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 37
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 274877907524) != 0):
                self.state = 34
                self.line()
                self.state = 39
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 40
            self.match(FAMMParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LineContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def statement(self):
            return self.getTypedRuleContext(FAMMParser.StatementContext,0)


        def ifBlock(self):
            return self.getTypedRuleContext(FAMMParser.IfBlockContext,0)


        def whileBlock(self):
            return self.getTypedRuleContext(FAMMParser.WhileBlockContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_line

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLine" ):
                listener.enterLine(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLine" ):
                listener.exitLine(self)




    def line(self):

        localctx = FAMMParser.LineContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_line)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 45
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [9, 38]:
                self.state = 42
                self.statement()
                pass
            elif token in [2]:
                self.state = 43
                self.ifBlock()
                pass
            elif token in [6]:
                self.state = 44
                self.whileBlock()
                pass
            else:
                raise NoViableAltException(self)

            self.state = 47
            self.match(FAMMParser.T__0)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class StatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def declaration(self):
            return self.getTypedRuleContext(FAMMParser.DeclarationContext,0)


        def definition(self):
            return self.getTypedRuleContext(FAMMParser.DefinitionContext,0)


        def functionCall(self):
            return self.getTypedRuleContext(FAMMParser.FunctionCallContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_statement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterStatement" ):
                listener.enterStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitStatement" ):
                listener.exitStatement(self)




    def statement(self):

        localctx = FAMMParser.StatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_statement)
        try:
            self.state = 52
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,2,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 49
                self.declaration()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 50
                self.definition()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 51
                self.functionCall()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class IfBlockContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def block(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.BlockContext)
            else:
                return self.getTypedRuleContext(FAMMParser.BlockContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_ifBlock

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterIfBlock" ):
                listener.enterIfBlock(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitIfBlock" ):
                listener.exitIfBlock(self)




    def ifBlock(self):

        localctx = FAMMParser.IfBlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_ifBlock)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 54
            self.match(FAMMParser.T__1)
            self.state = 55
            self.match(FAMMParser.T__2)
            self.state = 56
            self.expression(0)
            self.state = 57
            self.match(FAMMParser.T__3)
            self.state = 58
            self.block()

            self.state = 59
            self.match(FAMMParser.T__4)
            self.state = 60
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class WhileBlockContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def block(self):
            return self.getTypedRuleContext(FAMMParser.BlockContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_whileBlock

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterWhileBlock" ):
                listener.enterWhileBlock(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitWhileBlock" ):
                listener.exitWhileBlock(self)




    def whileBlock(self):

        localctx = FAMMParser.WhileBlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_whileBlock)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 62
            self.match(FAMMParser.T__5)
            self.state = 63
            self.match(FAMMParser.T__2)
            self.state = 64
            self.expression(0)
            self.state = 65
            self.match(FAMMParser.T__3)
            self.state = 66
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BlockContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def line(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.LineContext)
            else:
                return self.getTypedRuleContext(FAMMParser.LineContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_block

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterBlock" ):
                listener.enterBlock(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitBlock" ):
                listener.exitBlock(self)




    def block(self):

        localctx = FAMMParser.BlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 68
            self.match(FAMMParser.T__6)
            self.state = 72
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 274877907524) != 0):
                self.state = 69
                self.line()
                self.state = 74
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 75
            self.match(FAMMParser.T__7)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class DeclarationContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_declaration

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterDeclaration" ):
                listener.enterDeclaration(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitDeclaration" ):
                listener.exitDeclaration(self)




    def declaration(self):

        localctx = FAMMParser.DeclarationContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_declaration)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 77
            self.match(FAMMParser.T__8)
            self.state = 78
            self.match(FAMMParser.IDENTIFIER)
            self.state = 79
            self.match(FAMMParser.T__9)
            self.state = 80
            self.type_()
            self.state = 81
            self.match(FAMMParser.T__10)
            self.state = 82
            self.expression(0)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class DefinitionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def assignmentOp(self):
            return self.getTypedRuleContext(FAMMParser.AssignmentOpContext,0)


        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_definition

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterDefinition" ):
                listener.enterDefinition(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitDefinition" ):
                listener.exitDefinition(self)




    def definition(self):

        localctx = FAMMParser.DefinitionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_definition)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 84
            self.match(FAMMParser.IDENTIFIER)
            self.state = 85
            self.assignmentOp()
            self.state = 86
            self.expression(0)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FunctionCallContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_functionCall

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterFunctionCall" ):
                listener.enterFunctionCall(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitFunctionCall" ):
                listener.exitFunctionCall(self)




    def functionCall(self):

        localctx = FAMMParser.FunctionCallContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_functionCall)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 88
            self.match(FAMMParser.IDENTIFIER)
            self.state = 89
            self.match(FAMMParser.T__2)
            self.state = 98
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 17317308145672) != 0):
                self.state = 90
                self.expression(0)
                self.state = 95
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==12:
                    self.state = 91
                    self.match(FAMMParser.T__11)
                    self.state = 92
                    self.expression(0)
                    self.state = 97
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 100
            self.match(FAMMParser.T__3)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def constant(self):
            return self.getTypedRuleContext(FAMMParser.ConstantContext,0)


        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def functionCall(self):
            return self.getTypedRuleContext(FAMMParser.FunctionCallContext,0)


        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def multOp(self):
            return self.getTypedRuleContext(FAMMParser.MultOpContext,0)


        def addOp(self):
            return self.getTypedRuleContext(FAMMParser.AddOpContext,0)


        def compareOp(self):
            return self.getTypedRuleContext(FAMMParser.CompareOpContext,0)


        def boolOp(self):
            return self.getTypedRuleContext(FAMMParser.BoolOpContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_expression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpression" ):
                listener.enterExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpression" ):
                listener.exitExpression(self)



    def expression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.ExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 18
        self.enterRecursionRule(localctx, 18, self.RULE_expression, _p)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 112
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,6,self._ctx)
            if la_ == 1:
                self.state = 103
                self.constant()
                pass

            elif la_ == 2:
                self.state = 104
                self.match(FAMMParser.IDENTIFIER)
                pass

            elif la_ == 3:
                self.state = 105
                self.functionCall()
                pass

            elif la_ == 4:
                self.state = 106
                self.match(FAMMParser.T__2)
                self.state = 107
                self.expression(0)
                self.state = 108
                self.match(FAMMParser.T__3)
                pass

            elif la_ == 5:
                self.state = 110
                self.match(FAMMParser.T__12)
                self.state = 111
                self.expression(5)
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 132
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,8,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 130
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                    if la_ == 1:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 114
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 115
                        self.multOp()
                        self.state = 116
                        self.expression(5)
                        pass

                    elif la_ == 2:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 118
                        if not self.precpred(self._ctx, 3):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 3)")
                        self.state = 119
                        self.addOp()
                        self.state = 120
                        self.expression(4)
                        pass

                    elif la_ == 3:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 122
                        if not self.precpred(self._ctx, 2):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                        self.state = 123
                        self.compareOp()
                        self.state = 124
                        self.expression(3)
                        pass

                    elif la_ == 4:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 126
                        if not self.precpred(self._ctx, 1):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 1)")
                        self.state = 127
                        self.boolOp()
                        self.state = 128
                        self.expression(2)
                        pass

             
                self.state = 134
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,8,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class AssignmentOpContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_assignmentOp

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAssignmentOp" ):
                listener.enterAssignmentOp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAssignmentOp" ):
                listener.exitAssignmentOp(self)




    def assignmentOp(self):

        localctx = FAMMParser.AssignmentOpContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_assignmentOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 135
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 1034240) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class MultOpContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_multOp

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterMultOp" ):
                listener.enterMultOp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitMultOp" ):
                listener.exitMultOp(self)




    def multOp(self):

        localctx = FAMMParser.MultOpContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_multOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 137
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 15728640) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AddOpContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_addOp

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAddOp" ):
                listener.enterAddOp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAddOp" ):
                listener.exitAddOp(self)




    def addOp(self):

        localctx = FAMMParser.AddOpContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_addOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 139
            _la = self._input.LA(1)
            if not(_la==24 or _la==25):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CompareOpContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_compareOp

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCompareOp" ):
                listener.enterCompareOp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCompareOp" ):
                listener.exitCompareOp(self)




    def compareOp(self):

        localctx = FAMMParser.CompareOpContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_compareOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 141
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 4227858432) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BoolOpContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_boolOp

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterBoolOp" ):
                listener.enterBoolOp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitBoolOp" ):
                listener.exitBoolOp(self)




    def boolOp(self):

        localctx = FAMMParser.BoolOpContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_boolOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 143
            _la = self._input.LA(1)
            if not(_la==32 or _la==33):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class TypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return FAMMParser.RULE_type

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterType" ):
                listener.enterType(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitType" ):
                listener.exitType(self)




    def type_(self):

        localctx = FAMMParser.TypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 30, self.RULE_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 145
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 257698037760) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ConstantContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def INTEGER_LIT(self):
            return self.getToken(FAMMParser.INTEGER_LIT, 0)

        def FLOAT_LIT(self):
            return self.getToken(FAMMParser.FLOAT_LIT, 0)

        def STRING_LIT(self):
            return self.getToken(FAMMParser.STRING_LIT, 0)

        def BOOL_LIT(self):
            return self.getToken(FAMMParser.BOOL_LIT, 0)

        def NIH_LIT(self):
            return self.getToken(FAMMParser.NIH_LIT, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_constant

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterConstant" ):
                listener.enterConstant(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitConstant" ):
                listener.exitConstant(self)




    def constant(self):

        localctx = FAMMParser.ConstantContext(self, self._ctx, self.state)
        self.enterRule(localctx, 32, self.RULE_constant)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 147
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 17042430230528) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[9] = self.expression_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expression_sempred(self, localctx:ExpressionContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 4)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 3)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 2)
         

            if predIndex == 3:
                return self.precpred(self._ctx, 1)
         




