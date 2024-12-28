
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "T__37", "T__38", "T__39", "IDENTIFIER", 
      "INTEGER_LIT", "FLOAT_LIT", "STRING_LIT", "BOOL_LIT", "NIH_LIT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,47,283,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,1,0,1,1,1,1,1,1,1,2,
  	1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,
  	6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,28,
  	1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,
  	1,34,1,34,1,34,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,
  	1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,
  	1,40,1,40,5,40,221,8,40,10,40,12,40,224,9,40,1,41,4,41,227,8,41,11,41,
  	12,41,228,1,42,4,42,232,8,42,11,42,12,42,233,1,42,1,42,5,42,238,8,42,
  	10,42,12,42,241,9,42,1,42,1,42,4,42,245,8,42,11,42,12,42,246,3,42,249,
  	8,42,1,43,1,43,1,43,1,43,5,43,255,8,43,10,43,12,43,258,9,43,1,43,1,43,
  	1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,3,44,271,8,44,1,45,1,45,
  	1,45,1,45,1,46,4,46,278,8,46,11,46,12,46,279,1,46,1,46,0,0,47,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,
  	39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,1,0,5,3,0,65,90,95,
  	95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,4,0,10,10,13,13,34,34,
  	92,92,3,0,9,10,13,13,32,32,292,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,
  	0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,
  	1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,
  	0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,
  	0,93,1,0,0,0,1,95,1,0,0,0,3,97,1,0,0,0,5,100,1,0,0,0,7,102,1,0,0,0,9,
  	104,1,0,0,0,11,109,1,0,0,0,13,115,1,0,0,0,15,119,1,0,0,0,17,122,1,0,0,
  	0,19,125,1,0,0,0,21,127,1,0,0,0,23,129,1,0,0,0,25,133,1,0,0,0,27,135,
  	1,0,0,0,29,137,1,0,0,0,31,139,1,0,0,0,33,141,1,0,0,0,35,144,1,0,0,0,37,
  	147,1,0,0,0,39,150,1,0,0,0,41,153,1,0,0,0,43,157,1,0,0,0,45,160,1,0,0,
  	0,47,162,1,0,0,0,49,164,1,0,0,0,51,167,1,0,0,0,53,169,1,0,0,0,55,171,
  	1,0,0,0,57,173,1,0,0,0,59,176,1,0,0,0,61,179,1,0,0,0,63,181,1,0,0,0,65,
  	183,1,0,0,0,67,186,1,0,0,0,69,189,1,0,0,0,71,193,1,0,0,0,73,196,1,0,0,
  	0,75,200,1,0,0,0,77,206,1,0,0,0,79,213,1,0,0,0,81,218,1,0,0,0,83,226,
  	1,0,0,0,85,248,1,0,0,0,87,250,1,0,0,0,89,270,1,0,0,0,91,272,1,0,0,0,93,
  	277,1,0,0,0,95,96,5,59,0,0,96,2,1,0,0,0,97,98,5,105,0,0,98,99,5,102,0,
  	0,99,4,1,0,0,0,100,101,5,40,0,0,101,6,1,0,0,0,102,103,5,41,0,0,103,8,
  	1,0,0,0,104,105,5,101,0,0,105,106,5,108,0,0,106,107,5,115,0,0,107,108,
  	5,101,0,0,108,10,1,0,0,0,109,110,5,119,0,0,110,111,5,104,0,0,111,112,
  	5,105,0,0,112,113,5,108,0,0,113,114,5,101,0,0,114,12,1,0,0,0,115,116,
  	5,102,0,0,116,117,5,111,0,0,117,118,5,114,0,0,118,14,1,0,0,0,119,120,
  	5,45,0,0,120,121,5,62,0,0,121,16,1,0,0,0,122,123,5,98,0,0,123,124,5,121,
  	0,0,124,18,1,0,0,0,125,126,5,123,0,0,126,20,1,0,0,0,127,128,5,125,0,0,
  	128,22,1,0,0,0,129,130,5,118,0,0,130,131,5,97,0,0,131,132,5,114,0,0,132,
  	24,1,0,0,0,133,134,5,58,0,0,134,26,1,0,0,0,135,136,5,61,0,0,136,28,1,
  	0,0,0,137,138,5,44,0,0,138,30,1,0,0,0,139,140,5,33,0,0,140,32,1,0,0,0,
  	141,142,5,43,0,0,142,143,5,61,0,0,143,34,1,0,0,0,144,145,5,45,0,0,145,
  	146,5,61,0,0,146,36,1,0,0,0,147,148,5,42,0,0,148,149,5,61,0,0,149,38,
  	1,0,0,0,150,151,5,47,0,0,151,152,5,61,0,0,152,40,1,0,0,0,153,154,5,47,
  	0,0,154,155,5,47,0,0,155,156,5,61,0,0,156,42,1,0,0,0,157,158,5,37,0,0,
  	158,159,5,61,0,0,159,44,1,0,0,0,160,161,5,42,0,0,161,46,1,0,0,0,162,163,
  	5,47,0,0,163,48,1,0,0,0,164,165,5,47,0,0,165,166,5,47,0,0,166,50,1,0,
  	0,0,167,168,5,37,0,0,168,52,1,0,0,0,169,170,5,43,0,0,170,54,1,0,0,0,171,
  	172,5,45,0,0,172,56,1,0,0,0,173,174,5,61,0,0,174,175,5,61,0,0,175,58,
  	1,0,0,0,176,177,5,33,0,0,177,178,5,61,0,0,178,60,1,0,0,0,179,180,5,62,
  	0,0,180,62,1,0,0,0,181,182,5,60,0,0,182,64,1,0,0,0,183,184,5,62,0,0,184,
  	185,5,61,0,0,185,66,1,0,0,0,186,187,5,60,0,0,187,188,5,61,0,0,188,68,
  	1,0,0,0,189,190,5,97,0,0,190,191,5,110,0,0,191,192,5,100,0,0,192,70,1,
  	0,0,0,193,194,5,111,0,0,194,195,5,114,0,0,195,72,1,0,0,0,196,197,5,105,
  	0,0,197,198,5,110,0,0,198,199,5,116,0,0,199,74,1,0,0,0,200,201,5,102,
  	0,0,201,202,5,108,0,0,202,203,5,111,0,0,203,204,5,97,0,0,204,205,5,116,
  	0,0,205,76,1,0,0,0,206,207,5,115,0,0,207,208,5,116,0,0,208,209,5,114,
  	0,0,209,210,5,105,0,0,210,211,5,110,0,0,211,212,5,103,0,0,212,78,1,0,
  	0,0,213,214,5,98,0,0,214,215,5,111,0,0,215,216,5,111,0,0,216,217,5,108,
  	0,0,217,80,1,0,0,0,218,222,7,0,0,0,219,221,7,1,0,0,220,219,1,0,0,0,221,
  	224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,82,1,0,0,0,224,222,1,
  	0,0,0,225,227,7,2,0,0,226,225,1,0,0,0,227,228,1,0,0,0,228,226,1,0,0,0,
  	228,229,1,0,0,0,229,84,1,0,0,0,230,232,7,2,0,0,231,230,1,0,0,0,232,233,
  	1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,235,1,0,0,0,235,239,5,46,
  	0,0,236,238,7,2,0,0,237,236,1,0,0,0,238,241,1,0,0,0,239,237,1,0,0,0,239,
  	240,1,0,0,0,240,249,1,0,0,0,241,239,1,0,0,0,242,244,5,46,0,0,243,245,
  	7,2,0,0,244,243,1,0,0,0,245,246,1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,
  	0,247,249,1,0,0,0,248,231,1,0,0,0,248,242,1,0,0,0,249,86,1,0,0,0,250,
  	256,5,34,0,0,251,255,8,3,0,0,252,253,5,92,0,0,253,255,9,0,0,0,254,251,
  	1,0,0,0,254,252,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,
  	0,257,259,1,0,0,0,258,256,1,0,0,0,259,260,5,34,0,0,260,88,1,0,0,0,261,
  	262,5,116,0,0,262,263,5,114,0,0,263,264,5,117,0,0,264,271,5,101,0,0,265,
  	266,5,102,0,0,266,267,5,97,0,0,267,268,5,108,0,0,268,269,5,115,0,0,269,
  	271,5,101,0,0,270,261,1,0,0,0,270,265,1,0,0,0,271,90,1,0,0,0,272,273,
  	5,110,0,0,273,274,5,105,0,0,274,275,5,104,0,0,275,92,1,0,0,0,276,278,
  	7,4,0,0,277,276,1,0,0,0,278,279,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,
  	0,280,281,1,0,0,0,281,282,6,46,0,0,282,94,1,0,0,0,11,0,222,228,233,239,
  	246,248,254,256,270,279,1,6,0,0
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
