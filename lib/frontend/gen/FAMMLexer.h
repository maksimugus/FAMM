
// Generated from /work/grammars/FAMM.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  FAMMLexer : public antlr4::Lexer {
public:
  enum {
    VAR = 1, FUNC = 2, IF = 3, ELSE = 4, WHILE = 5, FOR = 6, BY = 7, RETURN = 8, 
    ARROW = 9, NOT = 10, ASSIGNMENT = 11, PLUS_ASSIGNMENT = 12, MINUS_ASSIGNMENT = 13, 
    MULT_ASSIGNMENT = 14, DIV_ASSIGNMENT = 15, FLOOR_DIV_ASSIGNMENT = 16, 
    MOD_ASSIGNMENT = 17, MULT = 18, DIV = 19, FLOOR_DIV = 20, MOD = 21, 
    PLUS = 22, MINUS = 23, EQ = 24, NEQ = 25, GT = 26, LT = 27, GE = 28, 
    LE = 29, AND = 30, OR = 31, LPAR = 32, RPAR = 33, LBRACE = 34, RBRACE = 35, 
    SEMICOLON = 36, COLON = 37, COMMA = 38, LBRACKET = 39, RBRACKET = 40, 
    INT = 41, FLOAT = 42, STRING = 43, BOOL = 44, INTEGER_LIT = 45, FLOAT_LIT = 46, 
    STRING_LIT = 47, BOOL_LIT = 48, NIH_LIT = 49, TRUE = 50, FALSE = 51, 
    IDENTIFIER = 52, WS = 53, COMMENT = 54
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

