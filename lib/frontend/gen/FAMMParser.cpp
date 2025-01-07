
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
      "boolOp", "type", "arrayType", "baseType", "constant", "arrayLiteral"
    },
    std::vector<std::string>{
      "", "'var'", "'func'", "'if'", "'else'", "'while'", "'for'", "'by'", 
      "'->'", "'!'", "'='", "'+='", "'-='", "'*='", "'/='", "'//='", "'%='", 
      "'*'", "'/'", "'//'", "'%'", "'+'", "'-'", "'=='", "'!='", "'>'", 
      "'<'", "'>='", "'<='", "'and'", "'or'", "'('", "')'", "'{'", "'}'", 
      "';'", "':'", "','", "'['", "']'", "'int'", "'float'", "'string'", 
      "'bool'", "", "", "", "", "'nih'", "'true'", "'false'"
    },
    std::vector<std::string>{
      "", "VAR", "FUNC", "IF", "ELSE", "WHILE", "FOR", "BY", "ARROW", "NOT", 
      "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "MULT_ASSIGNMENT", 
      "DIV_ASSIGNMENT", "FLOOR_DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "MULT", 
      "DIV", "FLOOR_DIV", "MOD", "PLUS", "MINUS", "EQ", "NEQ", "GT", "LT", 
      "GE", "LE", "AND", "OR", "LPAR", "RPAR", "LBRACE", "RBRACE", "SEMICOLON", 
      "COLON", "COMMA", "LBRACKET", "RBRACKET", "INT", "FLOAT", "STRING", 
      "BOOL", "INTEGER_LIT", "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", 
      "TRUE", "FALSE", "IDENTIFIER", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,53,255,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,5,0,54,8,0,10,0,12,0,57,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,67,8,1,1,1,1,1,1,2,1,2,1,2,3,
  	2,74,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,83,8,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,5,6,103,8,6,10,6,12,
  	6,106,9,6,1,6,1,6,1,7,1,7,3,7,112,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,
  	1,9,1,9,1,9,5,9,125,8,9,10,9,12,9,128,9,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,5,11,142,8,11,10,11,12,11,145,9,11,3,11,
  	147,8,11,1,11,1,11,1,12,1,12,1,12,1,12,3,12,155,8,12,1,12,1,12,1,12,1,
  	12,1,12,1,13,1,13,1,13,5,13,165,8,13,10,13,12,13,168,9,13,1,14,1,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,
  	15,186,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,209,8,15,10,15,12,
  	15,212,9,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,
  	21,3,21,226,8,21,1,22,1,22,1,22,1,22,1,23,1,23,1,24,1,24,1,24,1,24,1,
  	24,1,24,3,24,240,8,24,1,25,1,25,1,25,1,25,5,25,246,8,25,10,25,12,25,249,
  	9,25,3,25,251,8,25,1,25,1,25,1,25,0,1,30,26,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,6,1,0,10,16,1,0,17,
  	20,1,0,21,22,1,0,23,28,1,0,29,30,1,0,40,43,262,0,55,1,0,0,0,2,66,1,0,
  	0,0,4,73,1,0,0,0,6,75,1,0,0,0,8,84,1,0,0,0,10,90,1,0,0,0,12,100,1,0,0,
  	0,14,111,1,0,0,0,16,113,1,0,0,0,18,120,1,0,0,0,20,132,1,0,0,0,22,136,
  	1,0,0,0,24,150,1,0,0,0,26,161,1,0,0,0,28,169,1,0,0,0,30,185,1,0,0,0,32,
  	213,1,0,0,0,34,215,1,0,0,0,36,217,1,0,0,0,38,219,1,0,0,0,40,221,1,0,0,
  	0,42,225,1,0,0,0,44,227,1,0,0,0,46,231,1,0,0,0,48,239,1,0,0,0,50,241,
  	1,0,0,0,52,54,3,2,1,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,
  	1,0,0,0,56,58,1,0,0,0,57,55,1,0,0,0,58,59,5,0,0,1,59,1,1,0,0,0,60,67,
  	3,30,15,0,61,67,3,4,2,0,62,67,3,6,3,0,63,67,3,8,4,0,64,67,3,10,5,0,65,
  	67,3,24,12,0,66,60,1,0,0,0,66,61,1,0,0,0,66,62,1,0,0,0,66,63,1,0,0,0,
  	66,64,1,0,0,0,66,65,1,0,0,0,67,68,1,0,0,0,68,69,5,35,0,0,69,3,1,0,0,0,
  	70,74,3,14,7,0,71,74,3,20,10,0,72,74,3,22,11,0,73,70,1,0,0,0,73,71,1,
  	0,0,0,73,72,1,0,0,0,74,5,1,0,0,0,75,76,5,3,0,0,76,77,5,31,0,0,77,78,3,
  	30,15,0,78,79,5,32,0,0,79,82,3,12,6,0,80,81,5,4,0,0,81,83,3,12,6,0,82,
  	80,1,0,0,0,82,83,1,0,0,0,83,7,1,0,0,0,84,85,5,5,0,0,85,86,5,31,0,0,86,
  	87,3,30,15,0,87,88,5,32,0,0,88,89,3,12,6,0,89,9,1,0,0,0,90,91,5,6,0,0,
  	91,92,5,31,0,0,92,93,3,16,8,0,93,94,5,8,0,0,94,95,3,30,15,0,95,96,5,7,
  	0,0,96,97,3,30,15,0,97,98,5,32,0,0,98,99,3,12,6,0,99,11,1,0,0,0,100,104,
  	5,33,0,0,101,103,3,2,1,0,102,101,1,0,0,0,103,106,1,0,0,0,104,102,1,0,
  	0,0,104,105,1,0,0,0,105,107,1,0,0,0,106,104,1,0,0,0,107,108,5,34,0,0,
  	108,13,1,0,0,0,109,112,3,18,9,0,110,112,3,16,8,0,111,109,1,0,0,0,111,
  	110,1,0,0,0,112,15,1,0,0,0,113,114,5,1,0,0,114,115,5,51,0,0,115,116,5,
  	36,0,0,116,117,3,42,21,0,117,118,5,10,0,0,118,119,3,30,15,0,119,17,1,
  	0,0,0,120,121,5,1,0,0,121,126,5,51,0,0,122,123,5,37,0,0,123,125,5,51,
  	0,0,124,122,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,
  	129,1,0,0,0,128,126,1,0,0,0,129,130,5,36,0,0,130,131,3,42,21,0,131,19,
  	1,0,0,0,132,133,5,51,0,0,133,134,3,32,16,0,134,135,3,30,15,0,135,21,1,
  	0,0,0,136,137,5,51,0,0,137,146,5,31,0,0,138,143,3,30,15,0,139,140,5,37,
  	0,0,140,142,3,30,15,0,141,139,1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,
  	143,144,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,146,138,1,0,0,0,146,147,
  	1,0,0,0,147,148,1,0,0,0,148,149,5,32,0,0,149,23,1,0,0,0,150,151,5,2,0,
  	0,151,152,5,51,0,0,152,154,5,31,0,0,153,155,3,26,13,0,154,153,1,0,0,0,
  	154,155,1,0,0,0,155,156,1,0,0,0,156,157,5,32,0,0,157,158,5,36,0,0,158,
  	159,3,42,21,0,159,160,3,12,6,0,160,25,1,0,0,0,161,166,3,28,14,0,162,163,
  	5,37,0,0,163,165,3,28,14,0,164,162,1,0,0,0,165,168,1,0,0,0,166,164,1,
  	0,0,0,166,167,1,0,0,0,167,27,1,0,0,0,168,166,1,0,0,0,169,170,5,51,0,0,
  	170,171,5,36,0,0,171,172,3,42,21,0,172,29,1,0,0,0,173,174,6,15,-1,0,174,
  	186,3,48,24,0,175,186,3,22,11,0,176,186,5,51,0,0,177,178,5,31,0,0,178,
  	179,3,30,15,0,179,180,5,32,0,0,180,186,1,0,0,0,181,182,5,9,0,0,182,186,
  	3,30,15,6,183,184,5,22,0,0,184,186,3,30,15,5,185,173,1,0,0,0,185,175,
  	1,0,0,0,185,176,1,0,0,0,185,177,1,0,0,0,185,181,1,0,0,0,185,183,1,0,0,
  	0,186,210,1,0,0,0,187,188,10,4,0,0,188,189,3,34,17,0,189,190,3,30,15,
  	5,190,209,1,0,0,0,191,192,10,3,0,0,192,193,3,36,18,0,193,194,3,30,15,
  	4,194,209,1,0,0,0,195,196,10,2,0,0,196,197,3,38,19,0,197,198,3,30,15,
  	3,198,209,1,0,0,0,199,200,10,1,0,0,200,201,3,40,20,0,201,202,3,30,15,
  	2,202,209,1,0,0,0,203,204,10,8,0,0,204,205,5,38,0,0,205,206,3,30,15,0,
  	206,207,5,39,0,0,207,209,1,0,0,0,208,187,1,0,0,0,208,191,1,0,0,0,208,
  	195,1,0,0,0,208,199,1,0,0,0,208,203,1,0,0,0,209,212,1,0,0,0,210,208,1,
  	0,0,0,210,211,1,0,0,0,211,31,1,0,0,0,212,210,1,0,0,0,213,214,7,0,0,0,
  	214,33,1,0,0,0,215,216,7,1,0,0,216,35,1,0,0,0,217,218,7,2,0,0,218,37,
  	1,0,0,0,219,220,7,3,0,0,220,39,1,0,0,0,221,222,7,4,0,0,222,41,1,0,0,0,
  	223,226,3,46,23,0,224,226,3,44,22,0,225,223,1,0,0,0,225,224,1,0,0,0,226,
  	43,1,0,0,0,227,228,5,38,0,0,228,229,3,42,21,0,229,230,5,39,0,0,230,45,
  	1,0,0,0,231,232,7,5,0,0,232,47,1,0,0,0,233,240,5,44,0,0,234,240,5,45,
  	0,0,235,240,5,46,0,0,236,240,5,47,0,0,237,240,5,48,0,0,238,240,3,50,25,
  	0,239,233,1,0,0,0,239,234,1,0,0,0,239,235,1,0,0,0,239,236,1,0,0,0,239,
  	237,1,0,0,0,239,238,1,0,0,0,240,49,1,0,0,0,241,250,5,38,0,0,242,247,3,
  	30,15,0,243,244,5,37,0,0,244,246,3,30,15,0,245,243,1,0,0,0,246,249,1,
  	0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,
  	250,242,1,0,0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,253,5,39,0,0,253,
  	51,1,0,0,0,18,55,66,73,82,104,111,126,143,146,154,166,185,208,210,225,
  	239,247,250
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2797434610647662) != 0)) {
      setState(52);
      line();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
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
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(60);
      expression(0);
      break;
    }

    case 2: {
      setState(61);
      statement();
      break;
    }

    case 3: {
      setState(62);
      ifBlock();
      break;
    }

    case 4: {
      setState(63);
      whileBlock();
      break;
    }

    case 5: {
      setState(64);
      forBlock();
      break;
    }

    case 6: {
      setState(65);
      functionDefinition();
      break;
    }

    default:
      break;
    }
    setState(68);
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
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
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
    setState(75);
    match(FAMMParser::IF);
    setState(76);
    match(FAMMParser::LPAR);
    setState(77);
    expression(0);
    setState(78);
    match(FAMMParser::RPAR);
    setState(79);
    block();
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::ELSE) {
      setState(80);
      match(FAMMParser::ELSE);
      setState(81);
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
    setState(84);
    match(FAMMParser::WHILE);
    setState(85);
    match(FAMMParser::LPAR);
    setState(86);
    expression(0);
    setState(87);
    match(FAMMParser::RPAR);
    setState(88);
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
    setState(90);
    match(FAMMParser::FOR);
    setState(91);
    match(FAMMParser::LPAR);
    setState(92);
    declarationWithDefinition();
    setState(93);
    match(FAMMParser::ARROW);
    setState(94);
    expression(0);
    setState(95);
    match(FAMMParser::BY);
    setState(96);
    expression(0);
    setState(97);
    match(FAMMParser::RPAR);
    setState(98);
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
    setState(100);
    match(FAMMParser::LBRACE);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2797434610647662) != 0)) {
      setState(101);
      line();
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
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
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(109);
      declarationWithoutDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(110);
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
    setState(113);
    match(FAMMParser::VAR);
    setState(114);
    match(FAMMParser::IDENTIFIER);
    setState(115);
    match(FAMMParser::COLON);
    setState(116);
    type();
    setState(117);
    match(FAMMParser::ASSIGNMENT);
    setState(118);
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
    setState(120);
    match(FAMMParser::VAR);
    setState(121);
    match(FAMMParser::IDENTIFIER);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(122);
      match(FAMMParser::COMMA);
      setState(123);
      match(FAMMParser::IDENTIFIER);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(FAMMParser::COLON);
    setState(130);
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
    setState(132);
    match(FAMMParser::IDENTIFIER);
    setState(133);
    assignmentOp();
    setState(134);
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
    setState(136);
    match(FAMMParser::IDENTIFIER);
    setState(137);
    match(FAMMParser::LPAR);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2797434610647552) != 0)) {
      setState(138);
      expression(0);
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(139);
        match(FAMMParser::COMMA);
        setState(140);
        expression(0);
        setState(145);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(148);
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
    setState(150);
    match(FAMMParser::FUNC);
    setState(151);
    match(FAMMParser::IDENTIFIER);
    setState(152);
    match(FAMMParser::LPAR);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::IDENTIFIER) {
      setState(153);
      parameterList();
    }
    setState(156);
    match(FAMMParser::RPAR);
    setState(157);
    match(FAMMParser::COLON);
    setState(158);
    type();
    setState(159);
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
    setState(161);
    parameter();
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(162);
      match(FAMMParser::COMMA);
      setState(163);
      parameter();
      setState(168);
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
    setState(169);
    match(FAMMParser::IDENTIFIER);
    setState(170);
    match(FAMMParser::COLON);
    setState(171);
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
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstantExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(174);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(175);
      functionCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(176);
      match(FAMMParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(177);
      match(FAMMParser::LPAR);
      setState(178);
      expression(0);
      setState(179);
      match(FAMMParser::RPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(181);
      match(FAMMParser::NOT);
      setState(182);
      expression(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(183);
      match(FAMMParser::MINUS);
      setState(184);
      expression(5);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(210);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(208);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(187);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(188);
          multOp();
          setState(189);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(191);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(192);
          addOp();
          setState(193);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompareExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(195);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(196);
          compareOp();
          setState(197);
          expression(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BoolExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(199);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(200);
          boolOp();
          setState(201);
          expression(2);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArrayAccessExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(203);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(204);
          match(FAMMParser::LBRACKET);
          setState(205);
          expression(0);
          setState(206);
          match(FAMMParser::RBRACKET);
          break;
        }

        default:
          break;
        } 
      }
      setState(212);
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
    setState(213);
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
    setState(215);
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
    setState(217);
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
    setState(219);
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
    setState(221);
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
  enterRule(_localctx, 42, FAMMParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INT:
      case FAMMParser::FLOAT:
      case FAMMParser::STRING:
      case FAMMParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(223);
        baseType();
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(224);
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
  enterRule(_localctx, 44, FAMMParser::RuleArrayType);

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
    match(FAMMParser::LBRACKET);
    setState(228);
    type();
    setState(229);
    match(FAMMParser::RBRACKET);
   
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
  enterRule(_localctx, 46, FAMMParser::RuleBaseType);
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
      ((1ULL << _la) & 16492674416640) != 0))) {
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
  enterRule(_localctx, 48, FAMMParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INTEGER_LIT: {
        enterOuterAlt(_localctx, 1);
        setState(233);
        match(FAMMParser::INTEGER_LIT);
        break;
      }

      case FAMMParser::FLOAT_LIT: {
        enterOuterAlt(_localctx, 2);
        setState(234);
        match(FAMMParser::FLOAT_LIT);
        break;
      }

      case FAMMParser::STRING_LIT: {
        enterOuterAlt(_localctx, 3);
        setState(235);
        match(FAMMParser::STRING_LIT);
        break;
      }

      case FAMMParser::BOOL_LIT: {
        enterOuterAlt(_localctx, 4);
        setState(236);
        match(FAMMParser::BOOL_LIT);
        break;
      }

      case FAMMParser::NIH_LIT: {
        enterOuterAlt(_localctx, 5);
        setState(237);
        match(FAMMParser::NIH_LIT);
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 6);
        setState(238);
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
  enterRule(_localctx, 50, FAMMParser::RuleArrayLiteral);
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
    setState(241);
    match(FAMMParser::LBRACKET);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2797434610647552) != 0)) {
      setState(242);
      expression(0);
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(243);
        match(FAMMParser::COMMA);
        setState(244);
        expression(0);
        setState(249);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(252);
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
    case 15: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
