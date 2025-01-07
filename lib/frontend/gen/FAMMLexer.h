
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  FAMMLexer : public antlr4::Lexer {
public:
  enum {
    VAR = 1, FUNC = 2, IF = 3, ELSE = 4, WHILE = 5, FOR = 6, BY = 7, ARROW = 8, 
    NOT = 9, ASSIGNMENT = 10, PLUS_ASSIGNMENT = 11, MINUS_ASSIGNMENT = 12, 
    MULT_ASSIGNMENT = 13, DIV_ASSIGNMENT = 14, FLOOR_DIV_ASSIGNMENT = 15, 
    MOD_ASSIGNMENT = 16, MULT = 17, DIV = 18, FLOOR_DIV = 19, MOD = 20, 
    PLUS = 21, MINUS = 22, EQ = 23, NEQ = 24, GT = 25, LT = 26, GE = 27, 
    LE = 28, AND = 29, OR = 30, LPAR = 31, RPAR = 32, LBRACE = 33, RBRACE = 34, 
    SEMICOLON = 35, COLON = 36, COMMA = 37, LBRACKET = 38, RBRACKET = 39, 
    INT = 40, FLOAT = 41, STRING = 42, BOOL = 43, INTEGER_LIT = 44, FLOAT_LIT = 45, 
    STRING_LIT = 46, BOOL_LIT = 47, NIH_LIT = 48, TRUE = 49, FALSE = 50, 
    IDENTIFIER = 51, WS = 52, COMMENT = 53
  };

  explicit FAMMLexer(antlr4::CharStream *input);

  ~FAMMLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

