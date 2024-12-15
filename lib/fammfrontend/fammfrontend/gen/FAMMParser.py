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
        4,1,51,324,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,
        7,20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,
        2,27,7,27,2,28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,5,
        0,68,8,0,10,0,12,0,71,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,
        2,1,2,1,2,3,2,85,8,2,1,2,3,2,88,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
        1,3,1,3,1,3,5,3,100,8,3,10,3,12,3,103,9,3,1,4,1,4,1,4,1,4,1,5,1,
        5,3,5,111,8,5,1,6,5,6,114,8,6,10,6,12,6,117,9,6,1,7,1,7,1,7,1,7,
        1,7,1,7,1,7,1,7,3,7,127,8,7,1,8,1,8,3,8,131,8,8,1,8,1,8,1,8,1,8,
        1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,
        11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
        12,1,12,1,12,1,12,1,12,3,12,168,8,12,1,12,1,12,1,12,1,12,1,12,1,
        13,1,13,3,13,177,8,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,16,1,
        16,1,16,1,16,1,16,1,16,5,16,192,8,16,10,16,12,16,195,9,16,1,17,1,
        17,1,17,1,17,1,17,1,17,5,17,203,8,17,10,17,12,17,206,9,17,1,18,1,
        18,1,18,1,18,1,18,1,18,5,18,214,8,18,10,18,12,18,217,9,18,1,19,1,
        19,1,19,1,19,1,19,1,19,5,19,225,8,19,10,19,12,19,228,9,19,1,20,1,
        20,1,20,1,20,1,20,1,20,5,20,236,8,20,10,20,12,20,239,9,20,1,21,1,
        21,1,21,1,21,1,21,1,21,5,21,247,8,21,10,21,12,21,250,9,21,1,22,1,
        22,1,22,3,22,255,8,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
        23,3,23,266,8,23,1,24,1,24,1,24,3,24,271,8,24,1,24,1,24,1,25,1,25,
        1,25,5,25,278,8,25,10,25,12,25,281,9,25,1,26,1,26,1,26,1,26,1,26,
        1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,3,28,298,8,28,
        1,29,1,29,3,29,302,8,29,1,29,1,29,1,30,1,30,1,30,5,30,309,8,30,10,
        30,12,30,312,9,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,3,31,322,
        8,31,1,31,0,6,32,34,36,38,40,42,32,0,2,4,6,8,10,12,14,16,18,20,22,
        24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,0,6,
        1,0,9,15,1,0,22,23,1,0,24,27,1,0,16,17,1,0,18,21,2,0,17,17,30,30,
        333,0,69,1,0,0,0,2,72,1,0,0,0,4,80,1,0,0,0,6,96,1,0,0,0,8,104,1,
        0,0,0,10,110,1,0,0,0,12,115,1,0,0,0,14,126,1,0,0,0,16,130,1,0,0,
        0,18,136,1,0,0,0,20,138,1,0,0,0,22,146,1,0,0,0,24,155,1,0,0,0,26,
        174,1,0,0,0,28,180,1,0,0,0,30,183,1,0,0,0,32,185,1,0,0,0,34,196,
        1,0,0,0,36,207,1,0,0,0,38,218,1,0,0,0,40,229,1,0,0,0,42,240,1,0,
        0,0,44,254,1,0,0,0,46,265,1,0,0,0,48,267,1,0,0,0,50,274,1,0,0,0,
        52,282,1,0,0,0,54,287,1,0,0,0,56,297,1,0,0,0,58,299,1,0,0,0,60,305,
        1,0,0,0,62,321,1,0,0,0,64,68,3,2,1,0,65,68,3,4,2,0,66,68,3,14,7,
        0,67,64,1,0,0,0,67,65,1,0,0,0,67,66,1,0,0,0,68,71,1,0,0,0,69,67,
        1,0,0,0,69,70,1,0,0,0,70,1,1,0,0,0,71,69,1,0,0,0,72,73,5,1,0,0,73,
        74,5,46,0,0,74,75,5,37,0,0,75,76,3,62,31,0,76,77,5,9,0,0,77,78,3,
        30,15,0,78,79,5,39,0,0,79,3,1,0,0,0,80,81,5,2,0,0,81,87,5,46,0,0,
        82,84,5,31,0,0,83,85,3,6,3,0,84,83,1,0,0,0,84,85,1,0,0,0,85,86,1,
        0,0,0,86,88,5,32,0,0,87,82,1,0,0,0,87,88,1,0,0,0,88,89,1,0,0,0,89,
        90,5,37,0,0,90,91,3,10,5,0,91,92,5,9,0,0,92,93,5,33,0,0,93,94,3,
        12,6,0,94,95,5,34,0,0,95,5,1,0,0,0,96,101,3,8,4,0,97,98,5,38,0,0,
        98,100,3,8,4,0,99,97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,
        102,1,0,0,0,102,7,1,0,0,0,103,101,1,0,0,0,104,105,5,46,0,0,105,106,
        5,37,0,0,106,107,3,62,31,0,107,9,1,0,0,0,108,111,5,8,0,0,109,111,
        3,62,31,0,110,108,1,0,0,0,110,109,1,0,0,0,111,11,1,0,0,0,112,114,
        3,14,7,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,
        1,0,0,0,116,13,1,0,0,0,117,115,1,0,0,0,118,127,3,2,1,0,119,127,3,
        16,8,0,120,127,3,20,10,0,121,127,3,22,11,0,122,127,3,24,12,0,123,
        127,3,28,14,0,124,127,3,26,13,0,125,127,5,39,0,0,126,118,1,0,0,0,
        126,119,1,0,0,0,126,120,1,0,0,0,126,121,1,0,0,0,126,122,1,0,0,0,
        126,123,1,0,0,0,126,124,1,0,0,0,126,125,1,0,0,0,127,15,1,0,0,0,128,
        131,5,46,0,0,129,131,3,54,27,0,130,128,1,0,0,0,130,129,1,0,0,0,131,
        132,1,0,0,0,132,133,3,18,9,0,133,134,3,30,15,0,134,135,5,39,0,0,
        135,17,1,0,0,0,136,137,7,0,0,0,137,19,1,0,0,0,138,139,5,4,0,0,139,
        140,5,31,0,0,140,141,3,30,15,0,141,142,5,32,0,0,142,143,5,33,0,0,
        143,144,3,12,6,0,144,145,5,34,0,0,145,21,1,0,0,0,146,147,5,6,0,0,
        147,148,5,31,0,0,148,149,3,30,15,0,149,150,5,32,0,0,150,151,5,9,
        0,0,151,152,5,33,0,0,152,153,3,12,6,0,153,154,5,34,0,0,154,23,1,
        0,0,0,155,156,5,7,0,0,156,157,5,31,0,0,157,158,5,1,0,0,158,159,5,
        46,0,0,159,160,5,37,0,0,160,161,3,62,31,0,161,162,5,9,0,0,162,163,
        3,30,15,0,163,164,5,40,0,0,164,167,3,30,15,0,165,166,5,38,0,0,166,
        168,3,30,15,0,167,165,1,0,0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,
        170,5,32,0,0,170,171,5,33,0,0,171,172,3,12,6,0,172,173,5,34,0,0,
        173,25,1,0,0,0,174,176,5,3,0,0,175,177,3,30,15,0,176,175,1,0,0,0,
        176,177,1,0,0,0,177,178,1,0,0,0,178,179,5,39,0,0,179,27,1,0,0,0,
        180,181,3,30,15,0,181,182,5,39,0,0,182,29,1,0,0,0,183,184,3,32,16,
        0,184,31,1,0,0,0,185,186,6,16,-1,0,186,187,3,34,17,0,187,193,1,0,
        0,0,188,189,10,2,0,0,189,190,5,29,0,0,190,192,3,34,17,0,191,188,
        1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,33,1,
        0,0,0,195,193,1,0,0,0,196,197,6,17,-1,0,197,198,3,36,18,0,198,204,
        1,0,0,0,199,200,10,2,0,0,200,201,5,28,0,0,201,203,3,36,18,0,202,
        199,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,
        35,1,0,0,0,206,204,1,0,0,0,207,208,6,18,-1,0,208,209,3,38,19,0,209,
        215,1,0,0,0,210,211,10,2,0,0,211,212,7,1,0,0,212,214,3,38,19,0,213,
        210,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,
        37,1,0,0,0,217,215,1,0,0,0,218,219,6,19,-1,0,219,220,3,40,20,0,220,
        226,1,0,0,0,221,222,10,2,0,0,222,223,7,2,0,0,223,225,3,40,20,0,224,
        221,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,227,1,0,0,0,227,
        39,1,0,0,0,228,226,1,0,0,0,229,230,6,20,-1,0,230,231,3,42,21,0,231,
        237,1,0,0,0,232,233,10,2,0,0,233,234,7,3,0,0,234,236,3,42,21,0,235,
        232,1,0,0,0,236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,
        41,1,0,0,0,239,237,1,0,0,0,240,241,6,21,-1,0,241,242,3,44,22,0,242,
        248,1,0,0,0,243,244,10,2,0,0,244,245,7,4,0,0,245,247,3,44,22,0,246,
        243,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,
        43,1,0,0,0,250,248,1,0,0,0,251,252,7,5,0,0,252,255,3,44,22,0,253,
        255,3,46,23,0,254,251,1,0,0,0,254,253,1,0,0,0,255,45,1,0,0,0,256,
        257,5,31,0,0,257,258,3,30,15,0,258,259,5,32,0,0,259,266,1,0,0,0,
        260,266,3,48,24,0,261,266,3,52,26,0,262,266,3,54,27,0,263,266,5,
        46,0,0,264,266,3,56,28,0,265,256,1,0,0,0,265,260,1,0,0,0,265,261,
        1,0,0,0,265,262,1,0,0,0,265,263,1,0,0,0,265,264,1,0,0,0,266,47,1,
        0,0,0,267,268,5,46,0,0,268,270,5,31,0,0,269,271,3,50,25,0,270,269,
        1,0,0,0,270,271,1,0,0,0,271,272,1,0,0,0,272,273,5,32,0,0,273,49,
        1,0,0,0,274,279,3,30,15,0,275,276,5,38,0,0,276,278,3,30,15,0,277,
        275,1,0,0,0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,
        51,1,0,0,0,281,279,1,0,0,0,282,283,3,62,31,0,283,284,5,31,0,0,284,
        285,3,30,15,0,285,286,5,32,0,0,286,53,1,0,0,0,287,288,5,46,0,0,288,
        289,5,35,0,0,289,290,3,30,15,0,290,291,5,36,0,0,291,55,1,0,0,0,292,
        298,5,47,0,0,293,298,5,48,0,0,294,298,5,49,0,0,295,298,5,45,0,0,
        296,298,3,58,29,0,297,292,1,0,0,0,297,293,1,0,0,0,297,294,1,0,0,
        0,297,295,1,0,0,0,297,296,1,0,0,0,298,57,1,0,0,0,299,301,5,35,0,
        0,300,302,3,60,30,0,301,300,1,0,0,0,301,302,1,0,0,0,302,303,1,0,
        0,0,303,304,5,36,0,0,304,59,1,0,0,0,305,310,3,30,15,0,306,307,5,
        38,0,0,307,309,3,30,15,0,308,306,1,0,0,0,309,312,1,0,0,0,310,308,
        1,0,0,0,310,311,1,0,0,0,311,61,1,0,0,0,312,310,1,0,0,0,313,322,5,
        41,0,0,314,322,5,42,0,0,315,322,5,43,0,0,316,322,5,44,0,0,317,318,
        5,35,0,0,318,319,3,62,31,0,319,320,5,36,0,0,320,322,1,0,0,0,321,
        313,1,0,0,0,321,314,1,0,0,0,321,315,1,0,0,0,321,316,1,0,0,0,321,
        317,1,0,0,0,322,63,1,0,0,0,25,67,69,84,87,101,110,115,126,130,167,
        176,193,204,215,226,237,248,254,265,270,279,297,301,310,321
    ]

class FAMMParser ( Parser ):

    grammarFileName = "FAMM.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'var'", "'func'", "'return'", "'if'", 
                     "'else'", "'while'", "'for'", "'nih'", "'='", "'+='", 
                     "'-='", "'*='", "'/='", "<INVALID>", "'%='", "'+'", 
                     "'-'", "'*'", "'/'", "'//'", "'%'", "'=='", "'!='", 
                     "'>'", "'<'", "'>='", "'<='", "'&'", "'|'", "'!'", 
                     "'('", "')'", "'{'", "'}'", "'['", "']'", "':'", "','", 
                     "';'", "'->'", "'int'", "'float'", "'bool'", "'string'" ]

    symbolicNames = [ "<INVALID>", "VAR", "FUNC", "RETURN", "IF", "ELSE", 
                      "WHILE", "FOR", "NIL", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", 
                      "MULT_ASSIGN", "DIV_ASSIGN", "INT_DIV_ASSIGN", "MOD_ASSIGN", 
                      "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "INT_DIVIDE", 
                      "MODULO", "EQUAL", "NOT_EQUAL", "GT", "LT", "GTE", 
                      "LTE", "AND", "OR", "NOT", "LPAREN", "RPAREN", "LBRACE", 
                      "RBRACE", "LBRACKET", "RBRACKET", "COLON", "COMMA", 
                      "SEMICOLON", "ARROW", "INT_TYPE", "FLOAT_TYPE", "BOOL_TYPE", 
                      "STRING_TYPE", "BOOLEAN_LITERAL", "IDENTIFIER", "INT_LITERAL", 
                      "FLOAT_LITERAL", "STRING_LITERAL", "WS", "COMMENT" ]

    RULE_program = 0
    RULE_varDecl = 1
    RULE_funcDef = 2
    RULE_parameters = 3
    RULE_parameter = 4
    RULE_returnType = 5
    RULE_statements = 6
    RULE_statement = 7
    RULE_assignment = 8
    RULE_assignmentOperator = 9
    RULE_ifStatement = 10
    RULE_whileLoop = 11
    RULE_forLoop = 12
    RULE_returnStatement = 13
    RULE_expressionStatement = 14
    RULE_expression = 15
    RULE_logicalOrExpression = 16
    RULE_logicalAndExpression = 17
    RULE_equalityExpression = 18
    RULE_comparisonExpression = 19
    RULE_additiveExpression = 20
    RULE_multiplicativeExpression = 21
    RULE_unaryExpression = 22
    RULE_primaryExpression = 23
    RULE_functionCall = 24
    RULE_argumentList = 25
    RULE_typeCast = 26
    RULE_arrayAccess = 27
    RULE_literal = 28
    RULE_arrayLiteral = 29
    RULE_expressionList = 30
    RULE_type = 31

    ruleNames =  [ "program", "varDecl", "funcDef", "parameters", "parameter", 
                   "returnType", "statements", "statement", "assignment", 
                   "assignmentOperator", "ifStatement", "whileLoop", "forLoop", 
                   "returnStatement", "expressionStatement", "expression", 
                   "logicalOrExpression", "logicalAndExpression", "equalityExpression", 
                   "comparisonExpression", "additiveExpression", "multiplicativeExpression", 
                   "unaryExpression", "primaryExpression", "functionCall", 
                   "argumentList", "typeCast", "arrayAccess", "literal", 
                   "arrayLiteral", "expressionList", "type" ]

    EOF = Token.EOF
    VAR=1
    FUNC=2
    RETURN=3
    IF=4
    ELSE=5
    WHILE=6
    FOR=7
    NIL=8
    ASSIGN=9
    PLUS_ASSIGN=10
    MINUS_ASSIGN=11
    MULT_ASSIGN=12
    DIV_ASSIGN=13
    INT_DIV_ASSIGN=14
    MOD_ASSIGN=15
    PLUS=16
    MINUS=17
    MULTIPLY=18
    DIVIDE=19
    INT_DIVIDE=20
    MODULO=21
    EQUAL=22
    NOT_EQUAL=23
    GT=24
    LT=25
    GTE=26
    LTE=27
    AND=28
    OR=29
    NOT=30
    LPAREN=31
    RPAREN=32
    LBRACE=33
    RBRACE=34
    LBRACKET=35
    RBRACKET=36
    COLON=37
    COMMA=38
    SEMICOLON=39
    ARROW=40
    INT_TYPE=41
    FLOAT_TYPE=42
    BOOL_TYPE=43
    STRING_TYPE=44
    BOOLEAN_LITERAL=45
    IDENTIFIER=46
    INT_LITERAL=47
    FLOAT_LITERAL=48
    STRING_LITERAL=49
    WS=50
    COMMENT=51

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

        def varDecl(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.VarDeclContext)
            else:
                return self.getTypedRuleContext(FAMMParser.VarDeclContext,i)


        def funcDef(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.FuncDefContext)
            else:
                return self.getTypedRuleContext(FAMMParser.FuncDefContext,i)


        def statement(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.StatementContext)
            else:
                return self.getTypedRuleContext(FAMMParser.StatementContext,i)


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
            self.state = 69
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 1124288220496094) != 0):
                self.state = 67
                self._errHandler.sync(self)
                la_ = self._interp.adaptivePredict(self._input,0,self._ctx)
                if la_ == 1:
                    self.state = 64
                    self.varDecl()
                    pass

                elif la_ == 2:
                    self.state = 65
                    self.funcDef()
                    pass

                elif la_ == 3:
                    self.state = 66
                    self.statement()
                    pass


                self.state = 71
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class VarDeclContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def VAR(self):
            return self.getToken(FAMMParser.VAR, 0)

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def COLON(self):
            return self.getToken(FAMMParser.COLON, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def ASSIGN(self):
            return self.getToken(FAMMParser.ASSIGN, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def SEMICOLON(self):
            return self.getToken(FAMMParser.SEMICOLON, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_varDecl

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterVarDecl" ):
                listener.enterVarDecl(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitVarDecl" ):
                listener.exitVarDecl(self)




    def varDecl(self):

        localctx = FAMMParser.VarDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 72
            self.match(FAMMParser.VAR)
            self.state = 73
            self.match(FAMMParser.IDENTIFIER)
            self.state = 74
            self.match(FAMMParser.COLON)
            self.state = 75
            self.type_()
            self.state = 76
            self.match(FAMMParser.ASSIGN)
            self.state = 77
            self.expression()
            self.state = 78
            self.match(FAMMParser.SEMICOLON)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FuncDefContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def FUNC(self):
            return self.getToken(FAMMParser.FUNC, 0)

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def COLON(self):
            return self.getToken(FAMMParser.COLON, 0)

        def returnType(self):
            return self.getTypedRuleContext(FAMMParser.ReturnTypeContext,0)


        def ASSIGN(self):
            return self.getToken(FAMMParser.ASSIGN, 0)

        def LBRACE(self):
            return self.getToken(FAMMParser.LBRACE, 0)

        def statements(self):
            return self.getTypedRuleContext(FAMMParser.StatementsContext,0)


        def RBRACE(self):
            return self.getToken(FAMMParser.RBRACE, 0)

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def parameters(self):
            return self.getTypedRuleContext(FAMMParser.ParametersContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_funcDef

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterFuncDef" ):
                listener.enterFuncDef(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitFuncDef" ):
                listener.exitFuncDef(self)




    def funcDef(self):

        localctx = FAMMParser.FuncDefContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_funcDef)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 80
            self.match(FAMMParser.FUNC)
            self.state = 81
            self.match(FAMMParser.IDENTIFIER)
            self.state = 87
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==31:
                self.state = 82
                self.match(FAMMParser.LPAREN)
                self.state = 84
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==46:
                    self.state = 83
                    self.parameters()


                self.state = 86
                self.match(FAMMParser.RPAREN)


            self.state = 89
            self.match(FAMMParser.COLON)
            self.state = 90
            self.returnType()
            self.state = 91
            self.match(FAMMParser.ASSIGN)
            self.state = 92
            self.match(FAMMParser.LBRACE)
            self.state = 93
            self.statements()
            self.state = 94
            self.match(FAMMParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ParametersContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def parameter(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ParameterContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ParameterContext,i)


        def COMMA(self, i:int=None):
            if i is None:
                return self.getTokens(FAMMParser.COMMA)
            else:
                return self.getToken(FAMMParser.COMMA, i)

        def getRuleIndex(self):
            return FAMMParser.RULE_parameters

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterParameters" ):
                listener.enterParameters(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitParameters" ):
                listener.exitParameters(self)




    def parameters(self):

        localctx = FAMMParser.ParametersContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_parameters)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 96
            self.parameter()
            self.state = 101
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==38:
                self.state = 97
                self.match(FAMMParser.COMMA)
                self.state = 98
                self.parameter()
                self.state = 103
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

        def COLON(self):
            return self.getToken(FAMMParser.COLON, 0)

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
        self.enterRule(localctx, 8, self.RULE_parameter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 104
            self.match(FAMMParser.IDENTIFIER)
            self.state = 105
            self.match(FAMMParser.COLON)
            self.state = 106
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

        def NIL(self):
            return self.getToken(FAMMParser.NIL, 0)

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
        self.enterRule(localctx, 10, self.RULE_returnType)
        try:
            self.state = 110
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [8]:
                self.enterOuterAlt(localctx, 1)
                self.state = 108
                self.match(FAMMParser.NIL)
                pass
            elif token in [35, 41, 42, 43, 44]:
                self.enterOuterAlt(localctx, 2)
                self.state = 109
                self.type_()
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


    class StatementsContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def statement(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.StatementContext)
            else:
                return self.getTypedRuleContext(FAMMParser.StatementContext,i)


        def getRuleIndex(self):
            return FAMMParser.RULE_statements

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterStatements" ):
                listener.enterStatements(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitStatements" ):
                listener.exitStatements(self)




    def statements(self):

        localctx = FAMMParser.StatementsContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_statements)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 115
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 1124288220496090) != 0):
                self.state = 112
                self.statement()
                self.state = 117
                self._errHandler.sync(self)
                _la = self._input.LA(1)

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

        def varDecl(self):
            return self.getTypedRuleContext(FAMMParser.VarDeclContext,0)


        def assignment(self):
            return self.getTypedRuleContext(FAMMParser.AssignmentContext,0)


        def ifStatement(self):
            return self.getTypedRuleContext(FAMMParser.IfStatementContext,0)


        def whileLoop(self):
            return self.getTypedRuleContext(FAMMParser.WhileLoopContext,0)


        def forLoop(self):
            return self.getTypedRuleContext(FAMMParser.ForLoopContext,0)


        def expressionStatement(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionStatementContext,0)


        def returnStatement(self):
            return self.getTypedRuleContext(FAMMParser.ReturnStatementContext,0)


        def SEMICOLON(self):
            return self.getToken(FAMMParser.SEMICOLON, 0)

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
        self.enterRule(localctx, 14, self.RULE_statement)
        try:
            self.state = 126
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 118
                self.varDecl()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 119
                self.assignment()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 120
                self.ifStatement()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 121
                self.whileLoop()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 122
                self.forLoop()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 123
                self.expressionStatement()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 124
                self.returnStatement()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 125
                self.match(FAMMParser.SEMICOLON)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AssignmentContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def assignmentOperator(self):
            return self.getTypedRuleContext(FAMMParser.AssignmentOperatorContext,0)


        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def SEMICOLON(self):
            return self.getToken(FAMMParser.SEMICOLON, 0)

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def arrayAccess(self):
            return self.getTypedRuleContext(FAMMParser.ArrayAccessContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_assignment

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAssignment" ):
                listener.enterAssignment(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAssignment" ):
                listener.exitAssignment(self)




    def assignment(self):

        localctx = FAMMParser.AssignmentContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_assignment)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 130
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,8,self._ctx)
            if la_ == 1:
                self.state = 128
                self.match(FAMMParser.IDENTIFIER)
                pass

            elif la_ == 2:
                self.state = 129
                self.arrayAccess()
                pass


            self.state = 132
            self.assignmentOperator()
            self.state = 133
            self.expression()
            self.state = 134
            self.match(FAMMParser.SEMICOLON)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AssignmentOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def PLUS_ASSIGN(self):
            return self.getToken(FAMMParser.PLUS_ASSIGN, 0)

        def MINUS_ASSIGN(self):
            return self.getToken(FAMMParser.MINUS_ASSIGN, 0)

        def MULT_ASSIGN(self):
            return self.getToken(FAMMParser.MULT_ASSIGN, 0)

        def DIV_ASSIGN(self):
            return self.getToken(FAMMParser.DIV_ASSIGN, 0)

        def INT_DIV_ASSIGN(self):
            return self.getToken(FAMMParser.INT_DIV_ASSIGN, 0)

        def MOD_ASSIGN(self):
            return self.getToken(FAMMParser.MOD_ASSIGN, 0)

        def ASSIGN(self):
            return self.getToken(FAMMParser.ASSIGN, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_assignmentOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAssignmentOperator" ):
                listener.enterAssignmentOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAssignmentOperator" ):
                listener.exitAssignmentOperator(self)




    def assignmentOperator(self):

        localctx = FAMMParser.AssignmentOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_assignmentOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 136
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 65024) != 0)):
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


    class IfStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IF(self):
            return self.getToken(FAMMParser.IF, 0)

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def LBRACE(self):
            return self.getToken(FAMMParser.LBRACE, 0)

        def statements(self):
            return self.getTypedRuleContext(FAMMParser.StatementsContext,0)


        def RBRACE(self):
            return self.getToken(FAMMParser.RBRACE, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_ifStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterIfStatement" ):
                listener.enterIfStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitIfStatement" ):
                listener.exitIfStatement(self)




    def ifStatement(self):

        localctx = FAMMParser.IfStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_ifStatement)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 138
            self.match(FAMMParser.IF)
            self.state = 139
            self.match(FAMMParser.LPAREN)
            self.state = 140
            self.expression()
            self.state = 141
            self.match(FAMMParser.RPAREN)
            self.state = 142
            self.match(FAMMParser.LBRACE)
            self.state = 143
            self.statements()
            self.state = 144
            self.match(FAMMParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class WhileLoopContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def WHILE(self):
            return self.getToken(FAMMParser.WHILE, 0)

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def ASSIGN(self):
            return self.getToken(FAMMParser.ASSIGN, 0)

        def LBRACE(self):
            return self.getToken(FAMMParser.LBRACE, 0)

        def statements(self):
            return self.getTypedRuleContext(FAMMParser.StatementsContext,0)


        def RBRACE(self):
            return self.getToken(FAMMParser.RBRACE, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_whileLoop

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterWhileLoop" ):
                listener.enterWhileLoop(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitWhileLoop" ):
                listener.exitWhileLoop(self)




    def whileLoop(self):

        localctx = FAMMParser.WhileLoopContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_whileLoop)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 146
            self.match(FAMMParser.WHILE)
            self.state = 147
            self.match(FAMMParser.LPAREN)
            self.state = 148
            self.expression()
            self.state = 149
            self.match(FAMMParser.RPAREN)
            self.state = 150
            self.match(FAMMParser.ASSIGN)
            self.state = 151
            self.match(FAMMParser.LBRACE)
            self.state = 152
            self.statements()
            self.state = 153
            self.match(FAMMParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ForLoopContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def FOR(self):
            return self.getToken(FAMMParser.FOR, 0)

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def VAR(self):
            return self.getToken(FAMMParser.VAR, 0)

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def COLON(self):
            return self.getToken(FAMMParser.COLON, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def ASSIGN(self):
            return self.getToken(FAMMParser.ASSIGN, 0)

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def ARROW(self):
            return self.getToken(FAMMParser.ARROW, 0)

        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def LBRACE(self):
            return self.getToken(FAMMParser.LBRACE, 0)

        def statements(self):
            return self.getTypedRuleContext(FAMMParser.StatementsContext,0)


        def RBRACE(self):
            return self.getToken(FAMMParser.RBRACE, 0)

        def COMMA(self):
            return self.getToken(FAMMParser.COMMA, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_forLoop

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterForLoop" ):
                listener.enterForLoop(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitForLoop" ):
                listener.exitForLoop(self)




    def forLoop(self):

        localctx = FAMMParser.ForLoopContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_forLoop)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 155
            self.match(FAMMParser.FOR)
            self.state = 156
            self.match(FAMMParser.LPAREN)
            self.state = 157
            self.match(FAMMParser.VAR)
            self.state = 158
            self.match(FAMMParser.IDENTIFIER)
            self.state = 159
            self.match(FAMMParser.COLON)
            self.state = 160
            self.type_()
            self.state = 161
            self.match(FAMMParser.ASSIGN)
            self.state = 162
            self.expression()
            self.state = 163
            self.match(FAMMParser.ARROW)
            self.state = 164
            self.expression()
            self.state = 167
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==38:
                self.state = 165
                self.match(FAMMParser.COMMA)
                self.state = 166
                self.expression()


            self.state = 169
            self.match(FAMMParser.RPAREN)
            self.state = 170
            self.match(FAMMParser.LBRACE)
            self.state = 171
            self.statements()
            self.state = 172
            self.match(FAMMParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ReturnStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def RETURN(self):
            return self.getToken(FAMMParser.RETURN, 0)

        def SEMICOLON(self):
            return self.getToken(FAMMParser.SEMICOLON, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_returnStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterReturnStatement" ):
                listener.enterReturnStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitReturnStatement" ):
                listener.exitReturnStatement(self)




    def returnStatement(self):

        localctx = FAMMParser.ReturnStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_returnStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 174
            self.match(FAMMParser.RETURN)
            self.state = 176
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 1123738464681984) != 0):
                self.state = 175
                self.expression()


            self.state = 178
            self.match(FAMMParser.SEMICOLON)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def SEMICOLON(self):
            return self.getToken(FAMMParser.SEMICOLON, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_expressionStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpressionStatement" ):
                listener.enterExpressionStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpressionStatement" ):
                listener.exitExpressionStatement(self)




    def expressionStatement(self):

        localctx = FAMMParser.ExpressionStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_expressionStatement)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 180
            self.expression()
            self.state = 181
            self.match(FAMMParser.SEMICOLON)
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

        def logicalOrExpression(self):
            return self.getTypedRuleContext(FAMMParser.LogicalOrExpressionContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_expression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpression" ):
                listener.enterExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpression" ):
                listener.exitExpression(self)




    def expression(self):

        localctx = FAMMParser.ExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 30, self.RULE_expression)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 183
            self.logicalOrExpression(0)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LogicalOrExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def logicalAndExpression(self):
            return self.getTypedRuleContext(FAMMParser.LogicalAndExpressionContext,0)


        def logicalOrExpression(self):
            return self.getTypedRuleContext(FAMMParser.LogicalOrExpressionContext,0)


        def OR(self):
            return self.getToken(FAMMParser.OR, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_logicalOrExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLogicalOrExpression" ):
                listener.enterLogicalOrExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLogicalOrExpression" ):
                listener.exitLogicalOrExpression(self)



    def logicalOrExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.LogicalOrExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 32
        self.enterRecursionRule(localctx, 32, self.RULE_logicalOrExpression, _p)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 186
            self.logicalAndExpression(0)
            self._ctx.stop = self._input.LT(-1)
            self.state = 193
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,11,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.LogicalOrExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_logicalOrExpression)
                    self.state = 188
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 189
                    self.match(FAMMParser.OR)
                    self.state = 190
                    self.logicalAndExpression(0) 
                self.state = 195
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,11,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class LogicalAndExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def equalityExpression(self):
            return self.getTypedRuleContext(FAMMParser.EqualityExpressionContext,0)


        def logicalAndExpression(self):
            return self.getTypedRuleContext(FAMMParser.LogicalAndExpressionContext,0)


        def AND(self):
            return self.getToken(FAMMParser.AND, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_logicalAndExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLogicalAndExpression" ):
                listener.enterLogicalAndExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLogicalAndExpression" ):
                listener.exitLogicalAndExpression(self)



    def logicalAndExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.LogicalAndExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 34
        self.enterRecursionRule(localctx, 34, self.RULE_logicalAndExpression, _p)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 197
            self.equalityExpression(0)
            self._ctx.stop = self._input.LT(-1)
            self.state = 204
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,12,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.LogicalAndExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_logicalAndExpression)
                    self.state = 199
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 200
                    self.match(FAMMParser.AND)
                    self.state = 201
                    self.equalityExpression(0) 
                self.state = 206
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,12,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class EqualityExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def comparisonExpression(self):
            return self.getTypedRuleContext(FAMMParser.ComparisonExpressionContext,0)


        def equalityExpression(self):
            return self.getTypedRuleContext(FAMMParser.EqualityExpressionContext,0)


        def EQUAL(self):
            return self.getToken(FAMMParser.EQUAL, 0)

        def NOT_EQUAL(self):
            return self.getToken(FAMMParser.NOT_EQUAL, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_equalityExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterEqualityExpression" ):
                listener.enterEqualityExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitEqualityExpression" ):
                listener.exitEqualityExpression(self)



    def equalityExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.EqualityExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 36
        self.enterRecursionRule(localctx, 36, self.RULE_equalityExpression, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 208
            self.comparisonExpression(0)
            self._ctx.stop = self._input.LT(-1)
            self.state = 215
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,13,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.EqualityExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_equalityExpression)
                    self.state = 210
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 211
                    _la = self._input.LA(1)
                    if not(_la==22 or _la==23):
                        self._errHandler.recoverInline(self)
                    else:
                        self._errHandler.reportMatch(self)
                        self.consume()
                    self.state = 212
                    self.comparisonExpression(0) 
                self.state = 217
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,13,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class ComparisonExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def additiveExpression(self):
            return self.getTypedRuleContext(FAMMParser.AdditiveExpressionContext,0)


        def comparisonExpression(self):
            return self.getTypedRuleContext(FAMMParser.ComparisonExpressionContext,0)


        def LT(self):
            return self.getToken(FAMMParser.LT, 0)

        def GT(self):
            return self.getToken(FAMMParser.GT, 0)

        def LTE(self):
            return self.getToken(FAMMParser.LTE, 0)

        def GTE(self):
            return self.getToken(FAMMParser.GTE, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_comparisonExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterComparisonExpression" ):
                listener.enterComparisonExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitComparisonExpression" ):
                listener.exitComparisonExpression(self)



    def comparisonExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.ComparisonExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 38
        self.enterRecursionRule(localctx, 38, self.RULE_comparisonExpression, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 219
            self.additiveExpression(0)
            self._ctx.stop = self._input.LT(-1)
            self.state = 226
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,14,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.ComparisonExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_comparisonExpression)
                    self.state = 221
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 222
                    _la = self._input.LA(1)
                    if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 251658240) != 0)):
                        self._errHandler.recoverInline(self)
                    else:
                        self._errHandler.reportMatch(self)
                        self.consume()
                    self.state = 223
                    self.additiveExpression(0) 
                self.state = 228
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,14,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class AdditiveExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def multiplicativeExpression(self):
            return self.getTypedRuleContext(FAMMParser.MultiplicativeExpressionContext,0)


        def additiveExpression(self):
            return self.getTypedRuleContext(FAMMParser.AdditiveExpressionContext,0)


        def PLUS(self):
            return self.getToken(FAMMParser.PLUS, 0)

        def MINUS(self):
            return self.getToken(FAMMParser.MINUS, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_additiveExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAdditiveExpression" ):
                listener.enterAdditiveExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAdditiveExpression" ):
                listener.exitAdditiveExpression(self)



    def additiveExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.AdditiveExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 40
        self.enterRecursionRule(localctx, 40, self.RULE_additiveExpression, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 230
            self.multiplicativeExpression(0)
            self._ctx.stop = self._input.LT(-1)
            self.state = 237
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,15,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.AdditiveExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_additiveExpression)
                    self.state = 232
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 233
                    _la = self._input.LA(1)
                    if not(_la==16 or _la==17):
                        self._errHandler.recoverInline(self)
                    else:
                        self._errHandler.reportMatch(self)
                        self.consume()
                    self.state = 234
                    self.multiplicativeExpression(0) 
                self.state = 239
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,15,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class MultiplicativeExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def unaryExpression(self):
            return self.getTypedRuleContext(FAMMParser.UnaryExpressionContext,0)


        def multiplicativeExpression(self):
            return self.getTypedRuleContext(FAMMParser.MultiplicativeExpressionContext,0)


        def MULTIPLY(self):
            return self.getToken(FAMMParser.MULTIPLY, 0)

        def DIVIDE(self):
            return self.getToken(FAMMParser.DIVIDE, 0)

        def INT_DIVIDE(self):
            return self.getToken(FAMMParser.INT_DIVIDE, 0)

        def MODULO(self):
            return self.getToken(FAMMParser.MODULO, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_multiplicativeExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterMultiplicativeExpression" ):
                listener.enterMultiplicativeExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitMultiplicativeExpression" ):
                listener.exitMultiplicativeExpression(self)



    def multiplicativeExpression(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = FAMMParser.MultiplicativeExpressionContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 42
        self.enterRecursionRule(localctx, 42, self.RULE_multiplicativeExpression, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 241
            self.unaryExpression()
            self._ctx.stop = self._input.LT(-1)
            self.state = 248
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,16,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = FAMMParser.MultiplicativeExpressionContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_multiplicativeExpression)
                    self.state = 243
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 244
                    _la = self._input.LA(1)
                    if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 3932160) != 0)):
                        self._errHandler.recoverInline(self)
                    else:
                        self._errHandler.reportMatch(self)
                        self.consume()
                    self.state = 245
                    self.unaryExpression() 
                self.state = 250
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,16,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class UnaryExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def unaryExpression(self):
            return self.getTypedRuleContext(FAMMParser.UnaryExpressionContext,0)


        def NOT(self):
            return self.getToken(FAMMParser.NOT, 0)

        def MINUS(self):
            return self.getToken(FAMMParser.MINUS, 0)

        def primaryExpression(self):
            return self.getTypedRuleContext(FAMMParser.PrimaryExpressionContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_unaryExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterUnaryExpression" ):
                listener.enterUnaryExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitUnaryExpression" ):
                listener.exitUnaryExpression(self)




    def unaryExpression(self):

        localctx = FAMMParser.UnaryExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 44, self.RULE_unaryExpression)
        self._la = 0 # Token type
        try:
            self.state = 254
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [17, 30]:
                self.enterOuterAlt(localctx, 1)
                self.state = 251
                _la = self._input.LA(1)
                if not(_la==17 or _la==30):
                    self._errHandler.recoverInline(self)
                else:
                    self._errHandler.reportMatch(self)
                    self.consume()
                self.state = 252
                self.unaryExpression()
                pass
            elif token in [31, 35, 41, 42, 43, 44, 45, 46, 47, 48, 49]:
                self.enterOuterAlt(localctx, 2)
                self.state = 253
                self.primaryExpression()
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


    class PrimaryExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def functionCall(self):
            return self.getTypedRuleContext(FAMMParser.FunctionCallContext,0)


        def typeCast(self):
            return self.getTypedRuleContext(FAMMParser.TypeCastContext,0)


        def arrayAccess(self):
            return self.getTypedRuleContext(FAMMParser.ArrayAccessContext,0)


        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def literal(self):
            return self.getTypedRuleContext(FAMMParser.LiteralContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_primaryExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterPrimaryExpression" ):
                listener.enterPrimaryExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitPrimaryExpression" ):
                listener.exitPrimaryExpression(self)




    def primaryExpression(self):

        localctx = FAMMParser.PrimaryExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 46, self.RULE_primaryExpression)
        try:
            self.state = 265
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,18,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 256
                self.match(FAMMParser.LPAREN)
                self.state = 257
                self.expression()
                self.state = 258
                self.match(FAMMParser.RPAREN)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 260
                self.functionCall()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 261
                self.typeCast()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 262
                self.arrayAccess()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 263
                self.match(FAMMParser.IDENTIFIER)
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 264
                self.literal()
                pass


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

        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

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
        self.enterRule(localctx, 48, self.RULE_functionCall)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 267
            self.match(FAMMParser.IDENTIFIER)
            self.state = 268
            self.match(FAMMParser.LPAREN)
            self.state = 270
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 1123738464681984) != 0):
                self.state = 269
                self.argumentList()


            self.state = 272
            self.match(FAMMParser.RPAREN)
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


        def COMMA(self, i:int=None):
            if i is None:
                return self.getTokens(FAMMParser.COMMA)
            else:
                return self.getToken(FAMMParser.COMMA, i)

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
        self.enterRule(localctx, 50, self.RULE_argumentList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 274
            self.expression()
            self.state = 279
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==38:
                self.state = 275
                self.match(FAMMParser.COMMA)
                self.state = 276
                self.expression()
                self.state = 281
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class TypeCastContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def LPAREN(self):
            return self.getToken(FAMMParser.LPAREN, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def RPAREN(self):
            return self.getToken(FAMMParser.RPAREN, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_typeCast

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterTypeCast" ):
                listener.enterTypeCast(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitTypeCast" ):
                listener.exitTypeCast(self)




    def typeCast(self):

        localctx = FAMMParser.TypeCastContext(self, self._ctx, self.state)
        self.enterRule(localctx, 52, self.RULE_typeCast)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 282
            self.type_()
            self.state = 283
            self.match(FAMMParser.LPAREN)
            self.state = 284
            self.expression()
            self.state = 285
            self.match(FAMMParser.RPAREN)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ArrayAccessContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(FAMMParser.IDENTIFIER, 0)

        def LBRACKET(self):
            return self.getToken(FAMMParser.LBRACKET, 0)

        def expression(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionContext,0)


        def RBRACKET(self):
            return self.getToken(FAMMParser.RBRACKET, 0)

        def getRuleIndex(self):
            return FAMMParser.RULE_arrayAccess

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterArrayAccess" ):
                listener.enterArrayAccess(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitArrayAccess" ):
                listener.exitArrayAccess(self)




    def arrayAccess(self):

        localctx = FAMMParser.ArrayAccessContext(self, self._ctx, self.state)
        self.enterRule(localctx, 54, self.RULE_arrayAccess)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 287
            self.match(FAMMParser.IDENTIFIER)
            self.state = 288
            self.match(FAMMParser.LBRACKET)
            self.state = 289
            self.expression()
            self.state = 290
            self.match(FAMMParser.RBRACKET)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LiteralContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def INT_LITERAL(self):
            return self.getToken(FAMMParser.INT_LITERAL, 0)

        def FLOAT_LITERAL(self):
            return self.getToken(FAMMParser.FLOAT_LITERAL, 0)

        def STRING_LITERAL(self):
            return self.getToken(FAMMParser.STRING_LITERAL, 0)

        def BOOLEAN_LITERAL(self):
            return self.getToken(FAMMParser.BOOLEAN_LITERAL, 0)

        def arrayLiteral(self):
            return self.getTypedRuleContext(FAMMParser.ArrayLiteralContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_literal

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLiteral" ):
                listener.enterLiteral(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLiteral" ):
                listener.exitLiteral(self)




    def literal(self):

        localctx = FAMMParser.LiteralContext(self, self._ctx, self.state)
        self.enterRule(localctx, 56, self.RULE_literal)
        try:
            self.state = 297
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [47]:
                self.enterOuterAlt(localctx, 1)
                self.state = 292
                self.match(FAMMParser.INT_LITERAL)
                pass
            elif token in [48]:
                self.enterOuterAlt(localctx, 2)
                self.state = 293
                self.match(FAMMParser.FLOAT_LITERAL)
                pass
            elif token in [49]:
                self.enterOuterAlt(localctx, 3)
                self.state = 294
                self.match(FAMMParser.STRING_LITERAL)
                pass
            elif token in [45]:
                self.enterOuterAlt(localctx, 4)
                self.state = 295
                self.match(FAMMParser.BOOLEAN_LITERAL)
                pass
            elif token in [35]:
                self.enterOuterAlt(localctx, 5)
                self.state = 296
                self.arrayLiteral()
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


    class ArrayLiteralContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def LBRACKET(self):
            return self.getToken(FAMMParser.LBRACKET, 0)

        def RBRACKET(self):
            return self.getToken(FAMMParser.RBRACKET, 0)

        def expressionList(self):
            return self.getTypedRuleContext(FAMMParser.ExpressionListContext,0)


        def getRuleIndex(self):
            return FAMMParser.RULE_arrayLiteral

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterArrayLiteral" ):
                listener.enterArrayLiteral(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitArrayLiteral" ):
                listener.exitArrayLiteral(self)




    def arrayLiteral(self):

        localctx = FAMMParser.ArrayLiteralContext(self, self._ctx, self.state)
        self.enterRule(localctx, 58, self.RULE_arrayLiteral)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 299
            self.match(FAMMParser.LBRACKET)
            self.state = 301
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 1123738464681984) != 0):
                self.state = 300
                self.expressionList()


            self.state = 303
            self.match(FAMMParser.RBRACKET)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionListContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(FAMMParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(FAMMParser.ExpressionContext,i)


        def COMMA(self, i:int=None):
            if i is None:
                return self.getTokens(FAMMParser.COMMA)
            else:
                return self.getToken(FAMMParser.COMMA, i)

        def getRuleIndex(self):
            return FAMMParser.RULE_expressionList

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpressionList" ):
                listener.enterExpressionList(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpressionList" ):
                listener.exitExpressionList(self)




    def expressionList(self):

        localctx = FAMMParser.ExpressionListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 60, self.RULE_expressionList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 305
            self.expression()
            self.state = 310
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==38:
                self.state = 306
                self.match(FAMMParser.COMMA)
                self.state = 307
                self.expression()
                self.state = 312
                self._errHandler.sync(self)
                _la = self._input.LA(1)

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

        def INT_TYPE(self):
            return self.getToken(FAMMParser.INT_TYPE, 0)

        def FLOAT_TYPE(self):
            return self.getToken(FAMMParser.FLOAT_TYPE, 0)

        def BOOL_TYPE(self):
            return self.getToken(FAMMParser.BOOL_TYPE, 0)

        def STRING_TYPE(self):
            return self.getToken(FAMMParser.STRING_TYPE, 0)

        def LBRACKET(self):
            return self.getToken(FAMMParser.LBRACKET, 0)

        def type_(self):
            return self.getTypedRuleContext(FAMMParser.TypeContext,0)


        def RBRACKET(self):
            return self.getToken(FAMMParser.RBRACKET, 0)

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
        self.enterRule(localctx, 62, self.RULE_type)
        try:
            self.state = 321
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [41]:
                self.enterOuterAlt(localctx, 1)
                self.state = 313
                self.match(FAMMParser.INT_TYPE)
                pass
            elif token in [42]:
                self.enterOuterAlt(localctx, 2)
                self.state = 314
                self.match(FAMMParser.FLOAT_TYPE)
                pass
            elif token in [43]:
                self.enterOuterAlt(localctx, 3)
                self.state = 315
                self.match(FAMMParser.BOOL_TYPE)
                pass
            elif token in [44]:
                self.enterOuterAlt(localctx, 4)
                self.state = 316
                self.match(FAMMParser.STRING_TYPE)
                pass
            elif token in [35]:
                self.enterOuterAlt(localctx, 5)
                self.state = 317
                self.match(FAMMParser.LBRACKET)
                self.state = 318
                self.type_()
                self.state = 319
                self.match(FAMMParser.RBRACKET)
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



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[16] = self.logicalOrExpression_sempred
        self._predicates[17] = self.logicalAndExpression_sempred
        self._predicates[18] = self.equalityExpression_sempred
        self._predicates[19] = self.comparisonExpression_sempred
        self._predicates[20] = self.additiveExpression_sempred
        self._predicates[21] = self.multiplicativeExpression_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def logicalOrExpression_sempred(self, localctx:LogicalOrExpressionContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 2)
         

    def logicalAndExpression_sempred(self, localctx:LogicalAndExpressionContext, predIndex:int):
            if predIndex == 1:
                return self.precpred(self._ctx, 2)
         

    def equalityExpression_sempred(self, localctx:EqualityExpressionContext, predIndex:int):
            if predIndex == 2:
                return self.precpred(self._ctx, 2)
         

    def comparisonExpression_sempred(self, localctx:ComparisonExpressionContext, predIndex:int):
            if predIndex == 3:
                return self.precpred(self._ctx, 2)
         

    def additiveExpression_sempred(self, localctx:AdditiveExpressionContext, predIndex:int):
            if predIndex == 4:
                return self.precpred(self._ctx, 2)
         

    def multiplicativeExpression_sempred(self, localctx:MultiplicativeExpressionContext, predIndex:int):
            if predIndex == 5:
                return self.precpred(self._ctx, 2)
         




