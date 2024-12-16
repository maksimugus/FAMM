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
        4,1,47,212,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,
        7,20,2,21,7,21,2,22,7,22,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,1,0,
        1,1,1,1,1,1,1,1,1,1,3,1,60,8,1,1,1,1,1,1,2,1,2,1,2,3,2,67,8,2,1,
        3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,76,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
        1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
        1,6,1,6,1,6,1,6,3,6,105,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
        5,7,116,8,7,10,7,12,7,119,9,7,1,8,1,8,1,8,1,8,1,9,1,9,3,9,127,8,
        9,1,10,1,10,5,10,131,8,10,10,10,12,10,134,9,10,1,10,1,10,1,11,1,
        11,1,11,1,11,1,11,1,11,3,11,144,8,11,1,12,1,12,1,12,1,12,1,13,1,
        13,1,13,3,13,153,8,13,1,13,1,13,1,14,1,14,1,14,5,14,160,8,14,10,
        14,12,14,163,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
        15,3,15,175,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
        15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,193,8,15,10,15,12,15,196,9,
        15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,
        22,1,22,1,22,0,1,30,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
        32,34,36,38,40,42,44,0,7,2,0,7,7,18,23,1,0,24,27,1,0,28,29,1,0,30,
        35,1,0,36,37,1,0,38,41,1,0,43,46,211,0,49,1,0,0,0,2,59,1,0,0,0,4,
        66,1,0,0,0,6,68,1,0,0,0,8,77,1,0,0,0,10,84,1,0,0,0,12,100,1,0,0,
        0,14,112,1,0,0,0,16,120,1,0,0,0,18,126,1,0,0,0,20,128,1,0,0,0,22,
        137,1,0,0,0,24,145,1,0,0,0,26,149,1,0,0,0,28,156,1,0,0,0,30,174,
        1,0,0,0,32,197,1,0,0,0,34,199,1,0,0,0,36,201,1,0,0,0,38,203,1,0,
        0,0,40,205,1,0,0,0,42,207,1,0,0,0,44,209,1,0,0,0,46,48,3,2,1,0,47,
        46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,
        0,51,49,1,0,0,0,52,53,5,0,0,1,53,1,1,0,0,0,54,60,3,4,2,0,55,60,3,
        6,3,0,56,60,3,8,4,0,57,60,3,10,5,0,58,60,3,12,6,0,59,54,1,0,0,0,
        59,55,1,0,0,0,59,56,1,0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,60,61,1,
        0,0,0,61,62,5,1,0,0,62,3,1,0,0,0,63,67,3,22,11,0,64,67,3,24,12,0,
        65,67,3,26,13,0,66,63,1,0,0,0,66,64,1,0,0,0,66,65,1,0,0,0,67,5,1,
        0,0,0,68,69,5,2,0,0,69,70,5,3,0,0,70,71,3,30,15,0,71,72,5,4,0,0,
        72,75,3,20,10,0,73,74,5,5,0,0,74,76,3,20,10,0,75,73,1,0,0,0,75,76,
        1,0,0,0,76,7,1,0,0,0,77,78,5,6,0,0,78,79,5,3,0,0,79,80,3,30,15,0,
        80,81,5,4,0,0,81,82,5,7,0,0,82,83,3,20,10,0,83,9,1,0,0,0,84,85,5,
        8,0,0,85,86,5,3,0,0,86,87,5,9,0,0,87,88,5,42,0,0,88,89,5,10,0,0,
        89,90,3,42,21,0,90,91,5,7,0,0,91,92,3,30,15,0,92,93,5,11,0,0,93,
        94,3,30,15,0,94,95,5,12,0,0,95,96,3,30,15,0,96,97,5,4,0,0,97,98,
        5,7,0,0,98,99,3,20,10,0,99,11,1,0,0,0,100,101,5,13,0,0,101,102,5,
        42,0,0,102,104,5,3,0,0,103,105,3,14,7,0,104,103,1,0,0,0,104,105,
        1,0,0,0,105,106,1,0,0,0,106,107,5,4,0,0,107,108,5,10,0,0,108,109,
        3,18,9,0,109,110,5,7,0,0,110,111,3,20,10,0,111,13,1,0,0,0,112,117,
        3,16,8,0,113,114,5,12,0,0,114,116,3,16,8,0,115,113,1,0,0,0,116,119,
        1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,15,1,0,0,0,119,117,1,
        0,0,0,120,121,5,42,0,0,121,122,5,10,0,0,122,123,3,42,21,0,123,17,
        1,0,0,0,124,127,3,42,21,0,125,127,5,14,0,0,126,124,1,0,0,0,126,125,
        1,0,0,0,127,19,1,0,0,0,128,132,5,15,0,0,129,131,3,2,1,0,130,129,
        1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,135,
        1,0,0,0,134,132,1,0,0,0,135,136,5,16,0,0,136,21,1,0,0,0,137,138,
        5,9,0,0,138,139,5,42,0,0,139,140,5,10,0,0,140,143,3,42,21,0,141,
        142,5,7,0,0,142,144,3,30,15,0,143,141,1,0,0,0,143,144,1,0,0,0,144,
        23,1,0,0,0,145,146,5,42,0,0,146,147,3,32,16,0,147,148,3,30,15,0,
        148,25,1,0,0,0,149,150,5,42,0,0,150,152,5,3,0,0,151,153,3,28,14,
        0,152,151,1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,155,5,4,0,
        0,155,27,1,0,0,0,156,161,3,30,15,0,157,158,5,12,0,0,158,160,3,30,
        15,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,161,162,1,0,
        0,0,162,29,1,0,0,0,163,161,1,0,0,0,164,165,6,15,-1,0,165,175,3,44,
        22,0,166,175,5,42,0,0,167,175,3,26,13,0,168,169,5,3,0,0,169,170,
        3,30,15,0,170,171,5,4,0,0,171,175,1,0,0,0,172,173,5,17,0,0,173,175,
        3,30,15,5,174,164,1,0,0,0,174,166,1,0,0,0,174,167,1,0,0,0,174,168,
        1,0,0,0,174,172,1,0,0,0,175,194,1,0,0,0,176,177,10,4,0,0,177,178,
        3,34,17,0,178,179,3,30,15,5,179,193,1,0,0,0,180,181,10,3,0,0,181,
        182,3,36,18,0,182,183,3,30,15,4,183,193,1,0,0,0,184,185,10,2,0,0,
        185,186,3,38,19,0,186,187,3,30,15,3,187,193,1,0,0,0,188,189,10,1,
        0,0,189,190,3,40,20,0,190,191,3,30,15,2,191,193,1,0,0,0,192,176,
        1,0,0,0,192,180,1,0,0,0,192,184,1,0,0,0,192,188,1,0,0,0,193,196,
        1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,31,1,0,0,0,196,194,1,
        0,0,0,197,198,7,0,0,0,198,33,1,0,0,0,199,200,7,1,0,0,200,35,1,0,
        0,0,201,202,7,2,0,0,202,37,1,0,0,0,203,204,7,3,0,0,204,39,1,0,0,
        0,205,206,7,4,0,0,206,41,1,0,0,0,207,208,7,5,0,0,208,43,1,0,0,0,
        209,210,7,6,0,0,210,45,1,0,0,0,14,49,59,66,75,104,117,126,132,143,
        152,161,174,192,194
    ]

class FAMMParser ( Parser ):

    grammarFileName = "FAMM.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "';'", "'if'", "'('", "')'", "'else'", 
                     "'while'", "'='", "'for'", "'var'", "':'", "'->'", 
                     "','", "'func'", "'nih'", "'{'", "'}'", "'!'", "'+='", 
                     "'-='", "'*='", "'/='", "'//='", "'%='", "'*'", "'/'", 
                     "'//'", "'%'", "'+'", "'-'", "'=='", "'!='", "'>'", 
                     "'<'", "'>='", "'<='", "'and'", "'or'", "'int'", "'float'", 
                     "'string'", "'bool'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "IDENTIFIER", "INTEGER_LIT", 
                      "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "WS" ]

    RULE_program = 0
    RULE_line = 1
    RULE_statement = 2
    RULE_ifBlock = 3
    RULE_whileBlock = 4
    RULE_forBlock = 5
    RULE_functionBlock = 6
    RULE_parameterList = 7
    RULE_parameter = 8
    RULE_returnType = 9
    RULE_block = 10
    RULE_variableDeclaration = 11
    RULE_variableDefinition = 12
    RULE_functionCall = 13
    RULE_argumentList = 14
    RULE_expression = 15
    RULE_assignmentOp = 16
    RULE_multOp = 17
    RULE_addOp = 18
    RULE_compareOp = 19
    RULE_boolOp = 20
    RULE_type = 21
    RULE_constant = 22

    ruleNames =  [ "program", "line", "statement", "ifBlock", "whileBlock", 
                   "forBlock", "functionBlock", "parameterList", "parameter", 
                   "returnType", "block", "variableDeclaration", "variableDefinition", 
                   "functionCall", "argumentList", "expression", "assignmentOp", 
                   "multOp", "addOp", "compareOp", "boolOp", "type", "constant" ]

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
    T__37=38
    T__38=39
    T__39=40
    T__40=41
    IDENTIFIER=42
    INTEGER_LIT=43
    FLOAT_LIT=44
    STRING_LIT=45
    BOOL_LIT=46
    WS=47

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
            self.state = 49
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 4398046520132) != 0):
                self.state = 46
                self.line()
                self.state = 51
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 52
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


        def forBlock(self):
            return self.getTypedRuleContext(FAMMParser.ForBlockContext,0)


        def functionBlock(self):
            return self.getTypedRuleContext(FAMMParser.FunctionBlockContext,0)


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
            self.state = 59
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [9, 42]:
                self.state = 54
                self.statement()
                pass
            elif token in [2]:
                self.state = 55
                self.ifBlock()
                pass
            elif token in [6]:
                self.state = 56
                self.whileBlock()
                pass
            elif token in [8]:
                self.state = 57
                self.forBlock()
                pass
            elif token in [13]:
                self.state = 58
                self.functionBlock()
                pass
            else:
                raise NoViableAltException(self)

            self.state = 61
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

        def variableDeclaration(self):
            return self.getTypedRuleContext(FAMMParser.VariableDeclarationContext,0)


        def variableDefinition(self):
            return self.getTypedRuleContext(FAMMParser.VariableDefinitionContext,0)


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
            self.state = 66
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,2,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 63
                self.variableDeclaration()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 64
                self.variableDefinition()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 65
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
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 68
            self.match(FAMMParser.T__1)
            self.state = 69
            self.match(FAMMParser.T__2)
            self.state = 70
            self.expression(0)
            self.state = 71
            self.match(FAMMParser.T__3)
            self.state = 72
            self.block()
            self.state = 75
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==5:
                self.state = 73
                self.match(FAMMParser.T__4)
                self.state = 74
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
            self.state = 77
            self.match(FAMMParser.T__5)
            self.state = 78
            self.match(FAMMParser.T__2)
            self.state = 79
            self.expression(0)
            self.state = 80
            self.match(FAMMParser.T__3)
            self.state = 81
            self.match(FAMMParser.T__6)
            self.state = 82
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ForBlockContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def block(self):
            return self.getTypedRuleContext(FAMMParser.BlockContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_forBlock

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterForBlock" ):
                listener.enterForBlock(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitForBlock" ):
                listener.exitForBlock(self)




    def forBlock(self):

        localctx = FAMMParser.ForBlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_forBlock)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 84
            self.match(FAMMParser.T__7)
            self.state = 85
            self.match(FAMMParser.T__2)
            self.state = 86
            self.match(FAMMParser.T__8)
            self.state = 87
            self.match(FAMMParser.IDENTIFIER)
            self.state = 88
            self.match(FAMMParser.T__9)
            self.state = 89
            self.type_()
            self.state = 90
            self.match(FAMMParser.T__6)
            self.state = 91
            self.expression(0)
            self.state = 92
            self.match(FAMMParser.T__10)
            self.state = 93
            self.expression(0)
            self.state = 94
            self.match(FAMMParser.T__11)
            self.state = 95
            self.expression(0)
            self.state = 96
            self.match(FAMMParser.T__3)
            self.state = 97
            self.match(FAMMParser.T__6)
            self.state = 98
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FunctionBlockContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def returnType(self):
            return self.getTypedRuleContext(FAMMParser.ReturnTypeContext,0)


        def block(self):
            return self.getTypedRuleContext(FAMMParser.BlockContext,0)


        def parameterList(self):
            return self.getTypedRuleContext(FAMMParser.ParameterListContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_functionBlock

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterFunctionBlock" ):
                listener.enterFunctionBlock(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitFunctionBlock" ):
                listener.exitFunctionBlock(self)




    def functionBlock(self):

        localctx = FAMMParser.FunctionBlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_functionBlock)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 100
            self.match(FAMMParser.T__12)
            self.state = 101
            self.match(FAMMParser.IDENTIFIER)
            self.state = 102
            self.match(FAMMParser.T__2)
            self.state = 104
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==42:
                self.state = 103
                self.parameterList()


            self.state = 106
            self.match(FAMMParser.T__3)
            self.state = 107
            self.match(FAMMParser.T__9)
            self.state = 108
            self.returnType()
            self.state = 109
            self.match(FAMMParser.T__6)
            self.state = 110
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ParameterListContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def parameter(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ParameterContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ParameterContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_parameterList

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterParameterList" ):
                listener.enterParameterList(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitParameterList" ):
                listener.exitParameterList(self)




    def parameterList(self):

        localctx = FAMMParser.ParameterListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_parameterList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 112
            self.parameter()
            self.state = 117
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==12:
                self.state = 113
                self.match(FAMMParser.T__11)
                self.state = 114
                self.parameter()
                self.state = 119
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ParameterContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_parameter

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterParameter" ):
                listener.enterParameter(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitParameter" ):
                listener.exitParameter(self)




    def parameter(self):

        localctx = FAMMParser.ParameterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_parameter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 120
            self.match(FAMMParser.IDENTIFIER)
            self.state = 121
            self.match(FAMMParser.T__9)
            self.state = 122
            self.type_()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ReturnTypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_returnType

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterReturnType" ):
                listener.enterReturnType(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitReturnType" ):
                listener.exitReturnType(self)




    def returnType(self):

        localctx = FAMMParser.ReturnTypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_returnType)
        try:
            self.state = 126
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [38, 39, 40, 41]:
                self.enterOuterAlt(localctx, 1)
                self.state = 124
                self.type_()
                pass
            elif token in [14]:
                self.enterOuterAlt(localctx, 2)
                self.state = 125
                self.match(FAMMParser.T__13)
                pass
            else:
                raise NoViableAltException(self)

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
        self.enterRule(localctx, 20, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 128
            self.match(FAMMParser.T__14)
            self.state = 132
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 4398046520132) != 0):
                self.state = 129
                self.line()
                self.state = 134
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 135
            self.match(FAMMParser.T__15)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class VariableDeclarationContext(ParserRuleContext):
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
            return FAMMParser.RULE_variableDeclaration

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterVariableDeclaration" ):
                listener.enterVariableDeclaration(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitVariableDeclaration" ):
                listener.exitVariableDeclaration(self)




    def variableDeclaration(self):

        localctx = FAMMParser.VariableDeclarationContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_variableDeclaration)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 137
            self.match(FAMMParser.T__8)
            self.state = 138
            self.match(FAMMParser.IDENTIFIER)
            self.state = 139
            self.match(FAMMParser.T__9)
            self.state = 140
            self.type_()
            self.state = 143
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==7:
                self.state = 141
                self.match(FAMMParser.T__6)
                self.state = 142
                self.expression(0)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class VariableDefinitionContext(ParserRuleContext):
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
            return FAMMParser.RULE_variableDefinition

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterVariableDefinition" ):
                listener.enterVariableDefinition(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitVariableDefinition" ):
                listener.exitVariableDefinition(self)




    def variableDefinition(self):

        localctx = FAMMParser.VariableDefinitionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_variableDefinition)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 145
            self.match(FAMMParser.IDENTIFIER)
            self.state = 146
            self.assignmentOp()
            self.state = 147
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

        def argumentList(self):
            return self.getTypedRuleContext(FAMMParser.ArgumentListContext,0)


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
        self.enterRule(localctx, 26, self.RULE_functionCall)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 149
            self.match(FAMMParser.IDENTIFIER)
            self.state = 150
            self.match(FAMMParser.T__2)
            self.state = 152
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 136339441975304) != 0):
                self.state = 151
                self.argumentList()


            self.state = 154
            self.match(FAMMParser.T__3)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ArgumentListContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_argumentList

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterArgumentList" ):
                listener.enterArgumentList(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitArgumentList" ):
                listener.exitArgumentList(self)




    def argumentList(self):

        localctx = FAMMParser.ArgumentListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_argumentList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 156
            self.expression(0)
            self.state = 161
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==12:
                self.state = 157
                self.match(FAMMParser.T__11)
                self.state = 158
                self.expression(0)
                self.state = 163
                self._errHandler.sync(self)
                _la = self._input.LA(1)

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
        _startState = 30
        self.enterRecursionRule(localctx, 30, self.RULE_expression, _p)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 174
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                self.state = 165
                self.constant()
                pass

            elif la_ == 2:
                self.state = 166
                self.match(FAMMParser.IDENTIFIER)
                pass

            elif la_ == 3:
                self.state = 167
                self.functionCall()
                pass

            elif la_ == 4:
                self.state = 168
                self.match(FAMMParser.T__2)
                self.state = 169
                self.expression(0)
                self.state = 170
                self.match(FAMMParser.T__3)
                pass

            elif la_ == 5:
                self.state = 172
                self.match(FAMMParser.T__16)
                self.state = 173
                self.expression(5)
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 194
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,13,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 192
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
                    if la_ == 1:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 176
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 177
                        self.multOp()
                        self.state = 178
                        self.expression(5)
                        pass

                    elif la_ == 2:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 180
                        if not self.precpred(self._ctx, 3):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 3)")
                        self.state = 181
                        self.addOp()
                        self.state = 182
                        self.expression(4)
                        pass

                    elif la_ == 3:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 184
                        if not self.precpred(self._ctx, 2):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                        self.state = 185
                        self.compareOp()
                        self.state = 186
                        self.expression(3)
                        pass

                    elif la_ == 4:
                        localctx = FAMMParser.ExpressionContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expression)
                        self.state = 188
                        if not self.precpred(self._ctx, 1):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 1)")
                        self.state = 189
                        self.boolOp()
                        self.state = 190
                        self.expression(2)
                        pass

             
                self.state = 196
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,13,self._ctx)

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
        self.enterRule(localctx, 32, self.RULE_assignmentOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 197
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 16515200) != 0)):
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
        self.enterRule(localctx, 34, self.RULE_multOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 199
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 251658240) != 0)):
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
        self.enterRule(localctx, 36, self.RULE_addOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 201
            _la = self._input.LA(1)
            if not(_la==28 or _la==29):
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
        self.enterRule(localctx, 38, self.RULE_compareOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 203
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 67645734912) != 0)):
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
        self.enterRule(localctx, 40, self.RULE_boolOp)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 205
            _la = self._input.LA(1)
            if not(_la==36 or _la==37):
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
        self.enterRule(localctx, 42, self.RULE_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 207
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 4123168604160) != 0)):
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
        self.enterRule(localctx, 44, self.RULE_constant)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 209
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 131941395333120) != 0)):
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
        self._predicates[15] = self.expression_sempred
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
         




