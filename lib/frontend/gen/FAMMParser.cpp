
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
      "program", "line", "statement", "ifBlock", "whileBlock", "forBlock", 
      "block", "declaration", "declarationWithDefinition", "declarationWithoutDefinition", 
      "definition", "functionCall", "functionDefinition", "parameterList", 
      "parameter", "expression", "assignmentOp", "multOp", "addOp", "compareOp", 
      "boolOp", "type", "constant"
    },
    std::vector<std::string>{
      "", "'var'", "'func'", "'if'", "'else'", "'while'", "'for'", "'by'", 
      "'->'", "'!'", "'='", "'+='", "'-='", "'*='", "'/='", "'//='", "'%='", 
      "'*'", "'/'", "'//'", "'%'", "'+'", "'-'", "'=='", "'!='", "'>'", 
      "'<'", "'>='", "'<='", "'and'", "'or'", "'('", "')'", "'{'", "'}'", 
      "';'", "':'", "','", "'int'", "'float'", "'string'", "'bool'", "", 
      "", "", "", "'nih'", "'true'", "'false'"
    },
    std::vector<std::string>{
      "", "VAR", "FUNC", "IF", "ELSE", "WHILE", "FOR", "BY", "ARROW", "NOT", 
      "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "MULT_ASSIGNMENT", 
      "DIV_ASSIGNMENT", "FLOOR_DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "MULT", 
      "DIV", "FLOOR_DIV", "MOD", "PLUS", "MINUS", "EQ", "NEQ", "GT", "LT", 
      "GE", "LE", "AND", "OR", "LPAR", "RPAR", "LBRACE", "RBRACE", "SEMICOLON", 
      "COLON", "COMMA", "INT", "FLOAT", "STRING", "BOOL", "INTEGER_LIT", 
      "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", "TRUE", "FALSE", 
      "IDENTIFIER", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,51,215,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,61,8,1,1,1,1,1,1,2,1,2,1,2,3,2,68,8,2,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,77,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,6,1,6,5,6,97,8,6,10,6,12,6,100,9,6,1,6,1,6,1,7,1,7,3,
  	7,106,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,5,9,119,8,9,10,
  	9,12,9,122,9,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,
  	11,5,11,136,8,11,10,11,12,11,139,9,11,3,11,141,8,11,1,11,1,11,1,12,1,
  	12,1,12,1,12,3,12,149,8,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,5,
  	13,159,8,13,10,13,12,13,162,9,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,178,8,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,196,8,
  	15,10,15,12,15,199,9,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,21,1,21,1,22,1,22,1,22,0,1,30,23,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,0,7,1,0,10,16,1,0,17,20,1,0,21,22,1,
  	0,23,28,1,0,29,30,1,0,38,41,1,0,42,46,215,0,49,1,0,0,0,2,60,1,0,0,0,4,
  	67,1,0,0,0,6,69,1,0,0,0,8,78,1,0,0,0,10,84,1,0,0,0,12,94,1,0,0,0,14,105,
  	1,0,0,0,16,107,1,0,0,0,18,114,1,0,0,0,20,126,1,0,0,0,22,130,1,0,0,0,24,
  	144,1,0,0,0,26,155,1,0,0,0,28,163,1,0,0,0,30,177,1,0,0,0,32,200,1,0,0,
  	0,34,202,1,0,0,0,36,204,1,0,0,0,38,206,1,0,0,0,40,208,1,0,0,0,42,210,
  	1,0,0,0,44,212,1,0,0,0,46,48,3,2,1,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,
  	1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,53,5,0,0,1,53,1,
  	1,0,0,0,54,61,3,30,15,0,55,61,3,4,2,0,56,61,3,6,3,0,57,61,3,8,4,0,58,
  	61,3,10,5,0,59,61,3,24,12,0,60,54,1,0,0,0,60,55,1,0,0,0,60,56,1,0,0,0,
  	60,57,1,0,0,0,60,58,1,0,0,0,60,59,1,0,0,0,61,62,1,0,0,0,62,63,5,35,0,
  	0,63,3,1,0,0,0,64,68,3,14,7,0,65,68,3,20,10,0,66,68,3,22,11,0,67,64,1,
  	0,0,0,67,65,1,0,0,0,67,66,1,0,0,0,68,5,1,0,0,0,69,70,5,3,0,0,70,71,5,
  	31,0,0,71,72,3,30,15,0,72,73,5,32,0,0,73,76,3,12,6,0,74,75,5,4,0,0,75,
  	77,3,12,6,0,76,74,1,0,0,0,76,77,1,0,0,0,77,7,1,0,0,0,78,79,5,5,0,0,79,
  	80,5,31,0,0,80,81,3,30,15,0,81,82,5,32,0,0,82,83,3,12,6,0,83,9,1,0,0,
  	0,84,85,5,6,0,0,85,86,5,31,0,0,86,87,3,16,8,0,87,88,5,8,0,0,88,89,3,30,
  	15,0,89,90,5,7,0,0,90,91,3,30,15,0,91,92,5,32,0,0,92,93,3,12,6,0,93,11,
  	1,0,0,0,94,98,5,33,0,0,95,97,3,2,1,0,96,95,1,0,0,0,97,100,1,0,0,0,98,
  	96,1,0,0,0,98,99,1,0,0,0,99,101,1,0,0,0,100,98,1,0,0,0,101,102,5,34,0,
  	0,102,13,1,0,0,0,103,106,3,18,9,0,104,106,3,16,8,0,105,103,1,0,0,0,105,
  	104,1,0,0,0,106,15,1,0,0,0,107,108,5,1,0,0,108,109,5,49,0,0,109,110,5,
  	36,0,0,110,111,3,42,21,0,111,112,5,10,0,0,112,113,3,30,15,0,113,17,1,
  	0,0,0,114,115,5,1,0,0,115,120,5,49,0,0,116,117,5,37,0,0,117,119,5,49,
  	0,0,118,116,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,
  	123,1,0,0,0,122,120,1,0,0,0,123,124,5,36,0,0,124,125,3,42,21,0,125,19,
  	1,0,0,0,126,127,5,49,0,0,127,128,3,32,16,0,128,129,3,30,15,0,129,21,1,
  	0,0,0,130,131,5,49,0,0,131,140,5,31,0,0,132,137,3,30,15,0,133,134,5,37,
  	0,0,134,136,3,30,15,0,135,133,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,
  	137,138,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,140,132,1,0,0,0,140,141,
  	1,0,0,0,141,142,1,0,0,0,142,143,5,32,0,0,143,23,1,0,0,0,144,145,5,2,0,
  	0,145,146,5,49,0,0,146,148,5,31,0,0,147,149,3,26,13,0,148,147,1,0,0,0,
  	148,149,1,0,0,0,149,150,1,0,0,0,150,151,5,32,0,0,151,152,5,36,0,0,152,
  	153,3,42,21,0,153,154,3,12,6,0,154,25,1,0,0,0,155,160,3,28,14,0,156,157,
  	5,37,0,0,157,159,3,28,14,0,158,156,1,0,0,0,159,162,1,0,0,0,160,158,1,
  	0,0,0,160,161,1,0,0,0,161,27,1,0,0,0,162,160,1,0,0,0,163,164,5,49,0,0,
  	164,165,5,36,0,0,165,166,3,42,21,0,166,29,1,0,0,0,167,168,6,15,-1,0,168,
  	169,5,9,0,0,169,178,3,30,15,5,170,171,5,31,0,0,171,172,3,30,15,0,172,
  	173,5,32,0,0,173,178,1,0,0,0,174,178,3,44,22,0,175,178,3,22,11,0,176,
  	178,5,49,0,0,177,167,1,0,0,0,177,170,1,0,0,0,177,174,1,0,0,0,177,175,
  	1,0,0,0,177,176,1,0,0,0,178,197,1,0,0,0,179,180,10,9,0,0,180,181,3,40,
  	20,0,181,182,3,30,15,10,182,196,1,0,0,0,183,184,10,8,0,0,184,185,3,38,
  	19,0,185,186,3,30,15,9,186,196,1,0,0,0,187,188,10,7,0,0,188,189,3,36,
  	18,0,189,190,3,30,15,8,190,196,1,0,0,0,191,192,10,6,0,0,192,193,3,34,
  	17,0,193,194,3,30,15,7,194,196,1,0,0,0,195,179,1,0,0,0,195,183,1,0,0,
  	0,195,187,1,0,0,0,195,191,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,
  	198,1,0,0,0,198,31,1,0,0,0,199,197,1,0,0,0,200,201,7,0,0,0,201,33,1,0,
  	0,0,202,203,7,1,0,0,203,35,1,0,0,0,204,205,7,2,0,0,205,37,1,0,0,0,206,
  	207,7,3,0,0,207,39,1,0,0,0,208,209,7,4,0,0,209,41,1,0,0,0,210,211,7,5,
  	0,0,211,43,1,0,0,0,212,213,7,6,0,0,213,45,1,0,0,0,14,49,60,67,76,98,105,
  	120,137,140,148,160,177,195,197
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 699291542749806) != 0)) {
      setState(46);
      line();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
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

tree::TerminalNode* FAMMParser::LineContext::SEMICOLON() {
  return getToken(FAMMParser::SEMICOLON, 0);
}

FAMMParser::ExpressionContext* FAMMParser::LineContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

FAMMParser::StatementContext* FAMMParser::LineContext::statement() {
  return getRuleContext<FAMMParser::StatementContext>(0);
}

FAMMParser::IfBlockContext* FAMMParser::LineContext::ifBlock() {
  return getRuleContext<FAMMParser::IfBlockContext>(0);
}

FAMMParser::WhileBlockContext* FAMMParser::LineContext::whileBlock() {
  return getRuleContext<FAMMParser::WhileBlockContext>(0);
}

FAMMParser::ForBlockContext* FAMMParser::LineContext::forBlock() {
  return getRuleContext<FAMMParser::ForBlockContext>(0);
}

FAMMParser::FunctionDefinitionContext* FAMMParser::LineContext::functionDefinition() {
  return getRuleContext<FAMMParser::FunctionDefinitionContext>(0);
}


size_t FAMMParser::LineContext::getRuleIndex() const {
  return FAMMParser::RuleLine;
}

void FAMMParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void FAMMParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
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
    enterOuterAlt(_localctx, 1);
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(54);
      expression(0);
      break;
    }

    case 2: {
      setState(55);
      statement();
      break;
    }

    case 3: {
      setState(56);
      ifBlock();
      break;
    }

    case 4: {
      setState(57);
      whileBlock();
      break;
    }

    case 5: {
      setState(58);
      forBlock();
      break;
    }

    case 6: {
      setState(59);
      functionDefinition();
      break;
    }

    default:
      break;
    }
    setState(62);
    match(FAMMParser::SEMICOLON);
   
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

FAMMParser::DeclarationContext* FAMMParser::StatementContext::declaration() {
  return getRuleContext<FAMMParser::DeclarationContext>(0);
}

FAMMParser::DefinitionContext* FAMMParser::StatementContext::definition() {
  return getRuleContext<FAMMParser::DefinitionContext>(0);
}

FAMMParser::FunctionCallContext* FAMMParser::StatementContext::functionCall() {
  return getRuleContext<FAMMParser::FunctionCallContext>(0);
}


size_t FAMMParser::StatementContext::getRuleIndex() const {
  return FAMMParser::RuleStatement;
}

void FAMMParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void FAMMParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

FAMMParser::StatementContext* FAMMParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, FAMMParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(64);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(66);
      functionCall();
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

//----------------- IfBlockContext ------------------------------------------------------------------

FAMMParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

std::vector<FAMMParser::BlockContext *> FAMMParser::IfBlockContext::block() {
  return getRuleContexts<FAMMParser::BlockContext>();
}

FAMMParser::BlockContext* FAMMParser::IfBlockContext::block(size_t i) {
  return getRuleContext<FAMMParser::BlockContext>(i);
}

tree::TerminalNode* FAMMParser::IfBlockContext::ELSE() {
  return getToken(FAMMParser::ELSE, 0);
}


size_t FAMMParser::IfBlockContext::getRuleIndex() const {
  return FAMMParser::RuleIfBlock;
}

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

FAMMParser::IfBlockContext* FAMMParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, FAMMParser::RuleIfBlock);
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
    setState(69);
    match(FAMMParser::IF);
    setState(70);
    match(FAMMParser::LPAR);
    setState(71);
    expression(0);
    setState(72);
    match(FAMMParser::RPAR);
    setState(73);
    block();
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::ELSE) {
      setState(74);
      match(FAMMParser::ELSE);
      setState(75);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileBlockContext ------------------------------------------------------------------

FAMMParser::WhileBlockContext::WhileBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

FAMMParser::BlockContext* FAMMParser::WhileBlockContext::block() {
  return getRuleContext<FAMMParser::BlockContext>(0);
}


size_t FAMMParser::WhileBlockContext::getRuleIndex() const {
  return FAMMParser::RuleWhileBlock;
}

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

FAMMParser::WhileBlockContext* FAMMParser::whileBlock() {
  WhileBlockContext *_localctx = _tracker.createInstance<WhileBlockContext>(_ctx, getState());
  enterRule(_localctx, 8, FAMMParser::RuleWhileBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(FAMMParser::WHILE);
    setState(79);
    match(FAMMParser::LPAR);
    setState(80);
    expression(0);
    setState(81);
    match(FAMMParser::RPAR);
    setState(82);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForBlockContext ------------------------------------------------------------------

FAMMParser::ForBlockContext::ForBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

FAMMParser::BlockContext* FAMMParser::ForBlockContext::block() {
  return getRuleContext<FAMMParser::BlockContext>(0);
}


size_t FAMMParser::ForBlockContext::getRuleIndex() const {
  return FAMMParser::RuleForBlock;
}

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

FAMMParser::ForBlockContext* FAMMParser::forBlock() {
  ForBlockContext *_localctx = _tracker.createInstance<ForBlockContext>(_ctx, getState());
  enterRule(_localctx, 10, FAMMParser::RuleForBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(FAMMParser::FOR);
    setState(85);
    match(FAMMParser::LPAR);
    setState(86);
    declarationWithDefinition();
    setState(87);
    match(FAMMParser::ARROW);
    setState(88);
    expression(0);
    setState(89);
    match(FAMMParser::BY);
    setState(90);
    expression(0);
    setState(91);
    match(FAMMParser::RPAR);
    setState(92);
    block();
   
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

tree::TerminalNode* FAMMParser::BlockContext::LBRACE() {
  return getToken(FAMMParser::LBRACE, 0);
}

tree::TerminalNode* FAMMParser::BlockContext::RBRACE() {
  return getToken(FAMMParser::RBRACE, 0);
}

std::vector<FAMMParser::LineContext *> FAMMParser::BlockContext::line() {
  return getRuleContexts<FAMMParser::LineContext>();
}

FAMMParser::LineContext* FAMMParser::BlockContext::line(size_t i) {
  return getRuleContext<FAMMParser::LineContext>(i);
}


size_t FAMMParser::BlockContext::getRuleIndex() const {
  return FAMMParser::RuleBlock;
}

void FAMMParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void FAMMParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

FAMMParser::BlockContext* FAMMParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, FAMMParser::RuleBlock);
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
    setState(94);
    match(FAMMParser::LBRACE);
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 699291542749806) != 0)) {
      setState(95);
      line();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
    match(FAMMParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

FAMMParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FAMMParser::DeclarationWithoutDefinitionContext* FAMMParser::DeclarationContext::declarationWithoutDefinition() {
  return getRuleContext<FAMMParser::DeclarationWithoutDefinitionContext>(0);
}

FAMMParser::DeclarationWithDefinitionContext* FAMMParser::DeclarationContext::declarationWithDefinition() {
  return getRuleContext<FAMMParser::DeclarationWithDefinitionContext>(0);
}


size_t FAMMParser::DeclarationContext::getRuleIndex() const {
  return FAMMParser::RuleDeclaration;
}

void FAMMParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void FAMMParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

FAMMParser::DeclarationContext* FAMMParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, FAMMParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(103);
      declarationWithoutDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      declarationWithDefinition();
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
  enterRule(_localctx, 16, FAMMParser::RuleDeclarationWithDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(FAMMParser::VAR);
    setState(108);
    match(FAMMParser::IDENTIFIER);
    setState(109);
    match(FAMMParser::COLON);
    setState(110);
    type();
    setState(111);
    match(FAMMParser::ASSIGNMENT);
    setState(112);
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
  enterRule(_localctx, 18, FAMMParser::RuleDeclarationWithoutDefinition);
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
    setState(114);
    match(FAMMParser::VAR);
    setState(115);
    match(FAMMParser::IDENTIFIER);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(116);
      match(FAMMParser::COMMA);
      setState(117);
      match(FAMMParser::IDENTIFIER);
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
    match(FAMMParser::COLON);
    setState(124);
    type();
   
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
  enterRule(_localctx, 20, FAMMParser::RuleDefinition);

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
    assignmentOp();
    setState(128);
    expression(0);
   
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
  enterRule(_localctx, 22, FAMMParser::RuleFunctionCall);
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
    match(FAMMParser::IDENTIFIER);
    setState(131);
    match(FAMMParser::LPAR);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 699291542749696) != 0)) {
      setState(132);
      expression(0);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(133);
        match(FAMMParser::COMMA);
        setState(134);
        expression(0);
        setState(139);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(142);
    match(FAMMParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

FAMMParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::FUNC() {
  return getToken(FAMMParser::FUNC, 0);
}

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::LPAR() {
  return getToken(FAMMParser::LPAR, 0);
}

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::RPAR() {
  return getToken(FAMMParser::RPAR, 0);
}

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::COLON() {
  return getToken(FAMMParser::COLON, 0);
}

FAMMParser::TypeContext* FAMMParser::FunctionDefinitionContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

FAMMParser::BlockContext* FAMMParser::FunctionDefinitionContext::block() {
  return getRuleContext<FAMMParser::BlockContext>(0);
}

FAMMParser::ParameterListContext* FAMMParser::FunctionDefinitionContext::parameterList() {
  return getRuleContext<FAMMParser::ParameterListContext>(0);
}


size_t FAMMParser::FunctionDefinitionContext::getRuleIndex() const {
  return FAMMParser::RuleFunctionDefinition;
}

void FAMMParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void FAMMParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

FAMMParser::FunctionDefinitionContext* FAMMParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 24, FAMMParser::RuleFunctionDefinition);
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
    setState(144);
    match(FAMMParser::FUNC);
    setState(145);
    match(FAMMParser::IDENTIFIER);
    setState(146);
    match(FAMMParser::LPAR);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::IDENTIFIER) {
      setState(147);
      parameterList();
    }
    setState(150);
    match(FAMMParser::RPAR);
    setState(151);
    match(FAMMParser::COLON);
    setState(152);
    type();
    setState(153);
    block();
   
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
  enterRule(_localctx, 26, FAMMParser::RuleParameterList);
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
    setState(155);
    parameter();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(156);
      match(FAMMParser::COMMA);
      setState(157);
      parameter();
      setState(162);
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
  enterRule(_localctx, 28, FAMMParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(FAMMParser::IDENTIFIER);
    setState(164);
    match(FAMMParser::COLON);
    setState(165);
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

FAMMParser::ExpressionContext* FAMMParser::expression() {
   return expression(0);
}

FAMMParser::ExpressionContext* FAMMParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FAMMParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  FAMMParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, FAMMParser::RuleExpression, precedence);

    

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
    setState(177);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(168);
      match(FAMMParser::NOT);
      setState(169);
      expression(5);
      break;
    }

    case 2: {
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

    case 3: {
      _localctx = _tracker.createInstance<ConstantExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(174);
      constant();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(175);
      functionCall();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(176);
      match(FAMMParser::IDENTIFIER);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(197);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(195);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BoolExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(179);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(180);
          boolOp();
          setState(181);
          expression(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<CompareExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(183);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(184);
          compareOp();
          setState(185);
          expression(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(187);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(188);
          addOp();
          setState(189);
          expression(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MulDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(191);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(192);
          multOp();
          setState(193);
          expression(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(199);
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

//----------------- AssignmentOpContext ------------------------------------------------------------------

FAMMParser::AssignmentOpContext::AssignmentOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::ASSIGNMENT() {
  return getToken(FAMMParser::ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::PLUS_ASSIGNMENT() {
  return getToken(FAMMParser::PLUS_ASSIGNMENT, 0);
}

tree::TerminalNode* FAMMParser::AssignmentOpContext::MINUS_ASSIGNMENT() {
  return getToken(FAMMParser::MINUS_ASSIGNMENT, 0);
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
  enterRule(_localctx, 32, FAMMParser::RuleAssignmentOp);
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
    setState(200);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 130048) != 0))) {
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
  enterRule(_localctx, 34, FAMMParser::RuleMultOp);
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
    setState(202);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0))) {
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
  enterRule(_localctx, 36, FAMMParser::RuleAddOp);
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
    setState(204);
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
  enterRule(_localctx, 38, FAMMParser::RuleCompareOp);
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
    setState(206);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 528482304) != 0))) {
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
  enterRule(_localctx, 40, FAMMParser::RuleBoolOp);
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
    setState(208);
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

tree::TerminalNode* FAMMParser::TypeContext::INT() {
  return getToken(FAMMParser::INT, 0);
}

tree::TerminalNode* FAMMParser::TypeContext::FLOAT() {
  return getToken(FAMMParser::FLOAT, 0);
}

tree::TerminalNode* FAMMParser::TypeContext::STRING() {
  return getToken(FAMMParser::STRING, 0);
}

tree::TerminalNode* FAMMParser::TypeContext::BOOL() {
  return getToken(FAMMParser::BOOL, 0);
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
  enterRule(_localctx, 42, FAMMParser::RuleType);
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
    setState(210);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4123168604160) != 0))) {
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

tree::TerminalNode* FAMMParser::ConstantContext::NIH_LIT() {
  return getToken(FAMMParser::NIH_LIT, 0);
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
  enterRule(_localctx, 44, FAMMParser::RuleConstant);
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
    setState(212);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 136339441844224) != 0))) {
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

bool FAMMParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool FAMMParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);

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
