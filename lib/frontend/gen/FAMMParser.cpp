
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
      "parameter", "returnStatement", "expression", "assignmentOp", "multOp", 
      "addOp", "compareOp", "boolOp", "type", "arrayType", "baseType", "constant", 
      "arrayLiteral"
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
  	4,1,54,265,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,5,0,56,8,0,10,
  	0,12,0,59,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,69,8,1,1,1,1,1,1,2,
  	1,2,1,2,1,2,3,2,77,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,86,8,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,5,6,106,
  	8,6,10,6,12,6,109,9,6,1,6,1,6,1,7,1,7,3,7,115,8,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,9,5,9,128,8,9,10,9,12,9,131,9,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,5,11,145,8,11,10,11,12,11,148,
  	9,11,3,11,150,8,11,1,11,1,11,1,12,1,12,1,12,1,12,3,12,158,8,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,5,13,169,8,13,10,13,12,13,172,9,
  	13,1,14,1,14,1,14,1,14,1,15,1,15,3,15,180,8,15,1,16,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,194,8,16,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,5,16,217,8,16,10,16,12,16,220,9,16,1,17,1,17,1,18,1,
  	18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,3,22,234,8,22,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,250,8,
  	25,1,26,1,26,1,26,1,26,5,26,256,8,26,10,26,12,26,259,9,26,3,26,261,8,
  	26,1,26,1,26,1,26,0,1,32,27,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,0,6,1,0,11,17,1,0,18,21,1,0,22,23,1,
  	0,24,29,1,0,30,31,1,0,41,44,273,0,57,1,0,0,0,2,68,1,0,0,0,4,76,1,0,0,
  	0,6,78,1,0,0,0,8,87,1,0,0,0,10,93,1,0,0,0,12,103,1,0,0,0,14,114,1,0,0,
  	0,16,116,1,0,0,0,18,123,1,0,0,0,20,135,1,0,0,0,22,139,1,0,0,0,24,153,
  	1,0,0,0,26,165,1,0,0,0,28,173,1,0,0,0,30,177,1,0,0,0,32,193,1,0,0,0,34,
  	221,1,0,0,0,36,223,1,0,0,0,38,225,1,0,0,0,40,227,1,0,0,0,42,229,1,0,0,
  	0,44,233,1,0,0,0,46,235,1,0,0,0,48,241,1,0,0,0,50,249,1,0,0,0,52,251,
  	1,0,0,0,54,56,3,2,1,0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,
  	1,0,0,0,58,60,1,0,0,0,59,57,1,0,0,0,60,61,5,0,0,1,61,1,1,0,0,0,62,69,
  	3,32,16,0,63,69,3,4,2,0,64,69,3,6,3,0,65,69,3,8,4,0,66,69,3,10,5,0,67,
  	69,3,24,12,0,68,62,1,0,0,0,68,63,1,0,0,0,68,64,1,0,0,0,68,65,1,0,0,0,
  	68,66,1,0,0,0,68,67,1,0,0,0,69,70,1,0,0,0,70,71,5,36,0,0,71,3,1,0,0,0,
  	72,77,3,14,7,0,73,77,3,20,10,0,74,77,3,22,11,0,75,77,3,30,15,0,76,72,
  	1,0,0,0,76,73,1,0,0,0,76,74,1,0,0,0,76,75,1,0,0,0,77,5,1,0,0,0,78,79,
  	5,3,0,0,79,80,5,32,0,0,80,81,3,32,16,0,81,82,5,33,0,0,82,85,3,12,6,0,
  	83,84,5,4,0,0,84,86,3,12,6,0,85,83,1,0,0,0,85,86,1,0,0,0,86,7,1,0,0,0,
  	87,88,5,5,0,0,88,89,5,32,0,0,89,90,3,32,16,0,90,91,5,33,0,0,91,92,3,12,
  	6,0,92,9,1,0,0,0,93,94,5,6,0,0,94,95,5,32,0,0,95,96,3,16,8,0,96,97,5,
  	9,0,0,97,98,3,32,16,0,98,99,5,7,0,0,99,100,3,32,16,0,100,101,5,33,0,0,
  	101,102,3,12,6,0,102,11,1,0,0,0,103,107,5,34,0,0,104,106,3,2,1,0,105,
  	104,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,
  	0,0,0,109,107,1,0,0,0,110,111,5,35,0,0,111,13,1,0,0,0,112,115,3,18,9,
  	0,113,115,3,16,8,0,114,112,1,0,0,0,114,113,1,0,0,0,115,15,1,0,0,0,116,
  	117,5,1,0,0,117,118,5,52,0,0,118,119,5,37,0,0,119,120,3,44,22,0,120,121,
  	5,11,0,0,121,122,3,32,16,0,122,17,1,0,0,0,123,124,5,1,0,0,124,129,5,52,
  	0,0,125,126,5,38,0,0,126,128,5,52,0,0,127,125,1,0,0,0,128,131,1,0,0,0,
  	129,127,1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,
  	5,37,0,0,133,134,3,44,22,0,134,19,1,0,0,0,135,136,5,52,0,0,136,137,3,
  	34,17,0,137,138,3,32,16,0,138,21,1,0,0,0,139,140,5,52,0,0,140,149,5,32,
  	0,0,141,146,3,32,16,0,142,143,5,38,0,0,143,145,3,32,16,0,144,142,1,0,
  	0,0,145,148,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,150,1,0,0,0,148,
  	146,1,0,0,0,149,141,1,0,0,0,149,150,1,0,0,0,150,151,1,0,0,0,151,152,5,
  	33,0,0,152,23,1,0,0,0,153,154,5,2,0,0,154,155,5,52,0,0,155,157,5,32,0,
  	0,156,158,3,26,13,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,0,0,0,159,
  	160,5,33,0,0,160,161,5,37,0,0,161,162,3,44,22,0,162,163,5,11,0,0,163,
  	164,3,12,6,0,164,25,1,0,0,0,165,170,3,28,14,0,166,167,5,38,0,0,167,169,
  	3,28,14,0,168,166,1,0,0,0,169,172,1,0,0,0,170,168,1,0,0,0,170,171,1,0,
  	0,0,171,27,1,0,0,0,172,170,1,0,0,0,173,174,5,52,0,0,174,175,5,37,0,0,
  	175,176,3,44,22,0,176,29,1,0,0,0,177,179,5,8,0,0,178,180,3,32,16,0,179,
  	178,1,0,0,0,179,180,1,0,0,0,180,31,1,0,0,0,181,182,6,16,-1,0,182,194,
  	3,50,25,0,183,194,3,22,11,0,184,194,5,52,0,0,185,186,5,32,0,0,186,187,
  	3,32,16,0,187,188,5,33,0,0,188,194,1,0,0,0,189,190,5,10,0,0,190,194,3,
  	32,16,6,191,192,5,23,0,0,192,194,3,32,16,5,193,181,1,0,0,0,193,183,1,
  	0,0,0,193,184,1,0,0,0,193,185,1,0,0,0,193,189,1,0,0,0,193,191,1,0,0,0,
  	194,218,1,0,0,0,195,196,10,4,0,0,196,197,3,36,18,0,197,198,3,32,16,5,
  	198,217,1,0,0,0,199,200,10,3,0,0,200,201,3,38,19,0,201,202,3,32,16,4,
  	202,217,1,0,0,0,203,204,10,2,0,0,204,205,3,40,20,0,205,206,3,32,16,3,
  	206,217,1,0,0,0,207,208,10,1,0,0,208,209,3,42,21,0,209,210,3,32,16,2,
  	210,217,1,0,0,0,211,212,10,8,0,0,212,213,5,39,0,0,213,214,3,32,16,0,214,
  	215,5,40,0,0,215,217,1,0,0,0,216,195,1,0,0,0,216,199,1,0,0,0,216,203,
  	1,0,0,0,216,207,1,0,0,0,216,211,1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,
  	0,218,219,1,0,0,0,219,33,1,0,0,0,220,218,1,0,0,0,221,222,7,0,0,0,222,
  	35,1,0,0,0,223,224,7,1,0,0,224,37,1,0,0,0,225,226,7,2,0,0,226,39,1,0,
  	0,0,227,228,7,3,0,0,228,41,1,0,0,0,229,230,7,4,0,0,230,43,1,0,0,0,231,
  	234,3,48,24,0,232,234,3,46,23,0,233,231,1,0,0,0,233,232,1,0,0,0,234,45,
  	1,0,0,0,235,236,5,39,0,0,236,237,3,44,22,0,237,238,5,38,0,0,238,239,5,
  	45,0,0,239,240,5,40,0,0,240,47,1,0,0,0,241,242,7,5,0,0,242,49,1,0,0,0,
  	243,250,5,45,0,0,244,250,5,46,0,0,245,250,5,47,0,0,246,250,5,48,0,0,247,
  	250,5,49,0,0,248,250,3,52,26,0,249,243,1,0,0,0,249,244,1,0,0,0,249,245,
  	1,0,0,0,249,246,1,0,0,0,249,247,1,0,0,0,249,248,1,0,0,0,250,51,1,0,0,
  	0,251,260,5,39,0,0,252,257,3,32,16,0,253,254,5,38,0,0,254,256,3,32,16,
  	0,255,253,1,0,0,0,256,259,1,0,0,0,257,255,1,0,0,0,257,258,1,0,0,0,258,
  	261,1,0,0,0,259,257,1,0,0,0,260,252,1,0,0,0,260,261,1,0,0,0,261,262,1,
  	0,0,0,262,263,5,40,0,0,263,53,1,0,0,0,19,57,68,76,85,107,114,129,146,
  	149,157,170,179,193,216,218,233,249,257,260
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
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5594869221295470) != 0)) {
      setState(54);
      line();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
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
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(62);
      expression(0);
      break;
    }

    case 2: {
      setState(63);
      statement();
      break;
    }

    case 3: {
      setState(64);
      ifBlock();
      break;
    }

    case 4: {
      setState(65);
      whileBlock();
      break;
    }

    case 5: {
      setState(66);
      forBlock();
      break;
    }

    case 6: {
      setState(67);
      functionDefinition();
      break;
    }

    default:
      break;
    }
    setState(70);
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

FAMMParser::ReturnStatementContext* FAMMParser::StatementContext::returnStatement() {
  return getRuleContext<FAMMParser::ReturnStatementContext>(0);
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
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(75);
      returnStatement();
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
    setState(78);
    match(FAMMParser::IF);
    setState(79);
    match(FAMMParser::LPAR);
    setState(80);
    expression(0);
    setState(81);
    match(FAMMParser::RPAR);
    setState(82);
    block();
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::ELSE) {
      setState(83);
      match(FAMMParser::ELSE);
      setState(84);
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
    setState(87);
    match(FAMMParser::WHILE);
    setState(88);
    match(FAMMParser::LPAR);
    setState(89);
    expression(0);
    setState(90);
    match(FAMMParser::RPAR);
    setState(91);
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
    setState(93);
    match(FAMMParser::FOR);
    setState(94);
    match(FAMMParser::LPAR);
    setState(95);
    declarationWithDefinition();
    setState(96);
    match(FAMMParser::ARROW);
    setState(97);
    expression(0);
    setState(98);
    match(FAMMParser::BY);
    setState(99);
    expression(0);
    setState(100);
    match(FAMMParser::RPAR);
    setState(101);
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
    setState(103);
    match(FAMMParser::LBRACE);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5594869221295470) != 0)) {
      setState(104);
      line();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
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
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      declarationWithoutDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
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
    setState(116);
    match(FAMMParser::VAR);
    setState(117);
    match(FAMMParser::IDENTIFIER);
    setState(118);
    match(FAMMParser::COLON);
    setState(119);
    type();
    setState(120);
    match(FAMMParser::ASSIGNMENT);
    setState(121);
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
    setState(123);
    match(FAMMParser::VAR);
    setState(124);
    match(FAMMParser::IDENTIFIER);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(125);
      match(FAMMParser::COMMA);
      setState(126);
      match(FAMMParser::IDENTIFIER);
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(FAMMParser::COLON);
    setState(133);
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
    setState(135);
    match(FAMMParser::IDENTIFIER);
    setState(136);
    assignmentOp();
    setState(137);
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
    setState(139);
    match(FAMMParser::IDENTIFIER);
    setState(140);
    match(FAMMParser::LPAR);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5594869221295104) != 0)) {
      setState(141);
      expression(0);
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(142);
        match(FAMMParser::COMMA);
        setState(143);
        expression(0);
        setState(148);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(151);
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

tree::TerminalNode* FAMMParser::FunctionDefinitionContext::ASSIGNMENT() {
  return getToken(FAMMParser::ASSIGNMENT, 0);
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
    setState(153);
    match(FAMMParser::FUNC);
    setState(154);
    match(FAMMParser::IDENTIFIER);
    setState(155);
    match(FAMMParser::LPAR);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FAMMParser::IDENTIFIER) {
      setState(156);
      parameterList();
    }
    setState(159);
    match(FAMMParser::RPAR);
    setState(160);
    match(FAMMParser::COLON);
    setState(161);
    type();
    setState(162);
    match(FAMMParser::ASSIGNMENT);
    setState(163);
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
    setState(165);
    parameter();
    setState(170);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FAMMParser::COMMA) {
      setState(166);
      match(FAMMParser::COMMA);
      setState(167);
      parameter();
      setState(172);
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
    setState(173);
    match(FAMMParser::IDENTIFIER);
    setState(174);
    match(FAMMParser::COLON);
    setState(175);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

FAMMParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FAMMParser::ReturnStatementContext::RETURN() {
  return getToken(FAMMParser::RETURN, 0);
}

FAMMParser::ExpressionContext* FAMMParser::ReturnStatementContext::expression() {
  return getRuleContext<FAMMParser::ExpressionContext>(0);
}


size_t FAMMParser::ReturnStatementContext::getRuleIndex() const {
  return FAMMParser::RuleReturnStatement;
}

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

FAMMParser::ReturnStatementContext* FAMMParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, FAMMParser::RuleReturnStatement);
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
    setState(177);
    match(FAMMParser::RETURN);
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5594869221295104) != 0)) {
      setState(178);
      expression(0);
    }
   
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
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, FAMMParser::RuleExpression, precedence);

    

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
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstantExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(182);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(183);
      functionCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      match(FAMMParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      match(FAMMParser::LPAR);
      setState(186);
      expression(0);
      setState(187);
      match(FAMMParser::RPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(189);
      match(FAMMParser::NOT);
      setState(190);
      expression(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      match(FAMMParser::MINUS);
      setState(192);
      expression(5);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(218);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(216);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(195);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(196);
          multOp();
          setState(197);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(199);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(200);
          addOp();
          setState(201);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompareExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(203);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(204);
          compareOp();
          setState(205);
          expression(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BoolExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(207);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(208);
          boolOp();
          setState(209);
          expression(2);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArrayAccessExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(211);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(212);
          match(FAMMParser::LBRACKET);
          setState(213);
          expression(0);
          setState(214);
          match(FAMMParser::RBRACKET);
          break;
        }

        default:
          break;
        } 
      }
      setState(220);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  enterRule(_localctx, 34, FAMMParser::RuleAssignmentOp);
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
  enterRule(_localctx, 36, FAMMParser::RuleMultOp);
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
    setState(223);
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
  enterRule(_localctx, 38, FAMMParser::RuleAddOp);
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
  enterRule(_localctx, 40, FAMMParser::RuleCompareOp);
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
  enterRule(_localctx, 42, FAMMParser::RuleBoolOp);
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
  enterRule(_localctx, 44, FAMMParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INT:
      case FAMMParser::FLOAT:
      case FAMMParser::STRING:
      case FAMMParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(231);
        baseType();
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(232);
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

tree::TerminalNode* FAMMParser::ArrayTypeContext::INTEGER_LIT() {
  return getToken(FAMMParser::INTEGER_LIT, 0);
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
  enterRule(_localctx, 46, FAMMParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(FAMMParser::LBRACKET);
    setState(236);
    type();
    setState(237);
    match(FAMMParser::COMMA);
    setState(238);
    match(FAMMParser::INTEGER_LIT);
    setState(239);
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
  enterRule(_localctx, 48, FAMMParser::RuleBaseType);
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
  enterRule(_localctx, 50, FAMMParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FAMMParser::INTEGER_LIT: {
        enterOuterAlt(_localctx, 1);
        setState(243);
        match(FAMMParser::INTEGER_LIT);
        break;
      }

      case FAMMParser::FLOAT_LIT: {
        enterOuterAlt(_localctx, 2);
        setState(244);
        match(FAMMParser::FLOAT_LIT);
        break;
      }

      case FAMMParser::STRING_LIT: {
        enterOuterAlt(_localctx, 3);
        setState(245);
        match(FAMMParser::STRING_LIT);
        break;
      }

      case FAMMParser::BOOL_LIT: {
        enterOuterAlt(_localctx, 4);
        setState(246);
        match(FAMMParser::BOOL_LIT);
        break;
      }

      case FAMMParser::NIH_LIT: {
        enterOuterAlt(_localctx, 5);
        setState(247);
        match(FAMMParser::NIH_LIT);
        break;
      }

      case FAMMParser::LBRACKET: {
        enterOuterAlt(_localctx, 6);
        setState(248);
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
  enterRule(_localctx, 52, FAMMParser::RuleArrayLiteral);
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
    setState(251);
    match(FAMMParser::LBRACKET);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5594869221295104) != 0)) {
      setState(252);
      expression(0);
      setState(257);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FAMMParser::COMMA) {
        setState(253);
        match(FAMMParser::COMMA);
        setState(254);
        expression(0);
        setState(259);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(262);
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
    case 16: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
