
// Generated from ..\md3Viewer\grammar\md5Model.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  md5ModelLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, MD5VERSION = 6, NUM_JOINTS = 7, 
    NUM_MESHES = 8, NUM_VERTS = 9, NUM_TRIS = 10, NUM_WEIGHTS = 11, MESH = 12, 
    VERT = 13, JOINTS = 14, SHADER = 15, TRI = 16, WEIGHT = 17, DBL_QUOTE = 18, 
    COMMENT = 19, WHITESPACE = 20, COMMANDLINE = 21, INT = 22, FLOAT = 23, 
    ID = 24, FILE_NAME = 25, FILE_PATH = 26
  };

  md5ModelLexer(antlr4::CharStream *input);
  ~md5ModelLexer();

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

