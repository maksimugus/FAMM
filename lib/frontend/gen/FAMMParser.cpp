
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
      "block", "declaration", "definition", "functionCall", "expression", 
      "assignmentOp", "multOp", "addOp", "compareOp", "boolOp", "type", 
      "constant"
    },
    std::vector<std::string>{
      "", "';'", "'if'", "'('", "')'", "'else'", "'while'", "'for'", "'->'", 
      "'by'", "'{'", "'}'", "'var'", "':'", "'='", "','", "'!'", "'+='", 
      "'-='", "'*='", "'/='", "'//='", "'%='", "'*'", "'/'", "'//'", "'%'", 
      "'+'", "'-'", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'and'", 
      "'or'", "'int'", "'float'", "'string'", "'bool'", "", "", "", "", 
      "", "'nih'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "IDENTIFIER", "INTEGER_LIT", "FLOAT_LIT", 
      "STRING_LIT", "BOOL_LIT", "NIH_LIT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,165,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,3,1,50,8,1,1,1,1,1,1,2,1,2,1,2,3,2,57,8,2,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,3,3,66,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,5,6,86,8,6,10,6,12,6,89,9,6,1,6,
  	1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,5,
  	9,109,8,9,10,9,12,9,112,9,9,3,9,114,8,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,3,10,128,8,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,146,8,10,10,
  	10,12,10,149,9,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,17,0,1,20,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,0,7,2,0,14,14,17,22,1,0,23,26,1,0,27,28,1,0,29,34,1,0,35,
  	36,1,0,37,40,1,0,42,46,165,0,39,1,0,0,0,2,49,1,0,0,0,4,56,1,0,0,0,6,58,
  	1,0,0,0,8,67,1,0,0,0,10,73,1,0,0,0,12,83,1,0,0,0,14,92,1,0,0,0,16,99,
  	1,0,0,0,18,103,1,0,0,0,20,127,1,0,0,0,22,150,1,0,0,0,24,152,1,0,0,0,26,
  	154,1,0,0,0,28,156,1,0,0,0,30,158,1,0,0,0,32,160,1,0,0,0,34,162,1,0,0,
  	0,36,38,3,2,1,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,
  	0,40,42,1,0,0,0,41,39,1,0,0,0,42,43,5,0,0,1,43,1,1,0,0,0,44,50,3,20,10,
  	0,45,50,3,4,2,0,46,50,3,6,3,0,47,50,3,8,4,0,48,50,3,10,5,0,49,44,1,0,
  	0,0,49,45,1,0,0,0,49,46,1,0,0,0,49,47,1,0,0,0,49,48,1,0,0,0,50,51,1,0,
  	0,0,51,52,5,1,0,0,52,3,1,0,0,0,53,57,3,14,7,0,54,57,3,16,8,0,55,57,3,
  	18,9,0,56,53,1,0,0,0,56,54,1,0,0,0,56,55,1,0,0,0,57,5,1,0,0,0,58,59,5,
  	2,0,0,59,60,5,3,0,0,60,61,3,20,10,0,61,62,5,4,0,0,62,65,3,12,6,0,63,64,
  	5,5,0,0,64,66,3,12,6,0,65,63,1,0,0,0,65,66,1,0,0,0,66,7,1,0,0,0,67,68,
  	5,6,0,0,68,69,5,3,0,0,69,70,3,20,10,0,70,71,5,4,0,0,71,72,3,12,6,0,72,
  	9,1,0,0,0,73,74,5,7,0,0,74,75,5,3,0,0,75,76,3,14,7,0,76,77,5,8,0,0,77,
  	78,3,20,10,0,78,79,5,9,0,0,79,80,3,20,10,0,80,81,5,4,0,0,81,82,3,12,6,
  	0,82,11,1,0,0,0,83,87,5,10,0,0,84,86,3,2,1,0,85,84,1,0,0,0,86,89,1,0,
  	0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,1,0,0,0,90,91,5,11,
  	0,0,91,13,1,0,0,0,92,93,5,12,0,0,93,94,5,41,0,0,94,95,5,13,0,0,95,96,
  	3,32,16,0,96,97,5,14,0,0,97,98,3,20,10,0,98,15,1,0,0,0,99,100,5,41,0,
  	0,100,101,3,22,11,0,101,102,3,20,10,0,102,17,1,0,0,0,103,104,5,41,0,0,
  	104,113,5,3,0,0,105,110,3,20,10,0,106,107,5,15,0,0,107,109,3,20,10,0,
  	108,106,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,114,
  	1,0,0,0,112,110,1,0,0,0,113,105,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,
  	0,115,116,5,4,0,0,116,19,1,0,0,0,117,118,6,10,-1,0,118,128,3,34,17,0,
  	119,128,5,41,0,0,120,128,3,18,9,0,121,122,5,3,0,0,122,123,3,20,10,0,123,
  	124,5,4,0,0,124,128,1,0,0,0,125,126,5,16,0,0,126,128,3,20,10,5,127,117,
  	1,0,0,0,127,119,1,0,0,0,127,120,1,0,0,0,127,121,1,0,0,0,127,125,1,0,0,
  	0,128,147,1,0,0,0,129,130,10,4,0,0,130,131,3,24,12,0,131,132,3,20,10,
  	5,132,146,1,0,0,0,133,134,10,3,0,0,134,135,3,26,13,0,135,136,3,20,10,
  	4,136,146,1,0,0,0,137,138,10,2,0,0,138,139,3,28,14,0,139,140,3,20,10,
  	3,140,146,1,0,0,0,141,142,10,1,0,0,142,143,3,30,15,0,143,144,3,20,10,
  	2,144,146,1,0,0,0,145,129,1,0,0,0,145,133,1,0,0,0,145,137,1,0,0,0,145,
  	141,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,21,1,
  	0,0,0,149,147,1,0,0,0,150,151,7,0,0,0,151,23,1,0,0,0,152,153,7,1,0,0,
  	153,25,1,0,0,0,154,155,7,2,0,0,155,27,1,0,0,0,156,157,7,3,0,0,157,29,
  	1,0,0,0,158,159,7,4,0,0,159,31,1,0,0,0,160,161,7,5,0,0,161,33,1,0,0,0,
  	162,163,7,6,0,0,163,35,1,0,0,0,10,39,49,56,65,87,110,113,127,145,147
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
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 138538465169612) != 0)) {
      setState(36);
      line();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
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
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(44);
      expression(0);
      break;
    }

    case 2: {
      setState(45);
      statement();
      break;
    }

    case 3: {
      setState(46);
      ifBlock();
      break;
    }

    case 4: {
      setState(47);
      whileBlock();
      break;
    }

    case 5: {
      setState(48);
      forBlock();
      break;
    }

    default:
      break;
    }
    setState(51);
    match(FAMMParser::T__0);
   
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
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
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

FAMMParser::ExpressionContext* FAMMParser::IfBlockContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}

std::vector<FAMMParser::BlockContext *> FAMMParser::IfBlockContext::block() {
  return getRuleContexts<FAMMParser::BlockContext>();
}

FAMMParser::BlockContext* FAMMParser::IfBlockContext::block(size_t i) {
  return getRuleContext<FAMMParser::BlockContext>(i);
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
    setState(58);
    match(FAMMParser::T__1);
    setState(59);
    match(FAMMParser::T__2);
    setState(60);
    expression(0);
    setState(61);
    match(FAMMParser::T__3);
    setState(62);
    block();
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::T__4) {
      setState(63);
      match(FAMMParser::T__4);
      setState(64);
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

FAMMParser::ExpressionContext* FAMMParser::WhileBlockContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
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
    setState(67);
    match(FAMMParser::T__5);
    setState(68);
    match(FAMMParser::T__2);
    setState(69);
    expression(0);
    setState(70);
    match(FAMMParser::T__3);
    setState(71);
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

FAMMParser::DeclarationContext* FAMMParser::ForBlockContext::declaration() {
  return getRuleContext<FAMMParser::DeclarationContext>(0);
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ForBlockContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ForBlockContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
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
    setState(73);
    match(FAMMParser::T__6);
    setState(74);
    match(FAMMParser::T__2);
    setState(75);
    declaration();
    setState(76);
    match(FAMMParser::T__7);
    setState(77);
    expression(0);
    setState(78);
    match(FAMMParser::T__8);
    setState(79);
    expression(0);
    setState(80);
    match(FAMMParser::T__3);
    setState(81);
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
    setState(83);
    match(FAMMParser::T__9);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 138538465169612) != 0)) {
      setState(84);
      line();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    match(FAMMParser::T__10);
   
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

tree::TerminalNode* FAMMParser::DeclarationContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

FAMMParser::TypeContext* FAMMParser::DeclarationContext::type() {
  return getRuleContext<FAMMParser::TypeContext>(0);
}

FAMMParser::ExpressionContext* FAMMParser::DeclarationContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(FAMMParser::T__11);
    setState(93);
    match(FAMMParser::IDENTIFIER);
    setState(94);
    match(FAMMParser::T__12);
    setState(95);
    type();
    setState(96);
    match(FAMMParser::T__13);
    setState(97);
    expression(0);
   
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
  enterRule(_localctx, 16, FAMMParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(FAMMParser::IDENTIFIER);
    setState(100);
    assignmentOp();
    setState(101);
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

std::vector<FAMMParser::ExpressionContext *> FAMMParser::FunctionCallContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
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
  enterRule(_localctx, 18, FAMMParser::RuleFunctionCall);
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
    setState(103);
    match(FAMMParser::IDENTIFIER);
    setState(104);
    match(FAMMParser::T__2);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 138538465165320) != 0)) {
      setState(105);
      expression(0);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::T__14) {
        setState(106);
        match(FAMMParser::T__14);
        setState(107);
        expression(0);
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(115);
    match(FAMMParser::T__3);
   
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

FAMMParser::ConstantContext* FAMMParser::ExpressionContext::constant() {
  return getRuleContext<FAMMParser::ConstantContext>(0);
}

tree::TerminalNode* FAMMParser::ExpressionContext::IDENTIFIER() {
  return getToken(FAMMParser::IDENTIFIER, 0);
}

FAMMParser::FunctionCallContext* FAMMParser::ExpressionContext::functionCall() {
  return getRuleContext<FAMMParser::FunctionCallContext>(0);
}

std::vector<FAMMParser::ExpressionContext *> FAMMParser::ExpressionContext::expression() {
  return getRuleContexts<FAMMParser::ExpressionContext>();
}

FAMMParser::ExpressionContext* FAMMParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<FAMMParser::ExpressionContext>(i);
}

FAMMParser::MultOpContext* FAMMParser::ExpressionContext::multOp() {
  return getRuleContext<FAMMParser::MultOpContext>(0);
}

FAMMParser::AddOpContext* FAMMParser::ExpressionContext::addOp() {
  return getRuleContext<FAMMParser::AddOpContext>(0);
}

FAMMParser::CompareOpContext* FAMMParser::ExpressionContext::compareOp() {
  return getRuleContext<FAMMParser::CompareOpContext>(0);
}

FAMMParser::BoolOpContext* FAMMParser::ExpressionContext::boolOp() {
  return getRuleContext<FAMMParser::BoolOpContext>(0);
}


size_t FAMMParser::ExpressionContext::getRuleIndex() const {
  return FAMMParser::RuleExpression;
}

void FAMMParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void FAMMParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FAMMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, FAMMParser::RuleExpression, precedence);

    

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
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(118);
      constant();
      break;
    }

    case 2: {
      setState(119);
      match(FAMMParser::IDENTIFIER);
      break;
    }

    case 3: {
      setState(120);
      functionCall();
      break;
    }

    case 4: {
      setState(121);
      match(FAMMParser::T__2);
      setState(122);
      expression(0);
      setState(123);
      match(FAMMParser::T__3);
      break;
    }

    case 5: {
      setState(125);
      match(FAMMParser::T__15);
      setState(126);
      expression(5);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(147);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(145);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(129);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(130);
          multOp();
          setState(131);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(133);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(134);
          addOp();
          setState(135);
          expression(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(137);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(138);
          compareOp();
          setState(139);
          expression(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(141);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(142);
          boolOp();
          setState(143);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(149);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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
  enterRule(_localctx, 22, FAMMParser::RuleAssignmentOp);
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
    setState(150);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8273920) != 0))) {
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
  enterRule(_localctx, 24, FAMMParser::RuleMultOp);
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
    setState(152);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
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
  enterRule(_localctx, 26, FAMMParser::RuleAddOp);
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
    _la = _input->LA(1);
    if (!(_la == FAMMParser::T__26

    || _la == FAMMParser::T__27)) {
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
  enterRule(_localctx, 28, FAMMParser::RuleCompareOp);
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
    setState(156);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33822867456) != 0))) {
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
  enterRule(_localctx, 30, FAMMParser::RuleBoolOp);
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
    setState(158);
    _la = _input->LA(1);
    if (!(_la == FAMMParser::T__34

    || _la == FAMMParser::T__35)) {
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
  enterRule(_localctx, 32, FAMMParser::RuleType);
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
    setState(160);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2061584302080) != 0))) {
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
  enterRule(_localctx, 34, FAMMParser::RuleConstant);
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
    setState(162);
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
    case 10: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
