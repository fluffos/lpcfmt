
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  lpcLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, BlockComment = 23, LineComment = 24, Whitespace = 25, 
    Newline = 26, L_PREPROCESSOR_COMMAND = 27, L_TREE = 28, L_BREAK = 29, 
    L_CASE = 30, L_CATCH = 31, L_CLASS = 32, L_CONTINUE = 33, L_DEFAULT = 34, 
    L_DO = 35, L_EFUN = 36, L_ELSE = 37, L_BASIC_TYPE = 38, L_FOR = 39, 
    L_FOREACH = 40, L_IF = 41, L_IN = 42, L_INHERIT = 43, L_NEW = 44, L_TYPE_MODIFIER = 45, 
    L_PARSE_COMMAND = 46, L_REF = 47, L_RETURN = 48, L_SSCANF = 49, L_SWITCH = 50, 
    L_TIME_EXPRESSION = 51, L_WHILE = 52, L_STRING = 53, L_NUMBER = 54, 
    L_REAL = 55, L_IDENTIFIER = 56, L_LAND = 57, L_LOR = 58, L_LSH = 59, 
    L_RSH = 60, L_NOT = 61, L_RANGE = 62, L_DOT_DOT_DOT = 63, L_ARRAY = 64, 
    L_PARAMETER = 65, L_ORDER = 66, L_ASSIGN = 67, L_INC = 68, L_DEC = 69, 
    L_EQ = 70, L_NE = 71, L_ARROW = 72, L_COLON_COLON = 73, L_ARRAY_OPEN = 74, 
    L_MAPPING_OPEN = 75, L_ERROR = 76, StringLiteral = 77, DigitSequence = 78
  };

  explicit lpcLexer(antlr4::CharStream *input);
  ~lpcLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

