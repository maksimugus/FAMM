
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2


#include "FAMMLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct FAMMLexerStaticData final {
  FAMMLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FAMMLexerStaticData(const FAMMLexerStaticData&) = delete;
  FAMMLexerStaticData(FAMMLexerStaticData&&) = delete;
  FAMMLexerStaticData& operator=(const FAMMLexerStaticData&) = delete;
  FAMMLexerStaticData& operator=(FAMMLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fammlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<FAMMLexerStaticData> fammlexerLexerStaticData = nullptr;

void fammlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fammlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(fammlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FAMMLexerStaticData>(
    std::vector<std::string>{
      "VAR", "FUNC", "IF", "ELSE", "WHILE", "FOR", "BY", "ARROW", "NOT", 
      "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "MULT_ASSIGNMENT", 
      "DIV_ASSIGNMENT", "FLOOR_DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "MULT", 
      "DIV", "FLOOR_DIV", "MOD", "PLUS", "MINUS", "EQ", "NEQ", "GT", "LT", 
      "GE", "LE", "AND", "OR", "LPAR", "RPAR", "LBRACE", "RBRACE", "SEMICOLON", 
      "COLON", "COMMA", "INT", "FLOAT", "STRING", "BOOL", "INTEGER_LIT", 
      "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", "TRUE", "FALSE", 
      "IDENTIFIER", "WS", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,51,309,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,
  	1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,
  	1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,
  	1,35,1,35,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,41,4,41,
  	233,8,41,11,41,12,41,234,1,42,4,42,238,8,42,11,42,12,42,239,1,42,1,42,
  	5,42,244,8,42,10,42,12,42,247,9,42,1,42,1,42,4,42,251,8,42,11,42,12,42,
  	252,3,42,255,8,42,1,43,1,43,1,43,1,43,5,43,261,8,43,10,43,12,43,264,9,
  	43,1,43,1,43,1,44,1,44,3,44,270,8,44,1,45,1,45,1,45,1,45,1,46,1,46,1,
  	46,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,47,1,48,1,48,5,48,289,8,48,10,
  	48,12,48,292,9,48,1,49,4,49,295,8,49,11,49,12,49,296,1,49,1,49,1,50,1,
  	50,5,50,303,8,50,10,50,12,50,306,9,50,1,50,1,50,0,0,51,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
  	57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,
  	40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,51,
  	1,0,6,1,0,48,57,4,0,10,10,13,13,34,34,92,92,3,0,65,90,95,95,97,122,4,
  	0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,2,0,10,10,13,13,319,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,
  	0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,
  	87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,
  	0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,1,103,1,0,0,0,3,107,1,0,0,0,5,112,1,
  	0,0,0,7,115,1,0,0,0,9,120,1,0,0,0,11,126,1,0,0,0,13,130,1,0,0,0,15,133,
  	1,0,0,0,17,136,1,0,0,0,19,138,1,0,0,0,21,140,1,0,0,0,23,143,1,0,0,0,25,
  	146,1,0,0,0,27,149,1,0,0,0,29,152,1,0,0,0,31,156,1,0,0,0,33,159,1,0,0,
  	0,35,161,1,0,0,0,37,163,1,0,0,0,39,166,1,0,0,0,41,168,1,0,0,0,43,170,
  	1,0,0,0,45,172,1,0,0,0,47,175,1,0,0,0,49,178,1,0,0,0,51,180,1,0,0,0,53,
  	182,1,0,0,0,55,185,1,0,0,0,57,188,1,0,0,0,59,192,1,0,0,0,61,195,1,0,0,
  	0,63,197,1,0,0,0,65,199,1,0,0,0,67,201,1,0,0,0,69,203,1,0,0,0,71,205,
  	1,0,0,0,73,207,1,0,0,0,75,209,1,0,0,0,77,213,1,0,0,0,79,219,1,0,0,0,81,
  	226,1,0,0,0,83,232,1,0,0,0,85,254,1,0,0,0,87,256,1,0,0,0,89,269,1,0,0,
  	0,91,271,1,0,0,0,93,275,1,0,0,0,95,280,1,0,0,0,97,286,1,0,0,0,99,294,
  	1,0,0,0,101,300,1,0,0,0,103,104,5,118,0,0,104,105,5,97,0,0,105,106,5,
  	114,0,0,106,2,1,0,0,0,107,108,5,102,0,0,108,109,5,117,0,0,109,110,5,110,
  	0,0,110,111,5,99,0,0,111,4,1,0,0,0,112,113,5,105,0,0,113,114,5,102,0,
  	0,114,6,1,0,0,0,115,116,5,101,0,0,116,117,5,108,0,0,117,118,5,115,0,0,
  	118,119,5,101,0,0,119,8,1,0,0,0,120,121,5,119,0,0,121,122,5,104,0,0,122,
  	123,5,105,0,0,123,124,5,108,0,0,124,125,5,101,0,0,125,10,1,0,0,0,126,
  	127,5,102,0,0,127,128,5,111,0,0,128,129,5,114,0,0,129,12,1,0,0,0,130,
  	131,5,98,0,0,131,132,5,121,0,0,132,14,1,0,0,0,133,134,5,45,0,0,134,135,
  	5,62,0,0,135,16,1,0,0,0,136,137,5,33,0,0,137,18,1,0,0,0,138,139,5,61,
  	0,0,139,20,1,0,0,0,140,141,5,43,0,0,141,142,5,61,0,0,142,22,1,0,0,0,143,
  	144,5,45,0,0,144,145,5,61,0,0,145,24,1,0,0,0,146,147,5,42,0,0,147,148,
  	5,61,0,0,148,26,1,0,0,0,149,150,5,47,0,0,150,151,5,61,0,0,151,28,1,0,
  	0,0,152,153,5,47,0,0,153,154,5,47,0,0,154,155,5,61,0,0,155,30,1,0,0,0,
  	156,157,5,37,0,0,157,158,5,61,0,0,158,32,1,0,0,0,159,160,5,42,0,0,160,
  	34,1,0,0,0,161,162,5,47,0,0,162,36,1,0,0,0,163,164,5,47,0,0,164,165,5,
  	47,0,0,165,38,1,0,0,0,166,167,5,37,0,0,167,40,1,0,0,0,168,169,5,43,0,
  	0,169,42,1,0,0,0,170,171,5,45,0,0,171,44,1,0,0,0,172,173,5,61,0,0,173,
  	174,5,61,0,0,174,46,1,0,0,0,175,176,5,33,0,0,176,177,5,61,0,0,177,48,
  	1,0,0,0,178,179,5,62,0,0,179,50,1,0,0,0,180,181,5,60,0,0,181,52,1,0,0,
  	0,182,183,5,62,0,0,183,184,5,61,0,0,184,54,1,0,0,0,185,186,5,60,0,0,186,
  	187,5,61,0,0,187,56,1,0,0,0,188,189,5,97,0,0,189,190,5,110,0,0,190,191,
  	5,100,0,0,191,58,1,0,0,0,192,193,5,111,0,0,193,194,5,114,0,0,194,60,1,
  	0,0,0,195,196,5,40,0,0,196,62,1,0,0,0,197,198,5,41,0,0,198,64,1,0,0,0,
  	199,200,5,123,0,0,200,66,1,0,0,0,201,202,5,125,0,0,202,68,1,0,0,0,203,
  	204,5,59,0,0,204,70,1,0,0,0,205,206,5,58,0,0,206,72,1,0,0,0,207,208,5,
  	44,0,0,208,74,1,0,0,0,209,210,5,105,0,0,210,211,5,110,0,0,211,212,5,116,
  	0,0,212,76,1,0,0,0,213,214,5,102,0,0,214,215,5,108,0,0,215,216,5,111,
  	0,0,216,217,5,97,0,0,217,218,5,116,0,0,218,78,1,0,0,0,219,220,5,115,0,
  	0,220,221,5,116,0,0,221,222,5,114,0,0,222,223,5,105,0,0,223,224,5,110,
  	0,0,224,225,5,103,0,0,225,80,1,0,0,0,226,227,5,98,0,0,227,228,5,111,0,
  	0,228,229,5,111,0,0,229,230,5,108,0,0,230,82,1,0,0,0,231,233,7,0,0,0,
  	232,231,1,0,0,0,233,234,1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,84,
  	1,0,0,0,236,238,7,0,0,0,237,236,1,0,0,0,238,239,1,0,0,0,239,237,1,0,0,
  	0,239,240,1,0,0,0,240,241,1,0,0,0,241,245,5,46,0,0,242,244,7,0,0,0,243,
  	242,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,245,246,1,0,0,0,246,255,1,
  	0,0,0,247,245,1,0,0,0,248,250,5,46,0,0,249,251,7,0,0,0,250,249,1,0,0,
  	0,251,252,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,255,1,0,0,0,254,
  	237,1,0,0,0,254,248,1,0,0,0,255,86,1,0,0,0,256,262,5,34,0,0,257,261,8,
  	1,0,0,258,259,5,92,0,0,259,261,9,0,0,0,260,257,1,0,0,0,260,258,1,0,0,
  	0,261,264,1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,265,1,0,0,0,264,
  	262,1,0,0,0,265,266,5,34,0,0,266,88,1,0,0,0,267,270,3,93,46,0,268,270,
  	3,95,47,0,269,267,1,0,0,0,269,268,1,0,0,0,270,90,1,0,0,0,271,272,5,110,
  	0,0,272,273,5,105,0,0,273,274,5,104,0,0,274,92,1,0,0,0,275,276,5,116,
  	0,0,276,277,5,114,0,0,277,278,5,117,0,0,278,279,5,101,0,0,279,94,1,0,
  	0,0,280,281,5,102,0,0,281,282,5,97,0,0,282,283,5,108,0,0,283,284,5,115,
  	0,0,284,285,5,101,0,0,285,96,1,0,0,0,286,290,7,2,0,0,287,289,7,3,0,0,
  	288,287,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,290,291,1,0,0,0,291,98,
  	1,0,0,0,292,290,1,0,0,0,293,295,7,4,0,0,294,293,1,0,0,0,295,296,1,0,0,
  	0,296,294,1,0,0,0,296,297,1,0,0,0,297,298,1,0,0,0,298,299,6,49,0,0,299,
  	100,1,0,0,0,300,304,5,35,0,0,301,303,8,5,0,0,302,301,1,0,0,0,303,306,
  	1,0,0,0,304,302,1,0,0,0,304,305,1,0,0,0,305,307,1,0,0,0,306,304,1,0,0,
  	0,307,308,6,50,0,0,308,102,1,0,0,0,12,0,234,239,245,252,254,260,262,269,
  	290,296,304,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fammlexerLexerStaticData = std::move(staticData);
}

}

FAMMLexer::FAMMLexer(CharStream *input) : Lexer(input) {
  FAMMLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *fammlexerLexerStaticData->atn, fammlexerLexerStaticData->decisionToDFA, fammlexerLexerStaticData->sharedContextCache);
}

FAMMLexer::~FAMMLexer() {
  delete _interpreter;
}

std::string FAMMLexer::getGrammarFileName() const {
  return "FAMM.g4";
}

const std::vector<std::string>& FAMMLexer::getRuleNames() const {
  return fammlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& FAMMLexer::getChannelNames() const {
  return fammlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& FAMMLexer::getModeNames() const {
  return fammlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& FAMMLexer::getVocabulary() const {
  return fammlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FAMMLexer::getSerializedATN() const {
  return fammlexerLexerStaticData->serializedATN;
}

const atn::ATN& FAMMLexer::getATN() const {
  return *fammlexerLexerStaticData->atn;
}




void FAMMLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fammlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(fammlexerLexerOnceFlag, fammlexerLexerInitialize);
#endif
}
