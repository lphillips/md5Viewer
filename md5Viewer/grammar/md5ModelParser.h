
// Generated from ..\md3Viewer\grammar\md5Model.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  md5ModelParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, MD5VERSION = 6, NUM_JOINTS = 7, 
    NUM_MESHES = 8, NUM_VERTS = 9, NUM_TRIS = 10, NUM_WEIGHTS = 11, MESH = 12, 
    VERT = 13, JOINTS = 14, SHADER = 15, TRI = 16, WEIGHT = 17, DBL_QUOTE = 18, 
    COMMENT = 19, WHITESPACE = 20, COMMANDLINE = 21, INT = 22, FLOAT = 23, 
    ID = 24, FILE_NAME = 25, FILE_PATH = 26
  };

  enum {
    RuleModel = 0, RuleCl = 1, RuleOption = 2, RuleVersion = 3, RuleNumJoints = 4, 
    RuleNumMeshes = 5, RuleNumeric = 6, RuleJointList = 7, RuleJoint = 8, 
    RuleMesh = 9, RuleShaderPath = 10, RuleVertList = 11, RuleNumVerts = 12, 
    RuleVert = 13, RuleTriList = 14, RuleNumTris = 15, RuleTri = 16, RuleWeightsList = 17, 
    RuleNumWeights = 18, RuleWeight = 19
  };

  md5ModelParser(antlr4::TokenStream *input);
  ~md5ModelParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ModelContext;
  class ClContext;
  class OptionContext;
  class VersionContext;
  class NumJointsContext;
  class NumMeshesContext;
  class NumericContext;
  class JointListContext;
  class JointContext;
  class MeshContext;
  class ShaderPathContext;
  class VertListContext;
  class NumVertsContext;
  class VertContext;
  class TriListContext;
  class NumTrisContext;
  class TriContext;
  class WeightsListContext;
  class NumWeightsContext;
  class WeightContext; 

  class  ModelContext : public antlr4::ParserRuleContext {
  public:
    ModelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VersionContext *version();
    ClContext *cl();
    NumJointsContext *numJoints();
    NumMeshesContext *numMeshes();
    JointListContext *jointList();
    std::vector<MeshContext *> mesh();
    MeshContext* mesh(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModelContext* model();

  class  ClContext : public antlr4::ParserRuleContext {
  public:
    ClContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMANDLINE();
    std::vector<antlr4::tree::TerminalNode *> DBL_QUOTE();
    antlr4::tree::TerminalNode* DBL_QUOTE(size_t i);
    antlr4::tree::TerminalNode *MESH();
    antlr4::tree::TerminalNode *FILE_PATH();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClContext* cl();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE_PATH();
    antlr4::tree::TerminalNode* FILE_PATH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionContext* option();

  class  VersionContext : public antlr4::ParserRuleContext {
  public:
    VersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MD5VERSION();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionContext* version();

  class  NumJointsContext : public antlr4::ParserRuleContext {
  public:
    NumJointsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_JOINTS();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumJointsContext* numJoints();

  class  NumMeshesContext : public antlr4::ParserRuleContext {
  public:
    NumMeshesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_MESHES();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumMeshesContext* numMeshes();

  class  NumericContext : public antlr4::ParserRuleContext {
  public:
    NumericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericContext* numeric();

  class  JointListContext : public antlr4::ParserRuleContext {
  public:
    JointListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOINTS();
    std::vector<JointContext *> joint();
    JointContext* joint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JointListContext* jointList();

  class  JointContext : public antlr4::ParserRuleContext {
  public:
    JointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DBL_QUOTE();
    antlr4::tree::TerminalNode* DBL_QUOTE(size_t i);
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JointContext* joint();

  class  MeshContext : public antlr4::ParserRuleContext {
  public:
    MeshContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MESH();
    ShaderPathContext *shaderPath();
    VertListContext *vertList();
    TriListContext *triList();
    WeightsListContext *weightsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MeshContext* mesh();

  class  ShaderPathContext : public antlr4::ParserRuleContext {
  public:
    ShaderPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHADER();
    std::vector<antlr4::tree::TerminalNode *> DBL_QUOTE();
    antlr4::tree::TerminalNode* DBL_QUOTE(size_t i);
    antlr4::tree::TerminalNode *FILE_PATH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShaderPathContext* shaderPath();

  class  VertListContext : public antlr4::ParserRuleContext {
  public:
    VertListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumVertsContext *numVerts();
    std::vector<VertContext *> vert();
    VertContext* vert(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VertListContext* vertList();

  class  NumVertsContext : public antlr4::ParserRuleContext {
  public:
    NumVertsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_VERTS();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumVertsContext* numVerts();

  class  VertContext : public antlr4::ParserRuleContext {
  public:
    VertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERT();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VertContext* vert();

  class  TriListContext : public antlr4::ParserRuleContext {
  public:
    TriListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumTrisContext *numTris();
    std::vector<TriContext *> tri();
    TriContext* tri(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TriListContext* triList();

  class  NumTrisContext : public antlr4::ParserRuleContext {
  public:
    NumTrisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_TRIS();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumTrisContext* numTris();

  class  TriContext : public antlr4::ParserRuleContext {
  public:
    TriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRI();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TriContext* tri();

  class  WeightsListContext : public antlr4::ParserRuleContext {
  public:
    WeightsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumWeightsContext *numWeights();
    std::vector<WeightContext *> weight();
    WeightContext* weight(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WeightsListContext* weightsList();

  class  NumWeightsContext : public antlr4::ParserRuleContext {
  public:
    NumWeightsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_WEIGHTS();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumWeightsContext* numWeights();

  class  WeightContext : public antlr4::ParserRuleContext {
  public:
    WeightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WEIGHT();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WeightContext* weight();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

