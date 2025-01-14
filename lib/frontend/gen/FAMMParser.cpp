
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2


#include "FAMMListener.h"

#include "FAMMParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FAMMParserStaticData final {
  FAMMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FAMMParserStaticData(const FAMMParserStaticData&) = delete;
  FAMMParserStaticData(FAMMParserStaticData&&) = delete;
  FAMMParserStaticData& operator=(const FAMMParserStaticData&) = delete;
  FAMMParserStaticData& operator=(FAMMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fammParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<FAMMParserStaticData> fammParserStaticData = nullptr;

void fammParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fammParserStaticData != nullptr) {
    return;
  }
#else
  assert(fammParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FAMMParserStaticData>(
    std::vector<std::string>{
      "program", "line", "statement", "block", "parameterList", "parameter", 
      "scope", "definition", "arrayElementDefinition", "declarationWithDefinition", 
      "declarationWithoutDefinition", "expression", "arrayAccessPtr", "functionCall", 
      "assignmentOp", "multOp", "addOp", "compareOp", "boolOp", "type", 
      "arrayType", "size", "baseType", "constant", "arrayLiteral"
    },
    std::vector<std::string>{
      "", "'var'", "'func'", "'if'", "'else'", "'while'", "'for'", "'by'", 
      "'return'", "'->'", "'!'", "'='", "'+='", "'-='", "'*='", "'/='", 
      "'//='", "'%='", "'*'", "'/'", "'//'", "'%'", "'+'", "'-'", "'=='", 
      "'!='", "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", "'('", "')'", 
      "'{'", "'}'", "';'", "':'", "','", "'['", "']'", "'int'", "'float'", 
      "'string'", "'bool'", "", "", "", "", "'nih'", "'true'", "'false'"
    },
    std::vector<std::string>{
      "", "VAR", "FUNC", "IF", "ELSE", "WHILE", "FOR", "BY", "RETURN", "ARROW", 
      "NOT", "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "MULT_ASSIGNMENT", 
      "DIV_ASSIGNMENT", "FLOOR_DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "MULT", 
      "DIV", "FLOOR_DIV", "MOD", "PLUS", "MINUS", "EQ", "NEQ", "GT", "LT", 
      "GE", "LE", "AND", "OR", "LPAR", "RPAR", "LBRACE", "RBRACE", "SEMICOLON", 
      "COLON", "COMMA", "LBRACKET", "RBRACKET", "INT", "FLOAT", "STRING", 
      "BOOL", "INTEGER_LIT", "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", 
      "TRUE", "FALSE", "IDENTIFIER", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,54,270,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,5,0,52,8,0,10,0,12,0,55,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,65,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,73,
  	8,2,1,2,3,2,76,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,85,8,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,
  	3,107,8,3,1,3,1,3,1,3,1,3,3,3,113,8,3,1,3,1,3,3,3,117,8,3,1,4,1,4,1,4,
  	5,4,122,8,4,10,4,12,4,125,9,4,1,5,1,5,1,5,1,5,1,6,1,6,5,6,133,8,6,10,
  	6,12,6,136,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,5,10,159,8,10,10,10,12,10,162,9,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,3,11,179,8,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,202,8,11,
  	10,11,12,11,205,9,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	5,13,217,8,13,10,13,12,13,220,9,13,3,13,222,8,13,1,13,1,13,1,14,1,14,
  	1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,3,19,238,8,19,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,
  	3,23,255,8,23,1,24,1,24,1,24,1,24,5,24,261,8,24,10,24,12,24,264,9,24,
  	3,24,266,8,24,1,24,1,24,1,24,0,1,22,25,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,48,0,6,1,0,11,17,1,0,18,21,1,0,22,
  	23,1,0,24,29,1,0,30,31,1,0,41,44,280,0,53,1,0,0,0,2,64,1,0,0,0,4,75,1,
  	0,0,0,6,116,1,0,0,0,8,118,1,0,0,0,10,126,1,0,0,0,12,130,1,0,0,0,14,139,
  	1,0,0,0,16,143,1,0,0,0,18,147,1,0,0,0,20,154,1,0,0,0,22,178,1,0,0,0,24,
  	206,1,0,0,0,26,211,1,0,0,0,28,225,1,0,0,0,30,227,1,0,0,0,32,229,1,0,0,
  	0,34,231,1,0,0,0,36,233,1,0,0,0,38,237,1,0,0,0,40,239,1,0,0,0,42,245,
  	1,0,0,0,44,247,1,0,0,0,46,254,1,0,0,0,48,256,1,0,0,0,50,52,3,2,1,0,51,
  	50,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,0,55,
  	53,1,0,0,0,56,57,5,0,0,1,57,1,1,0,0,0,58,59,3,22,11,0,59,60,5,36,0,0,
  	60,65,1,0,0,0,61,62,3,4,2,0,62,63,5,36,0,0,63,65,1,0,0,0,64,58,1,0,0,
  	0,64,61,1,0,0,0,65,3,1,0,0,0,66,76,3,18,9,0,67,76,3,20,10,0,68,76,3,14,
  	7,0,69,76,3,16,8,0,70,72,5,8,0,0,71,73,3,22,11,0,72,71,1,0,0,0,72,73,
  	1,0,0,0,73,76,1,0,0,0,74,76,3,6,3,0,75,66,1,0,0,0,75,67,1,0,0,0,75,68,
  	1,0,0,0,75,69,1,0,0,0,75,70,1,0,0,0,75,74,1,0,0,0,76,5,1,0,0,0,77,78,
  	5,3,0,0,78,79,5,32,0,0,79,80,3,22,11,0,80,81,5,33,0,0,81,84,3,12,6,0,
  	82,83,5,4,0,0,83,85,3,12,6,0,84,82,1,0,0,0,84,85,1,0,0,0,85,117,1,0,0,
  	0,86,87,5,5,0,0,87,88,5,32,0,0,88,89,3,22,11,0,89,90,5,33,0,0,90,91,3,
  	12,6,0,91,117,1,0,0,0,92,93,5,6,0,0,93,94,5,32,0,0,94,95,3,18,9,0,95,
  	96,5,9,0,0,96,97,3,22,11,0,97,98,5,7,0,0,98,99,3,22,11,0,99,100,5,33,
  	0,0,100,101,3,12,6,0,101,117,1,0,0,0,102,103,5,2,0,0,103,104,5,52,0,0,
  	104,106,5,32,0,0,105,107,3,8,4,0,106,105,1,0,0,0,106,107,1,0,0,0,107,
  	108,1,0,0,0,108,109,5,33,0,0,109,112,5,37,0,0,110,113,3,38,19,0,111,113,
  	5,49,0,0,112,110,1,0,0,0,112,111,1,0,0,0,113,114,1,0,0,0,114,115,5,11,
  	0,0,115,117,3,12,6,0,116,77,1,0,0,0,116,86,1,0,0,0,116,92,1,0,0,0,116,
  	102,1,0,0,0,117,7,1,0,0,0,118,123,3,10,5,0,119,120,5,38,0,0,120,122,3,
  	10,5,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,
  	0,124,9,1,0,0,0,125,123,1,0,0,0,126,127,5,52,0,0,127,128,5,37,0,0,128,
  	129,3,38,19,0,129,11,1,0,0,0,130,134,5,34,0,0,131,133,3,2,1,0,132,131,
  	1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,137,1,0,0,
  	0,136,134,1,0,0,0,137,138,5,35,0,0,138,13,1,0,0,0,139,140,5,52,0,0,140,
  	141,3,28,14,0,141,142,3,22,11,0,142,15,1,0,0,0,143,144,3,24,12,0,144,
  	145,3,28,14,0,145,146,3,22,11,0,146,17,1,0,0,0,147,148,5,1,0,0,148,149,
  	5,52,0,0,149,150,5,37,0,0,150,151,3,38,19,0,151,152,5,11,0,0,152,153,
  	3,22,11,0,153,19,1,0,0,0,154,155,5,1,0,0,155,160,5,52,0,0,156,157,5,38,
  	0,0,157,159,5,52,0,0,158,156,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,
  	160,161,1,0,0,0,161,163,1,0,0,0,162,160,1,0,0,0,163,164,5,37,0,0,164,
  	165,3,38,19,0,165,21,1,0,0,0,166,167,6,11,-1,0,167,179,3,46,23,0,168,
  	179,3,26,13,0,169,179,5,52,0,0,170,171,5,32,0,0,171,172,3,22,11,0,172,
  	173,5,33,0,0,173,179,1,0,0,0,174,175,5,10,0,0,175,179,3,22,11,6,176,177,
  	5,23,0,0,177,179,3,22,11,5,178,166,1,0,0,0,178,168,1,0,0,0,178,169,1,
  	0,0,0,178,170,1,0,0,0,178,174,1,0,0,0,178,176,1,0,0,0,179,203,1,0,0,0,
  	180,181,10,4,0,0,181,182,3,30,15,0,182,183,3,22,11,5,183,202,1,0,0,0,
  	184,185,10,3,0,0,185,186,3,32,16,0,186,187,3,22,11,4,187,202,1,0,0,0,
  	188,189,10,2,0,0,189,190,3,34,17,0,190,191,3,22,11,3,191,202,1,0,0,0,
  	192,193,10,1,0,0,193,194,3,36,18,0,194,195,3,22,11,2,195,202,1,0,0,0,
  	196,197,10,8,0,0,197,198,5,39,0,0,198,199,3,22,11,0,199,200,5,40,0,0,
  	200,202,1,0,0,0,201,180,1,0,0,0,201,184,1,0,0,0,201,188,1,0,0,0,201,192,
  	1,0,0,0,201,196,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,
  	0,204,23,1,0,0,0,205,203,1,0,0,0,206,207,3,22,11,0,207,208,5,39,0,0,208,
  	209,3,22,11,0,209,210,5,40,0,0,210,25,1,0,0,0,211,212,5,52,0,0,212,221,
  	5,32,0,0,213,218,3,22,11,0,214,215,5,38,0,0,215,217,3,22,11,0,216,214,
  	1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,222,1,0,0,
  	0,220,218,1,0,0,0,221,213,1,0,0,0,221,222,1,0,0,0,222,223,1,0,0,0,223,
  	224,5,33,0,0,224,27,1,0,0,0,225,226,7,0,0,0,226,29,1,0,0,0,227,228,7,
  	1,0,0,228,31,1,0,0,0,229,230,7,2,0,0,230,33,1,0,0,0,231,232,7,3,0,0,232,
  	35,1,0,0,0,233,234,7,4,0,0,234,37,1,0,0,0,235,238,3,44,22,0,236,238,3,
  	40,20,0,237,235,1,0,0,0,237,236,1,0,0,0,238,39,1,0,0,0,239,240,5,39,0,
  	0,240,241,3,38,19,0,241,242,5,38,0,0,242,243,3,42,21,0,243,244,5,40,0,
  	0,244,41,1,0,0,0,245,246,5,45,0,0,246,43,1,0,0,0,247,248,7,5,0,0,248,
  	45,1,0,0,0,249,255,5,45,0,0,250,255,5,46,0,0,251,255,5,47,0,0,252,255,
  	5,48,0,0,253,255,3,48,24,0,254,249,1,0,0,0,254,250,1,0,0,0,254,251,1,
  	0,0,0,254,252,1,0,0,0,254,253,1,0,0,0,255,47,1,0,0,0,256,265,5,39,0,0,
  	257,262,3,22,11,0,258,259,5,38,0,0,259,261,3,22,11,0,260,258,1,0,0,0,
  	261,264,1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,266,1,0,0,0,264,262,
  	1,0,0,0,265,257,1,0,0,0,265,266,1,0,0,0,266,267,1,0,0,0,267,268,5,40,
  	0,0,268,49,1,0,0,0,20,53,64,72,75,84,106,112,116,123,134,160,178,201,
  	203,218,221,237,254,262,265
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fammParserStaticData = std::move(staticData);
}

}

FAMMParser::FAMMParser(TokenStream *input) : FAMMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

FAMMParser::FAMMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  FAMMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fammParserStaticData->atn, fammParserStaticData->decisionToDFA, fammParserStaticData->sharedContextCache, options);
}

FAMMParser::~FAMMParser() {
  delete _interpreter;
}

const atn::ATN& FAMMParser::getATN() const {
  return *fammParserStaticData->atn;
}

std::string FAMMParser::getGrammarFileName() const {
  return "FAMM.g4";
}

const std::vector<std::string>& FAMMParser::getRuleNames() const {
  return fammParserStaticData->ruleNames;
}

const dfa::Vocabulary& FAMMParser::getVocabulary() const {
  return fammParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FAMMParser::getSerializedATN() const {
  return fammParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

FAMMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ProgramContext::EOF() {
  return getToken(FAMMParser::EOF, 0);
}

std::vector<FAMMParser::LineContext *> FAMMParser::ProgramContext::line() {
  return getRuleContexts<FAMMParser::LineContext>();
}

FAMMParser::LineContext* FAMMParser::ProgramContext::line(size_t i) {
  return getRuleContext<FAMMParser::LineContext>(i);
}


size_t FAMMParser::ProgramContext::getRuleIndex() const {
  return FAMMParser::RuleProgram;
}

void FAMMParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void FAMMParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

FAMMParser::ProgramContext* FAMMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, FAMMParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5031919267874158) != 0)) {
      setState(50);
      line();
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(56);
    match(FAMMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

FAMMParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FAMMParser::LineContext::getRuleIndex() const {
  return FAMMParser::RuleLine;
}

void FAMMParser::LineContext::copyFrom(LineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionLineContext ------------------------------------------------------------------

FAMMParser::ExpressionContext* FAMMParser::ExpressionLineContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

tree::TerminalNode* FAMMParser::ExpressionLineContext::SEMICOLON() {
  return getToken(FAMMParser::SEMICOLON, 0);
}

FAMMParser::ExpressionLineContext::ExpressionLineContext(LineContext *ctx) { copyFrom(ctx); }

void FAMMParser::ExpressionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionLine(this);
}
void FAMMParser::ExpressionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionLine(this);
}
//----------------- StatementLineContext ------------------------------------------------------------------

FAMMParser::StatementContext* FAMMParser::StatementLineContext::statement() {
  return getRuleContext<FAMMParser::StatementContext>(0);
}

tree::TerminalNode* FAMMParser::StatementLineContext::SEMICOLON() {
  return getToken(FAMMParser::SEMICOLON, 0);
}

FAMMParser::StatementLineContext::StatementLineContext(LineContext *ctx) { copyFrom(ctx); }

void FAMMParser::StatementLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementLine(this);
}
void FAMMParser::StatementLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementLine(this);
}
FAMMParser::LineContext* FAMMParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, FAMMParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FAMMParser::ExpressionLineContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(58);
      expression(0);
      setState(59);
      match(FAMMParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FAMMParser::StatementLineContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(61);
      statement();
      setState(62);
      match(FAMMParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

FAMMParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FAMMParser::StatementContext::getRuleIndex() const {
  return FAMMParser::RuleStatement;
}

void FAMMParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationWithDefinitionStatementContext ------------------------------------------------------------------

FAMMParser::DeclarationWithDefinitionContext* FAMMParser::DeclarationWithDefinitionStatementContext::declarationWithDefinition() {
  return getRuleContext<FAMMParser::DeclarationWithDefinitionContext>(0);
}

FAMMParser::DeclarationWithDefinitionStatementContext::DeclarationWithDefinitionStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::DeclarationWithDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationWithDefinitionStatement(this);
}
void FAMMParser::DeclarationWithDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationWithDefinitionStatement(this);
}
//----------------- DefinitionStatementContext ------------------------------------------------------------------

FAMMParser::DefinitionContext* FAMMParser::DefinitionStatementContext::definition() {
  return getRuleContext<FAMMParser::DefinitionContext>(0);
}

FAMMParser::DefinitionStatementContext::DefinitionStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::DefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionStatement(this);
}
void FAMMParser::DefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionStatement(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::ReturnStatementContext::RETURN() {
  return getToken(FAMMParser::RETURN, 0);
}

FAMMParser::ExpressionContext* FAMMParser::ReturnStatementContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

FAMMParser::ReturnStatementContext::ReturnStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void FAMMParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

FAMMParser::BlockContext* FAMMParser::BlockStatementContext::block() {
  return getRuleContext<FAMMParser::BlockContext>(0);
}

FAMMParser::BlockStatementContext::BlockStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}
void FAMMParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}
//----------------- DeclarationWithoutDefinitionStatementContext ------------------------------------------------------------------

FAMMParser::DeclarationWithoutDefinitionContext* FAMMParser::DeclarationWithoutDefinitionStatementContext::declarationWithoutDefinition() {
  return getRuleContext<FAMMParser::DeclarationWithoutDefinitionContext>(0);
}

FAMMParser::DeclarationWithoutDefinitionStatementContext::DeclarationWithoutDefinitionStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::DeclarationWithoutDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationWithoutDefinitionStatement(this);
}
void FAMMParser::DeclarationWithoutDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationWithoutDefinitionStatement(this);
}
//----------------- ArrayElementDefinitionStatementContext ------------------------------------------------------------------

FAMMParser::ArrayElementDefinitionContext* FAMMParser::ArrayElementDefinitionStatementContext::arrayElementDefinition() {
  return getRuleContext<FAMMParser::ArrayElementDefinitionContext>(0);
}

FAMMParser::ArrayElementDefinitionStatementContext::ArrayElementDefinitionStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void FAMMParser::ArrayElementDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElementDefinitionStatement(this);
}
void FAMMParser::ArrayElementDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElementDefinitionStatement(this);
}
FAMMParser::StatementContext* FAMMParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, FAMMParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FAMMParser::DeclarationWithDefinitionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(66);
      declarationWithDefinition();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FAMMParser::DeclarationWithoutDefinitionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(67);
      declarationWithoutDefinition();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FAMMParser::DefinitionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(68);
      definition();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FAMMParser::ArrayElementDefinitionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(69);
      arrayElementDefinition();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FAMMParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(70);
      match(FAMMParser::RETURN);
      setState(72);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 5031919267873792) != 0)) {
        setState(71);
        expression(0);
      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FAMMParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(74);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

FAMMParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FAMMParser::BlockContext::getRuleIndex() const {
  return FAMMParser::RuleBlock;
}

void FAMMParser::BlockContext::copyFrom(BlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileBlockContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::WhileBlockContext::WHILE() {
  return getToken(FAMMParser::WHILE, 0);
}

tree::TerminalNode* FAMMParser::WhileBlockContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

FAMMParser::ExpressionContext* FAMMParser::WhileBlockContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

tree::TerminalNode* FAMMParser::WhileBlockContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

FAMMParser::ScopeContext* FAMMParser::WhileBlockContext::scope() {
  return getRuleContext<FAMMParser::ScopeContext>(0);
}

FAMMParser::WhileBlockContext::WhileBlockContext(BlockContext *ctx) { copyFrom(ctx); }

void FAMMParser::WhileBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileBlock(this);
}
void FAMMParser::WhileBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileBlock(this);
}
//----------------- ForBlockContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::ForBlockContext::FOR() {
  return getToken(FAMMParser::FOR, 0);
}

tree::TerminalNode* FAMMParser::ForBlockContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

FAMMParser::DeclarationWithDefinitionContext* FAMMParser::ForBlockContext::declarationWithDefinition() {
  return getRuleContext<FAMMParser::DeclarationWithDefinitionContext>(0);
}

tree::TerminalNode* FAMMParser::ForBlockContext::ARROW() {
  return getToken(FAMMParser::ARROW, 0);
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ForBlockContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ForBlockContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

tree::TerminalNode* FAMMParser::ForBlockContext::BY() {
  return getToken(FAMMParser::BY, 0);
}

tree::TerminalNode* FAMMParser::ForBlockContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

FAMMParser::ScopeContext* FAMMParser::ForBlockContext::scope() {
  return getRuleContext<FAMMParser::ScopeContext>(0);
}

FAMMParser::ForBlockContext::ForBlockContext(BlockContext *ctx) { copyFrom(ctx); }

void FAMMParser::ForBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForBlock(this);
}
void FAMMParser::ForBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForBlock(this);
}
//----------------- IfBlockContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::IfBlockContext::IF() {
  return getToken(FAMMParser::IF, 0);
}

tree::TerminalNode* FAMMParser::IfBlockContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

FAMMParser::ExpressionContext* FAMMParser::IfBlockContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

tree::TerminalNode* FAMMParser::IfBlockContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

std::vector<FAMMParser::ScopeContext *> FAMMParser::IfBlockContext::scope() {
  return getRuleContexts<FAMMParser::ScopeContext>();
}

FAMMParser::ScopeContext* FAMMParser::IfBlockContext::scope(size_t i) {
  return getRuleContext<FAMMParser::ScopeContext>(i);
}

tree::TerminalNode* FAMMParser::IfBlockContext::ELSE() {
  return getToken(FAMMParser::ELSE, 0);
}

FAMMParser::IfBlockContext::IfBlockContext(BlockContext *ctx) { copyFrom(ctx); }

void FAMMParser::IfBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBlock(this);
}
void FAMMParser::IfBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBlock(this);
}
//----------------- FunctionBlockContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::FunctionBlockContext::FUNC() {
  return getToken(FAMMParser::FUNC, 0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::COLON() {
  return getToken(FAMMParser::COLON, 0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::ASSIGNMENT() {
  return getToken(FAMMParser::ASSIGNMENT, 0);
}

FAMMParser::ScopeContext* FAMMParser::FunctionBlockContext::scope() {
  return getRuleContext<FAMMParser::ScopeContext>(0);
}

FAMMParser::TypeContext* FAMMParser::FunctionBlockContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

tree::TerminalNode* FAMMParser::FunctionBlockContext::NIH_LIT() {
  return getToken(FAMMParser::NIH_LIT, 0);
}

FAMMParser::ParameterListContext* FAMMParser::FunctionBlockContext::parameterList() {
  return getRuleContext<FAMMParser::ParameterListContext>(0);
}

FAMMParser::FunctionBlockContext::FunctionBlockContext(BlockContext *ctx) { copyFrom(ctx); }

void FAMMParser::FunctionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBlock(this);
}
void FAMMParser::FunctionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBlock(this);
}
FAMMParser::BlockContext* FAMMParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, FAMMParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::IF: {
        _localctx = _tracker.createInstance<FAMMParser::IfBlockContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(77);
        match(FAMMParser::IF);
        setState(78);
        match(FAMMParser::LPAR);
        setState(79);
        expression(0);
        setState(80);
        match(FAMMParser::RPAR);
        setState(81);
        scope();
        setState(84);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FAMMParser::ELSE) {
          setState(82);
          match(FAMMParser::ELSE);
          setState(83);
          scope();
        }
        break;
      }

      case FAMMParser::WHILE: {
        _localctx = _tracker.createInstance<FAMMParser::WhileBlockContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(FAMMParser::WHILE);
        setState(87);
        match(FAMMParser::LPAR);
        setState(88);
        expression(0);
        setState(89);
        match(FAMMParser::RPAR);
        setState(90);
        scope();
        break;
      }

      case FAMMParser::FOR: {
        _localctx = _tracker.createInstance<FAMMParser::ForBlockContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(92);
        match(FAMMParser::FOR);
        setState(93);
        match(FAMMParser::LPAR);
        setState(94);
        declarationWithDefinition();
        setState(95);
        match(FAMMParser::ARROW);
        setState(96);
        expression(0);
        setState(97);
        match(FAMMParser::BY);
        setState(98);
        expression(0);
        setState(99);
        match(FAMMParser::RPAR);
        setState(100);
        scope();
        break;
      }

      case FAMMParser::FUNC: {
        _localctx = _tracker.createInstance<FAMMParser::FunctionBlockContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(102);
        match(FAMMParser::FUNC);
        setState(103);
        match(FAMMParser::IDENTIFIER);
        setState(104);
        match(FAMMParser::LPAR);
        setState(106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FAMMParser::IDENTIFIER) {
          setState(105);
          parameterList();
        }
        setState(108);
        match(FAMMParser::RPAR);
        setState(109);
        match(FAMMParser::COLON);
        setState(112);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case FAMMParser::LBRACKET:
          case FAMMParser::INT:
          case FAMMParser::FLOAT:
          case FAMMParser::STRING:
          case FAMMParser::BOOL: {
            setState(110);
            type();
            break;
          }

          case FAMMParser::NIH_LIT: {
            setState(111);
            match(FAMMParser::NIH_LIT);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(114);
        match(FAMMParser::ASSIGNMENT);
        setState(115);
        scope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

FAMMParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FAMMParser::ParameterContext *> FAMMParser::ParameterListContext::parameter() {
  return getRuleContexts<FAMMParser::ParameterContext>();
}

FAMMParser::ParameterContext* FAMMParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<FAMMParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> FAMMParser::ParameterListContext::COMMA() {
  return getTokens(FAMMParser::COMMA);
}

tree::TerminalNode* FAMMParser::ParameterListContext::COMMA(size_t i) {
  return getToken(FAMMParser::COMMA, i);
}


size_t FAMMParser::ParameterListContext::getRuleIndex() const {
  return FAMMParser::RuleParameterList;
}

void FAMMParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void FAMMParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

FAMMParser::ParameterListContext* FAMMParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 8, FAMMParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    parameter();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(119);
      match(FAMMParser::COMMA);
      setState(120);
      parameter();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

FAMMParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ParameterContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

tree::TerminalNode* FAMMParser::ParameterContext::COLON() {
  return getToken(FAMMParser::COLON, 0);
}

FAMMParser::TypeContext* FAMMParser::ParameterContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}


size_t FAMMParser::ParameterContext::getRuleIndex() const {
  return FAMMParser::RuleParameter;
}

void FAMMParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void FAMMParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

FAMMParser::ParameterContext* FAMMParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, FAMMParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(FAMMParser::IDENTIFIER);
    setState(127);
    match(FAMMParser::COLON);
    setState(128);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

FAMMParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ScopeContext::LBRACE() {
  return getToken(FAMMParser::LBRACE, 0);
}

tree::TerminalNode* FAMMParser::ScopeContext::RBRACE() {
  return getToken(FAMMParser::RBRACE, 0);
}

std::vector<FAMMParser::LineContext *> FAMMParser::ScopeContext::line() {
  return getRuleContexts<FAMMParser::LineContext>();
}

FAMMParser::LineContext* FAMMParser::ScopeContext::line(size_t i) {
  return getRuleContext<FAMMParser::LineContext>(i);
}


size_t FAMMParser::ScopeContext::getRuleIndex() const {
  return FAMMParser::RuleScope;
}

void FAMMParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void FAMMParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}

FAMMParser::ScopeContext* FAMMParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 12, FAMMParser::RuleScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(FAMMParser::LBRACE);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5031919267874158) != 0)) {
      setState(131);
      line();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    match(FAMMParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

FAMMParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::DefinitionContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

FAMMParser::AssignmentOpContext* FAMMParser::DefinitionContext::assignmentOp() {
  return getRuleContext<FAMMParser::AssignmentOpContext>(0);
}

FAMMParser::ExpressionContext* FAMMParser::DefinitionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}


size_t FAMMParser::DefinitionContext::getRuleIndex() const {
  return FAMMParser::RuleDefinition;
}

void FAMMParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void FAMMParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}

FAMMParser::DefinitionContext* FAMMParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, FAMMParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(FAMMParser::IDENTIFIER);
    setState(140);
    assignmentOp();
    setState(141);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayElementDefinitionContext ------------------------------------------------------------------

FAMMParser::ArrayElementDefinitionContext::ArrayElementDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FAMMParser::ArrayAccessPtrContext* FAMMParser::ArrayElementDefinitionContext::arrayAccessPtr() {
  return getRuleContext<FAMMParser::ArrayAccessPtrContext>(0);
}

FAMMParser::AssignmentOpContext* FAMMParser::ArrayElementDefinitionContext::assignmentOp() {
  return getRuleContext<FAMMParser::AssignmentOpContext>(0);
}

FAMMParser::ExpressionContext* FAMMParser::ArrayElementDefinitionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}


size_t FAMMParser::ArrayElementDefinitionContext::getRuleIndex() const {
  return FAMMParser::RuleArrayElementDefinition;
}

void FAMMParser::ArrayElementDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElementDefinition(this);
}

void FAMMParser::ArrayElementDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElementDefinition(this);
}

FAMMParser::ArrayElementDefinitionContext* FAMMParser::arrayElementDefinition() {
  ArrayElementDefinitionContext *_localctx = _tracker.createInstance<ArrayElementDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, FAMMParser::RuleArrayElementDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    arrayAccessPtr();
    setState(144);
    assignmentOp();
    setState(145);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationWithDefinitionContext ------------------------------------------------------------------

FAMMParser::DeclarationWithDefinitionContext::DeclarationWithDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::DeclarationWithDefinitionContext::VAR() {
  return getToken(FAMMParser::VAR, 0);
}

tree::TerminalNode* FAMMParser::DeclarationWithDefinitionContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

tree::TerminalNode* FAMMParser::DeclarationWithDefinitionContext::COLON() {
  return getToken(FAMMParser::COLON, 0);
}

FAMMParser::TypeContext* FAMMParser::DeclarationWithDefinitionContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

tree::TerminalNode* FAMMParser::DeclarationWithDefinitionContext::ASSIGNMENT() {
  return getToken(FAMMParser::ASSIGNMENT, 0);
}

FAMMParser::ExpressionContext* FAMMParser::DeclarationWithDefinitionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}


size_t FAMMParser::DeclarationWithDefinitionContext::getRuleIndex() const {
  return FAMMParser::RuleDeclarationWithDefinition;
}

void FAMMParser::DeclarationWithDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationWithDefinition(this);
}

void FAMMParser::DeclarationWithDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationWithDefinition(this);
}

FAMMParser::DeclarationWithDefinitionContext* FAMMParser::declarationWithDefinition() {
  DeclarationWithDefinitionContext *_localctx = _tracker.createInstance<DeclarationWithDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, FAMMParser::RuleDeclarationWithDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(FAMMParser::VAR);
    setState(148);
    match(FAMMParser::IDENTIFIER);
    setState(149);
    match(FAMMParser::COLON);
    setState(150);
    type();
    setState(151);
    match(FAMMParser::ASSIGNMENT);
    setState(152);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationWithoutDefinitionContext ------------------------------------------------------------------

FAMMParser::DeclarationWithoutDefinitionContext::DeclarationWithoutDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::DeclarationWithoutDefinitionContext::VAR() {
  return getToken(FAMMParser::VAR, 0);
}

std::vector<tree::TerminalNode *> FAMMParser::DeclarationWithoutDefinitionContext::IDENTIFIER() {
  return getTokens(FAMMParser::IDENTIFIER);
}

tree::TerminalNode* FAMMParser::DeclarationWithoutDefinitionContext::IDENTIFIER(size_t i) {
  return getToken(FAMMParser::IDENTIFIER, i);
}

tree::TerminalNode* FAMMParser::DeclarationWithoutDefinitionContext::COLON() {
  return getToken(FAMMParser::COLON, 0);
}

FAMMParser::TypeContext* FAMMParser::DeclarationWithoutDefinitionContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> FAMMParser::DeclarationWithoutDefinitionContext::COMMA() {
  return getTokens(FAMMParser::COMMA);
}

tree::TerminalNode* FAMMParser::DeclarationWithoutDefinitionContext::COMMA(size_t i) {
  return getToken(FAMMParser::COMMA, i);
}


size_t FAMMParser::DeclarationWithoutDefinitionContext::getRuleIndex() const {
  return FAMMParser::RuleDeclarationWithoutDefinition;
}

void FAMMParser::DeclarationWithoutDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationWithoutDefinition(this);
}

void FAMMParser::DeclarationWithoutDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationWithoutDefinition(this);
}

FAMMParser::DeclarationWithoutDefinitionContext* FAMMParser::declarationWithoutDefinition() {
  DeclarationWithoutDefinitionContext *_localctx = _tracker.createInstance<DeclarationWithoutDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, FAMMParser::RuleDeclarationWithoutDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(FAMMParser::VAR);
    setState(155);
    match(FAMMParser::IDENTIFIER);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(156);
      match(FAMMParser::COMMA);
      setState(157);
      match(FAMMParser::IDENTIFIER);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    match(FAMMParser::COLON);
    setState(164);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

FAMMParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FAMMParser::ExpressionContext::getRuleIndex() const {
  return FAMMParser::RuleExpression;
}

void FAMMParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddSubExpressionContext ------------------------------------------------------------------

std::vector<FAMMParser::ExpressionContext *> FAMMParser::AddSubExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::AddSubExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

FAMMParser::AddOpContext* FAMMParser::AddSubExpressionContext::addOp() {
  return getRuleContext<FAMMParser::AddOpContext>(0);
}

FAMMParser::AddSubExpressionContext::AddSubExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::AddSubExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpression(this);
}
void FAMMParser::AddSubExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpression(this);
}
//----------------- ConstantExpressionContext ------------------------------------------------------------------

FAMMParser::ConstantContext* FAMMParser::ConstantExpressionContext::constant() {
  return getRuleContext<FAMMParser::ConstantContext>(0);
}

FAMMParser::ConstantExpressionContext::ConstantExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}
void FAMMParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}
//----------------- ParenExpressionContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::ParenExpressionContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

FAMMParser::ExpressionContext* FAMMParser::ParenExpressionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

tree::TerminalNode* FAMMParser::ParenExpressionContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

FAMMParser::ParenExpressionContext::ParenExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::ParenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpression(this);
}
void FAMMParser::ParenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpression(this);
}
//----------------- CompareExpressionContext ------------------------------------------------------------------

std::vector<FAMMParser::ExpressionContext *> FAMMParser::CompareExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::CompareExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

FAMMParser::CompareOpContext* FAMMParser::CompareExpressionContext::compareOp() {
  return getRuleContext<FAMMParser::CompareOpContext>(0);
}

FAMMParser::CompareExpressionContext::CompareExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::CompareExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareExpression(this);
}
void FAMMParser::CompareExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareExpression(this);
}
//----------------- NegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::NegationExpressionContext::NOT() {
  return getToken(FAMMParser::NOT, 0);
}

FAMMParser::ExpressionContext* FAMMParser::NegationExpressionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

FAMMParser::NegationExpressionContext::NegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::NegationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegationExpression(this);
}
void FAMMParser::NegationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegationExpression(this);
}
//----------------- ArrayAccessExpressionContext ------------------------------------------------------------------

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ArrayAccessExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ArrayAccessExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

tree::TerminalNode* FAMMParser::ArrayAccessExpressionContext::LBRACKET() {
  return getToken(FAMMParser::LBRACKET, 0);
}

tree::TerminalNode* FAMMParser::ArrayAccessExpressionContext::RBRACKET() {
  return getToken(FAMMParser::RBRACKET, 0);
}

FAMMParser::ArrayAccessExpressionContext::ArrayAccessExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::ArrayAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessExpression(this);
}
void FAMMParser::ArrayAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessExpression(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

FAMMParser::FunctionCallContext* FAMMParser::FunctionCallExpressionContext::functionCall() {
  return getRuleContext<FAMMParser::FunctionCallContext>(0);
}

FAMMParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}
void FAMMParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::IdentifierExpressionContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

FAMMParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void FAMMParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}
//----------------- NegativeExpressionContext ------------------------------------------------------------------

tree::TerminalNode* FAMMParser::NegativeExpressionContext::MINUS() {
  return getToken(FAMMParser::MINUS, 0);
}

FAMMParser::ExpressionContext* FAMMParser::NegativeExpressionContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

FAMMParser::NegativeExpressionContext::NegativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::NegativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegativeExpression(this);
}
void FAMMParser::NegativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegativeExpression(this);
}
//----------------- MulDivExpressionContext ------------------------------------------------------------------

std::vector<FAMMParser::ExpressionContext *> FAMMParser::MulDivExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::MulDivExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

FAMMParser::MultOpContext* FAMMParser::MulDivExpressionContext::multOp() {
  return getRuleContext<FAMMParser::MultOpContext>(0);
}

FAMMParser::MulDivExpressionContext::MulDivExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::MulDivExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpression(this);
}
void FAMMParser::MulDivExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpression(this);
}
//----------------- BoolExpressionContext ------------------------------------------------------------------

std::vector<FAMMParser::ExpressionContext *> FAMMParser::BoolExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::BoolExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

FAMMParser::BoolOpContext* FAMMParser::BoolExpressionContext::boolOp() {
  return getRuleContext<FAMMParser::BoolOpContext>(0);
}

FAMMParser::BoolExpressionContext::BoolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void FAMMParser::BoolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpression(this);
}
void FAMMParser::BoolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpression(this);
}

FAMMParser::ExpressionContext* FAMMParser::expression() {
   return expression(0);
}

FAMMParser::ExpressionContext* FAMMParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FAMMParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  FAMMParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, FAMMParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstantExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(167);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(168);
      functionCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(169);
      match(FAMMParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(170);
      match(FAMMParser::LPAR);
      setState(171);
      expression(0);
      setState(172);
      match(FAMMParser::RPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(174);
      match(FAMMParser::NOT);
      setState(175);
      expression(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(176);
      match(FAMMParser::MINUS);
      setState(177);
      expression(5);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(203);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(201);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(180);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(181);
          multOp();
          setState(182);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(184);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(185);
          addOp();
          setState(186);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompareExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(188);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(189);
          compareOp();
          setState(190);
          expression(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BoolExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(192);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(193);
          boolOp();
          setState(194);
          expression(2);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArrayAccessExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(196);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(197);
          match(FAMMParser::LBRACKET);
          setState(198);
          expression(0);
          setState(199);
          match(FAMMParser::RBRACKET);
          break;
        }

        default:
          break;
        } 
      }
      setState(205);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayAccessPtrContext ------------------------------------------------------------------

FAMMParser::ArrayAccessPtrContext::ArrayAccessPtrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ArrayAccessPtrContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ArrayAccessPtrContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

tree::TerminalNode* FAMMParser::ArrayAccessPtrContext::LBRACKET() {
  return getToken(FAMMParser::LBRACKET, 0);
}

tree::TerminalNode* FAMMParser::ArrayAccessPtrContext::RBRACKET() {
  return getToken(FAMMParser::RBRACKET, 0);
}


size_t FAMMParser::ArrayAccessPtrContext::getRuleIndex() const {
  return FAMMParser::RuleArrayAccessPtr;
}

void FAMMParser::ArrayAccessPtrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessPtr(this);
}

void FAMMParser::ArrayAccessPtrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessPtr(this);
}

FAMMParser::ArrayAccessPtrContext* FAMMParser::arrayAccessPtr() {
  ArrayAccessPtrContext *_localctx = _tracker.createInstance<ArrayAccessPtrContext>(_ctx, getState());
  enterRule(_localctx, 24, FAMMParser::RuleArrayAccessPtr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    expression(0);
    setState(207);
    match(FAMMParser::LBRACKET);
    setState(208);
    expression(0);
    setState(209);
    match(FAMMParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

FAMMParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::FunctionCallContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

tree::TerminalNode* FAMMParser::FunctionCallContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

tree::TerminalNode* FAMMParser::FunctionCallContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::FunctionCallContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> FAMMParser::FunctionCallContext::COMMA() {
  return getTokens(FAMMParser::COMMA);
}

tree::TerminalNode* FAMMParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(FAMMParser::COMMA, i);
}


size_t FAMMParser::FunctionCallContext::getRuleIndex() const {
  return FAMMParser::RuleFunctionCall;
}

void FAMMParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void FAMMParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

FAMMParser::FunctionCallContext* FAMMParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 26, FAMMParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(FAMMParser::IDENTIFIER);
    setState(212);
    match(FAMMParser::LPAR);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5031919267873792) != 0)) {
      setState(213);
      expression(0);
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(214);
        match(FAMMParser::COMMA);
        setState(215);
        expression(0);
        setState(220);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(223);
    match(FAMMParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOpContext ------------------------------------------------------------------

FAMMParser::AssignmentOpContext::AssignmentOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::ASSIGNMENT() {
  return getToken(FAMMParser::ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::MULT_ASSIGNMENT() {
  return getToken(FAMMParser::MULT_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::DIV_ASSIGNMENT() {
  return getToken(FAMMParser::DIV_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::FLOOR_DIV_ASSIGNMENT() {
  return getToken(FAMMParser::FLOOR_DIV_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::MOD_ASSIGNMENT() {
  return getToken(FAMMParser::MOD_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::PLUS_ASSIGNMENT() {
  return getToken(FAMMParser::PLUS_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::MINUS_ASSIGNMENT() {
  return getToken(FAMMParser::MINUS_ASSIGNMENT, 0);
}


size_t FAMMParser::AssignmentOpContext::getRuleIndex() const {
  return FAMMParser::RuleAssignmentOp;
}

void FAMMParser::AssignmentOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOp(this);
}

void FAMMParser::AssignmentOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOp(this);
}

FAMMParser::AssignmentOpContext* FAMMParser::assignmentOp() {
  AssignmentOpContext *_localctx = _tracker.createInstance<AssignmentOpContext>(_ctx, getState());
  enterRule(_localctx, 28, FAMMParser::RuleAssignmentOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 260096) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultOpContext ------------------------------------------------------------------

FAMMParser::MultOpContext::MultOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::MultOpContext::MULT() {
  return getToken(FAMMParser::MULT, 0);
}

tree::TerminalNode* FAMMParser::MultOpContext::DIV() {
  return getToken(FAMMParser::DIV, 0);
}

tree::TerminalNode* FAMMParser::MultOpContext::FLOOR_DIV() {
  return getToken(FAMMParser::FLOOR_DIV, 0);
}

tree::TerminalNode* FAMMParser::MultOpContext::MOD() {
  return getToken(FAMMParser::MOD, 0);
}


size_t FAMMParser::MultOpContext::getRuleIndex() const {
  return FAMMParser::RuleMultOp;
}

void FAMMParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}

void FAMMParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}

FAMMParser::MultOpContext* FAMMParser::multOp() {
  MultOpContext *_localctx = _tracker.createInstance<MultOpContext>(_ctx, getState());
  enterRule(_localctx, 30, FAMMParser::RuleMultOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3932160) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

FAMMParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::AddOpContext::PLUS() {
  return getToken(FAMMParser::PLUS, 0);
}

tree::TerminalNode* FAMMParser::AddOpContext::MINUS() {
  return getToken(FAMMParser::MINUS, 0);
}


size_t FAMMParser::AddOpContext::getRuleIndex() const {
  return FAMMParser::RuleAddOp;
}

void FAMMParser::AddOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOp(this);
}

void FAMMParser::AddOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOp(this);
}

FAMMParser::AddOpContext* FAMMParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 32, FAMMParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _la = _input->LA(1);
    if (!(_la == FAMMParser::PLUS

    || _la == FAMMParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareOpContext ------------------------------------------------------------------

FAMMParser::CompareOpContext::CompareOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::CompareOpContext::EQ() {
  return getToken(FAMMParser::EQ, 0);
}

tree::TerminalNode* FAMMParser::CompareOpContext::NEQ() {
  return getToken(FAMMParser::NEQ, 0);
}

tree::TerminalNode* FAMMParser::CompareOpContext::GT() {
  return getToken(FAMMParser::GT, 0);
}

tree::TerminalNode* FAMMParser::CompareOpContext::LT() {
  return getToken(FAMMParser::LT, 0);
}

tree::TerminalNode* FAMMParser::CompareOpContext::GE() {
  return getToken(FAMMParser::GE, 0);
}

tree::TerminalNode* FAMMParser::CompareOpContext::LE() {
  return getToken(FAMMParser::LE, 0);
}


size_t FAMMParser::CompareOpContext::getRuleIndex() const {
  return FAMMParser::RuleCompareOp;
}

void FAMMParser::CompareOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareOp(this);
}

void FAMMParser::CompareOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareOp(this);
}

FAMMParser::CompareOpContext* FAMMParser::compareOp() {
  CompareOpContext *_localctx = _tracker.createInstance<CompareOpContext>(_ctx, getState());
  enterRule(_localctx, 34, FAMMParser::RuleCompareOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1056964608) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolOpContext ------------------------------------------------------------------

FAMMParser::BoolOpContext::BoolOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::BoolOpContext::AND() {
  return getToken(FAMMParser::AND, 0);
}

tree::TerminalNode* FAMMParser::BoolOpContext::OR() {
  return getToken(FAMMParser::OR, 0);
}


size_t FAMMParser::BoolOpContext::getRuleIndex() const {
  return FAMMParser::RuleBoolOp;
}

void FAMMParser::BoolOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolOp(this);
}

void FAMMParser::BoolOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolOp(this);
}

FAMMParser::BoolOpContext* FAMMParser::boolOp() {
  BoolOpContext *_localctx = _tracker.createInstance<BoolOpContext>(_ctx, getState());
  enterRule(_localctx, 36, FAMMParser::RuleBoolOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _la = _input->LA(1);
    if (!(_la == FAMMParser::AND

    || _la == FAMMParser::OR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

FAMMParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FAMMParser::BaseTypeContext* FAMMParser::TypeContext::baseType() {
  return getRuleContext<FAMMParser::BaseTypeContext>(0);
}

FAMMParser::ArrayTypeContext* FAMMParser::TypeContext::arrayType() {
  return getRuleContext<FAMMParser::ArrayTypeContext>(0);
}


size_t FAMMParser::TypeContext::getRuleIndex() const {
  return FAMMParser::RuleType;
}

void FAMMParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void FAMMParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

FAMMParser::TypeContext* FAMMParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 38, FAMMParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INT:
      case FAMMParser::FLOAT:
      case FAMMParser::STRING:
      case FAMMParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(235);
        baseType();
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(236);
        arrayType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

FAMMParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ArrayTypeContext::LBRACKET() {
  return getToken(FAMMParser::LBRACKET, 0);
}

FAMMParser::TypeContext* FAMMParser::ArrayTypeContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

tree::TerminalNode* FAMMParser::ArrayTypeContext::COMMA() {
  return getToken(FAMMParser::COMMA, 0);
}

FAMMParser::SizeContext* FAMMParser::ArrayTypeContext::size() {
  return getRuleContext<FAMMParser::SizeContext>(0);
}

tree::TerminalNode* FAMMParser::ArrayTypeContext::RBRACKET() {
  return getToken(FAMMParser::RBRACKET, 0);
}


size_t FAMMParser::ArrayTypeContext::getRuleIndex() const {
  return FAMMParser::RuleArrayType;
}

void FAMMParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void FAMMParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}

FAMMParser::ArrayTypeContext* FAMMParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, FAMMParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(FAMMParser::LBRACKET);
    setState(240);
    type();
    setState(241);
    match(FAMMParser::COMMA);
    setState(242);
    size();
    setState(243);
    match(FAMMParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SizeContext ------------------------------------------------------------------

FAMMParser::SizeContext::SizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::SizeContext::INTEGER_LIT() {
  return getToken(FAMMParser::INTEGER_LIT, 0);
}


size_t FAMMParser::SizeContext::getRuleIndex() const {
  return FAMMParser::RuleSize;
}

void FAMMParser::SizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSize(this);
}

void FAMMParser::SizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSize(this);
}

FAMMParser::SizeContext* FAMMParser::size() {
  SizeContext *_localctx = _tracker.createInstance<SizeContext>(_ctx, getState());
  enterRule(_localctx, 42, FAMMParser::RuleSize);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(FAMMParser::INTEGER_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

FAMMParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::BaseTypeContext::INT() {
  return getToken(FAMMParser::INT, 0);
}

tree::TerminalNode* FAMMParser::BaseTypeContext::FLOAT() {
  return getToken(FAMMParser::FLOAT, 0);
}

tree::TerminalNode* FAMMParser::BaseTypeContext::STRING() {
  return getToken(FAMMParser::STRING, 0);
}

tree::TerminalNode* FAMMParser::BaseTypeContext::BOOL() {
  return getToken(FAMMParser::BOOL, 0);
}


size_t FAMMParser::BaseTypeContext::getRuleIndex() const {
  return FAMMParser::RuleBaseType;
}

void FAMMParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void FAMMParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}

FAMMParser::BaseTypeContext* FAMMParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, FAMMParser::RuleBaseType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348833280) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

FAMMParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ConstantContext::INTEGER_LIT() {
  return getToken(FAMMParser::INTEGER_LIT, 0);
}

tree::TerminalNode* FAMMParser::ConstantContext::FLOAT_LIT() {
  return getToken(FAMMParser::FLOAT_LIT, 0);
}

tree::TerminalNode* FAMMParser::ConstantContext::STRING_LIT() {
  return getToken(FAMMParser::STRING_LIT, 0);
}

tree::TerminalNode* FAMMParser::ConstantContext::BOOL_LIT() {
  return getToken(FAMMParser::BOOL_LIT, 0);
}

FAMMParser::ArrayLiteralContext* FAMMParser::ConstantContext::arrayLiteral() {
  return getRuleContext<FAMMParser::ArrayLiteralContext>(0);
}


size_t FAMMParser::ConstantContext::getRuleIndex() const {
  return FAMMParser::RuleConstant;
}

void FAMMParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void FAMMParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

FAMMParser::ConstantContext* FAMMParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 46, FAMMParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INTEGER_LIT: {
        enterOuterAlt(_localctx, 1);
        setState(249);
        match(FAMMParser::INTEGER_LIT);
        break;
      }

      case FAMMParser::FLOAT_LIT: {
        enterOuterAlt(_localctx, 2);
        setState(250);
        match(FAMMParser::FLOAT_LIT);
        break;
      }

      case FAMMParser::STRING_LIT: {
        enterOuterAlt(_localctx, 3);
        setState(251);
        match(FAMMParser::STRING_LIT);
        break;
      }

      case FAMMParser::BOOL_LIT: {
        enterOuterAlt(_localctx, 4);
        setState(252);
        match(FAMMParser::BOOL_LIT);
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 5);
        setState(253);
        arrayLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLiteralContext ------------------------------------------------------------------

FAMMParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ArrayLiteralContext::LBRACKET() {
  return getToken(FAMMParser::LBRACKET, 0);
}

tree::TerminalNode* FAMMParser::ArrayLiteralContext::RBRACKET() {
  return getToken(FAMMParser::RBRACKET, 0);
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ArrayLiteralContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ArrayLiteralContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> FAMMParser::ArrayLiteralContext::COMMA() {
  return getTokens(FAMMParser::COMMA);
}

tree::TerminalNode* FAMMParser::ArrayLiteralContext::COMMA(size_t i) {
  return getToken(FAMMParser::COMMA, i);
}


size_t FAMMParser::ArrayLiteralContext::getRuleIndex() const {
  return FAMMParser::RuleArrayLiteral;
}

void FAMMParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}

void FAMMParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}

FAMMParser::ArrayLiteralContext* FAMMParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, FAMMParser::RuleArrayLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(FAMMParser::LBRACKET);
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5031919267873792) != 0)) {
      setState(257);
      expression(0);
      setState(262);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(258);
        match(FAMMParser::COMMA);
        setState(259);
        expression(0);
        setState(264);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(267);
    match(FAMMParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool FAMMParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool FAMMParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);
    case 4: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void FAMMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fammParserInitialize();
#else
  ::antlr4::internal::call_once(fammParserOnceFlag, fammParserInitialize);
#endif
}
