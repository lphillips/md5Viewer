
// Generated from ..\md3Viewer\grammar\md5Model.g4 by ANTLR 4.7.2


#include "md5ModelListener.h"

#include "md5ModelParser.h"


using namespace antlrcpp;
using namespace antlr4;

md5ModelParser::md5ModelParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

md5ModelParser::~md5ModelParser() {
  delete _interpreter;
}

std::string md5ModelParser::getGrammarFileName() const {
  return "md5Model.g4";
}

const std::vector<std::string>& md5ModelParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& md5ModelParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModelContext ------------------------------------------------------------------

md5ModelParser::ModelContext::ModelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

md5ModelParser::VersionContext* md5ModelParser::ModelContext::version() {
  return getRuleContext<md5ModelParser::VersionContext>(0);
}

md5ModelParser::ClContext* md5ModelParser::ModelContext::cl() {
  return getRuleContext<md5ModelParser::ClContext>(0);
}

md5ModelParser::NumJointsContext* md5ModelParser::ModelContext::numJoints() {
  return getRuleContext<md5ModelParser::NumJointsContext>(0);
}

md5ModelParser::NumMeshesContext* md5ModelParser::ModelContext::numMeshes() {
  return getRuleContext<md5ModelParser::NumMeshesContext>(0);
}

md5ModelParser::JointListContext* md5ModelParser::ModelContext::jointList() {
  return getRuleContext<md5ModelParser::JointListContext>(0);
}

std::vector<md5ModelParser::MeshContext *> md5ModelParser::ModelContext::mesh() {
  return getRuleContexts<md5ModelParser::MeshContext>();
}

md5ModelParser::MeshContext* md5ModelParser::ModelContext::mesh(size_t i) {
  return getRuleContext<md5ModelParser::MeshContext>(i);
}


size_t md5ModelParser::ModelContext::getRuleIndex() const {
  return md5ModelParser::RuleModel;
}

void md5ModelParser::ModelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel(this);
}

void md5ModelParser::ModelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel(this);
}

md5ModelParser::ModelContext* md5ModelParser::model() {
  ModelContext *_localctx = _tracker.createInstance<ModelContext>(_ctx, getState());
  enterRule(_localctx, 0, md5ModelParser::RuleModel);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    version();
    setState(41);
    cl();
    setState(42);
    numJoints();
    setState(43);
    numMeshes();
    setState(44);
    jointList();
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::MESH) {
      setState(45);
      mesh();
      setState(50);
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

//----------------- ClContext ------------------------------------------------------------------

md5ModelParser::ClContext::ClContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::ClContext::COMMANDLINE() {
  return getToken(md5ModelParser::COMMANDLINE, 0);
}

std::vector<tree::TerminalNode *> md5ModelParser::ClContext::DBL_QUOTE() {
  return getTokens(md5ModelParser::DBL_QUOTE);
}

tree::TerminalNode* md5ModelParser::ClContext::DBL_QUOTE(size_t i) {
  return getToken(md5ModelParser::DBL_QUOTE, i);
}

tree::TerminalNode* md5ModelParser::ClContext::MESH() {
  return getToken(md5ModelParser::MESH, 0);
}

tree::TerminalNode* md5ModelParser::ClContext::FILE_PATH() {
  return getToken(md5ModelParser::FILE_PATH, 0);
}

std::vector<md5ModelParser::OptionContext *> md5ModelParser::ClContext::option() {
  return getRuleContexts<md5ModelParser::OptionContext>();
}

md5ModelParser::OptionContext* md5ModelParser::ClContext::option(size_t i) {
  return getRuleContext<md5ModelParser::OptionContext>(i);
}


size_t md5ModelParser::ClContext::getRuleIndex() const {
  return md5ModelParser::RuleCl;
}

void md5ModelParser::ClContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCl(this);
}

void md5ModelParser::ClContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCl(this);
}

md5ModelParser::ClContext* md5ModelParser::cl() {
  ClContext *_localctx = _tracker.createInstance<ClContext>(_ctx, getState());
  enterRule(_localctx, 2, md5ModelParser::RuleCl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(md5ModelParser::COMMANDLINE);
    setState(52);
    match(md5ModelParser::DBL_QUOTE);
    setState(53);
    match(md5ModelParser::MESH);
    setState(54);
    match(md5ModelParser::FILE_PATH);
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::T__0) {
      setState(55);
      option();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
    match(md5ModelParser::DBL_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

md5ModelParser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> md5ModelParser::OptionContext::ID() {
  return getTokens(md5ModelParser::ID);
}

tree::TerminalNode* md5ModelParser::OptionContext::ID(size_t i) {
  return getToken(md5ModelParser::ID, i);
}

std::vector<tree::TerminalNode *> md5ModelParser::OptionContext::FILE_PATH() {
  return getTokens(md5ModelParser::FILE_PATH);
}

tree::TerminalNode* md5ModelParser::OptionContext::FILE_PATH(size_t i) {
  return getToken(md5ModelParser::FILE_PATH, i);
}


size_t md5ModelParser::OptionContext::getRuleIndex() const {
  return md5ModelParser::RuleOption;
}

void md5ModelParser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void md5ModelParser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}

md5ModelParser::OptionContext* md5ModelParser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 4, md5ModelParser::RuleOption);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(md5ModelParser::T__0);
    setState(64);
    match(md5ModelParser::ID);
    setState(66); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(65);
      _la = _input->LA(1);
      if (!(_la == md5ModelParser::ID

      || _la == md5ModelParser::FILE_PATH)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(68); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == md5ModelParser::ID

    || _la == md5ModelParser::FILE_PATH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VersionContext ------------------------------------------------------------------

md5ModelParser::VersionContext::VersionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::VersionContext::MD5VERSION() {
  return getToken(md5ModelParser::MD5VERSION, 0);
}

tree::TerminalNode* md5ModelParser::VersionContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::VersionContext::getRuleIndex() const {
  return md5ModelParser::RuleVersion;
}

void md5ModelParser::VersionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVersion(this);
}

void md5ModelParser::VersionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVersion(this);
}

md5ModelParser::VersionContext* md5ModelParser::version() {
  VersionContext *_localctx = _tracker.createInstance<VersionContext>(_ctx, getState());
  enterRule(_localctx, 6, md5ModelParser::RuleVersion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(md5ModelParser::MD5VERSION);
    setState(71);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumJointsContext ------------------------------------------------------------------

md5ModelParser::NumJointsContext::NumJointsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumJointsContext::NUM_JOINTS() {
  return getToken(md5ModelParser::NUM_JOINTS, 0);
}

tree::TerminalNode* md5ModelParser::NumJointsContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumJointsContext::getRuleIndex() const {
  return md5ModelParser::RuleNumJoints;
}

void md5ModelParser::NumJointsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumJoints(this);
}

void md5ModelParser::NumJointsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumJoints(this);
}

md5ModelParser::NumJointsContext* md5ModelParser::numJoints() {
  NumJointsContext *_localctx = _tracker.createInstance<NumJointsContext>(_ctx, getState());
  enterRule(_localctx, 8, md5ModelParser::RuleNumJoints);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(md5ModelParser::NUM_JOINTS);
    setState(74);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumMeshesContext ------------------------------------------------------------------

md5ModelParser::NumMeshesContext::NumMeshesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumMeshesContext::NUM_MESHES() {
  return getToken(md5ModelParser::NUM_MESHES, 0);
}

tree::TerminalNode* md5ModelParser::NumMeshesContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumMeshesContext::getRuleIndex() const {
  return md5ModelParser::RuleNumMeshes;
}

void md5ModelParser::NumMeshesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumMeshes(this);
}

void md5ModelParser::NumMeshesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumMeshes(this);
}

md5ModelParser::NumMeshesContext* md5ModelParser::numMeshes() {
  NumMeshesContext *_localctx = _tracker.createInstance<NumMeshesContext>(_ctx, getState());
  enterRule(_localctx, 10, md5ModelParser::RuleNumMeshes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(md5ModelParser::NUM_MESHES);
    setState(77);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericContext ------------------------------------------------------------------

md5ModelParser::NumericContext::NumericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumericContext::FLOAT() {
  return getToken(md5ModelParser::FLOAT, 0);
}

tree::TerminalNode* md5ModelParser::NumericContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumericContext::getRuleIndex() const {
  return md5ModelParser::RuleNumeric;
}

void md5ModelParser::NumericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumeric(this);
}

void md5ModelParser::NumericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumeric(this);
}

md5ModelParser::NumericContext* md5ModelParser::numeric() {
  NumericContext *_localctx = _tracker.createInstance<NumericContext>(_ctx, getState());
  enterRule(_localctx, 12, md5ModelParser::RuleNumeric);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    _la = _input->LA(1);
    if (!(_la == md5ModelParser::INT

    || _la == md5ModelParser::FLOAT)) {
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

//----------------- JointListContext ------------------------------------------------------------------

md5ModelParser::JointListContext::JointListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::JointListContext::JOINTS() {
  return getToken(md5ModelParser::JOINTS, 0);
}

std::vector<md5ModelParser::JointContext *> md5ModelParser::JointListContext::joint() {
  return getRuleContexts<md5ModelParser::JointContext>();
}

md5ModelParser::JointContext* md5ModelParser::JointListContext::joint(size_t i) {
  return getRuleContext<md5ModelParser::JointContext>(i);
}


size_t md5ModelParser::JointListContext::getRuleIndex() const {
  return md5ModelParser::RuleJointList;
}

void md5ModelParser::JointListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJointList(this);
}

void md5ModelParser::JointListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJointList(this);
}

md5ModelParser::JointListContext* md5ModelParser::jointList() {
  JointListContext *_localctx = _tracker.createInstance<JointListContext>(_ctx, getState());
  enterRule(_localctx, 14, md5ModelParser::RuleJointList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(md5ModelParser::JOINTS);
    setState(82);
    match(md5ModelParser::T__1);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::DBL_QUOTE) {
      setState(83);
      joint();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    match(md5ModelParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JointContext ------------------------------------------------------------------

md5ModelParser::JointContext::JointContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> md5ModelParser::JointContext::DBL_QUOTE() {
  return getTokens(md5ModelParser::DBL_QUOTE);
}

tree::TerminalNode* md5ModelParser::JointContext::DBL_QUOTE(size_t i) {
  return getToken(md5ModelParser::DBL_QUOTE, i);
}

tree::TerminalNode* md5ModelParser::JointContext::ID() {
  return getToken(md5ModelParser::ID, 0);
}

tree::TerminalNode* md5ModelParser::JointContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}

std::vector<md5ModelParser::NumericContext *> md5ModelParser::JointContext::numeric() {
  return getRuleContexts<md5ModelParser::NumericContext>();
}

md5ModelParser::NumericContext* md5ModelParser::JointContext::numeric(size_t i) {
  return getRuleContext<md5ModelParser::NumericContext>(i);
}


size_t md5ModelParser::JointContext::getRuleIndex() const {
  return md5ModelParser::RuleJoint;
}

void md5ModelParser::JointContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoint(this);
}

void md5ModelParser::JointContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoint(this);
}

md5ModelParser::JointContext* md5ModelParser::joint() {
  JointContext *_localctx = _tracker.createInstance<JointContext>(_ctx, getState());
  enterRule(_localctx, 16, md5ModelParser::RuleJoint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(md5ModelParser::DBL_QUOTE);
    setState(92);
    match(md5ModelParser::ID);
    setState(93);
    match(md5ModelParser::DBL_QUOTE);
    setState(94);
    match(md5ModelParser::INT);
    setState(95);
    match(md5ModelParser::T__3);
    setState(96);
    numeric();
    setState(97);
    numeric();
    setState(98);
    numeric();
    setState(99);
    match(md5ModelParser::T__4);
    setState(100);
    match(md5ModelParser::T__3);
    setState(101);
    numeric();
    setState(102);
    numeric();
    setState(103);
    numeric();
    setState(104);
    match(md5ModelParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeshContext ------------------------------------------------------------------

md5ModelParser::MeshContext::MeshContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::MeshContext::MESH() {
  return getToken(md5ModelParser::MESH, 0);
}

md5ModelParser::ShaderPathContext* md5ModelParser::MeshContext::shaderPath() {
  return getRuleContext<md5ModelParser::ShaderPathContext>(0);
}

md5ModelParser::VertListContext* md5ModelParser::MeshContext::vertList() {
  return getRuleContext<md5ModelParser::VertListContext>(0);
}

md5ModelParser::TriListContext* md5ModelParser::MeshContext::triList() {
  return getRuleContext<md5ModelParser::TriListContext>(0);
}

md5ModelParser::WeightsListContext* md5ModelParser::MeshContext::weightsList() {
  return getRuleContext<md5ModelParser::WeightsListContext>(0);
}


size_t md5ModelParser::MeshContext::getRuleIndex() const {
  return md5ModelParser::RuleMesh;
}

void md5ModelParser::MeshContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMesh(this);
}

void md5ModelParser::MeshContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMesh(this);
}

md5ModelParser::MeshContext* md5ModelParser::mesh() {
  MeshContext *_localctx = _tracker.createInstance<MeshContext>(_ctx, getState());
  enterRule(_localctx, 18, md5ModelParser::RuleMesh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(md5ModelParser::MESH);
    setState(107);
    match(md5ModelParser::T__1);
    setState(108);
    shaderPath();
    setState(109);
    vertList();
    setState(110);
    triList();
    setState(111);
    weightsList();
    setState(112);
    match(md5ModelParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderPathContext ------------------------------------------------------------------

md5ModelParser::ShaderPathContext::ShaderPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::ShaderPathContext::SHADER() {
  return getToken(md5ModelParser::SHADER, 0);
}

std::vector<tree::TerminalNode *> md5ModelParser::ShaderPathContext::DBL_QUOTE() {
  return getTokens(md5ModelParser::DBL_QUOTE);
}

tree::TerminalNode* md5ModelParser::ShaderPathContext::DBL_QUOTE(size_t i) {
  return getToken(md5ModelParser::DBL_QUOTE, i);
}

tree::TerminalNode* md5ModelParser::ShaderPathContext::FILE_PATH() {
  return getToken(md5ModelParser::FILE_PATH, 0);
}


size_t md5ModelParser::ShaderPathContext::getRuleIndex() const {
  return md5ModelParser::RuleShaderPath;
}

void md5ModelParser::ShaderPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShaderPath(this);
}

void md5ModelParser::ShaderPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShaderPath(this);
}

md5ModelParser::ShaderPathContext* md5ModelParser::shaderPath() {
  ShaderPathContext *_localctx = _tracker.createInstance<ShaderPathContext>(_ctx, getState());
  enterRule(_localctx, 20, md5ModelParser::RuleShaderPath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(md5ModelParser::SHADER);
    setState(115);
    match(md5ModelParser::DBL_QUOTE);
    setState(116);
    match(md5ModelParser::FILE_PATH);
    setState(117);
    match(md5ModelParser::DBL_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VertListContext ------------------------------------------------------------------

md5ModelParser::VertListContext::VertListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

md5ModelParser::NumVertsContext* md5ModelParser::VertListContext::numVerts() {
  return getRuleContext<md5ModelParser::NumVertsContext>(0);
}

std::vector<md5ModelParser::VertContext *> md5ModelParser::VertListContext::vert() {
  return getRuleContexts<md5ModelParser::VertContext>();
}

md5ModelParser::VertContext* md5ModelParser::VertListContext::vert(size_t i) {
  return getRuleContext<md5ModelParser::VertContext>(i);
}


size_t md5ModelParser::VertListContext::getRuleIndex() const {
  return md5ModelParser::RuleVertList;
}

void md5ModelParser::VertListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVertList(this);
}

void md5ModelParser::VertListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVertList(this);
}

md5ModelParser::VertListContext* md5ModelParser::vertList() {
  VertListContext *_localctx = _tracker.createInstance<VertListContext>(_ctx, getState());
  enterRule(_localctx, 22, md5ModelParser::RuleVertList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    numVerts();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::VERT) {
      setState(120);
      vert();
      setState(125);
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

//----------------- NumVertsContext ------------------------------------------------------------------

md5ModelParser::NumVertsContext::NumVertsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumVertsContext::NUM_VERTS() {
  return getToken(md5ModelParser::NUM_VERTS, 0);
}

tree::TerminalNode* md5ModelParser::NumVertsContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumVertsContext::getRuleIndex() const {
  return md5ModelParser::RuleNumVerts;
}

void md5ModelParser::NumVertsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumVerts(this);
}

void md5ModelParser::NumVertsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumVerts(this);
}

md5ModelParser::NumVertsContext* md5ModelParser::numVerts() {
  NumVertsContext *_localctx = _tracker.createInstance<NumVertsContext>(_ctx, getState());
  enterRule(_localctx, 24, md5ModelParser::RuleNumVerts);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(md5ModelParser::NUM_VERTS);
    setState(127);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VertContext ------------------------------------------------------------------

md5ModelParser::VertContext::VertContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::VertContext::VERT() {
  return getToken(md5ModelParser::VERT, 0);
}

std::vector<tree::TerminalNode *> md5ModelParser::VertContext::INT() {
  return getTokens(md5ModelParser::INT);
}

tree::TerminalNode* md5ModelParser::VertContext::INT(size_t i) {
  return getToken(md5ModelParser::INT, i);
}

std::vector<md5ModelParser::NumericContext *> md5ModelParser::VertContext::numeric() {
  return getRuleContexts<md5ModelParser::NumericContext>();
}

md5ModelParser::NumericContext* md5ModelParser::VertContext::numeric(size_t i) {
  return getRuleContext<md5ModelParser::NumericContext>(i);
}


size_t md5ModelParser::VertContext::getRuleIndex() const {
  return md5ModelParser::RuleVert;
}

void md5ModelParser::VertContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVert(this);
}

void md5ModelParser::VertContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVert(this);
}

md5ModelParser::VertContext* md5ModelParser::vert() {
  VertContext *_localctx = _tracker.createInstance<VertContext>(_ctx, getState());
  enterRule(_localctx, 26, md5ModelParser::RuleVert);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(md5ModelParser::VERT);
    setState(130);
    match(md5ModelParser::INT);
    setState(131);
    match(md5ModelParser::T__3);
    setState(132);
    numeric();
    setState(133);
    numeric();
    setState(134);
    match(md5ModelParser::T__4);
    setState(135);
    match(md5ModelParser::INT);
    setState(136);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriListContext ------------------------------------------------------------------

md5ModelParser::TriListContext::TriListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

md5ModelParser::NumTrisContext* md5ModelParser::TriListContext::numTris() {
  return getRuleContext<md5ModelParser::NumTrisContext>(0);
}

std::vector<md5ModelParser::TriContext *> md5ModelParser::TriListContext::tri() {
  return getRuleContexts<md5ModelParser::TriContext>();
}

md5ModelParser::TriContext* md5ModelParser::TriListContext::tri(size_t i) {
  return getRuleContext<md5ModelParser::TriContext>(i);
}


size_t md5ModelParser::TriListContext::getRuleIndex() const {
  return md5ModelParser::RuleTriList;
}

void md5ModelParser::TriListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriList(this);
}

void md5ModelParser::TriListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriList(this);
}

md5ModelParser::TriListContext* md5ModelParser::triList() {
  TriListContext *_localctx = _tracker.createInstance<TriListContext>(_ctx, getState());
  enterRule(_localctx, 28, md5ModelParser::RuleTriList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    numTris();
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::TRI) {
      setState(139);
      tri();
      setState(144);
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

//----------------- NumTrisContext ------------------------------------------------------------------

md5ModelParser::NumTrisContext::NumTrisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumTrisContext::NUM_TRIS() {
  return getToken(md5ModelParser::NUM_TRIS, 0);
}

tree::TerminalNode* md5ModelParser::NumTrisContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumTrisContext::getRuleIndex() const {
  return md5ModelParser::RuleNumTris;
}

void md5ModelParser::NumTrisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumTris(this);
}

void md5ModelParser::NumTrisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumTris(this);
}

md5ModelParser::NumTrisContext* md5ModelParser::numTris() {
  NumTrisContext *_localctx = _tracker.createInstance<NumTrisContext>(_ctx, getState());
  enterRule(_localctx, 30, md5ModelParser::RuleNumTris);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(md5ModelParser::NUM_TRIS);
    setState(146);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriContext ------------------------------------------------------------------

md5ModelParser::TriContext::TriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::TriContext::TRI() {
  return getToken(md5ModelParser::TRI, 0);
}

std::vector<tree::TerminalNode *> md5ModelParser::TriContext::INT() {
  return getTokens(md5ModelParser::INT);
}

tree::TerminalNode* md5ModelParser::TriContext::INT(size_t i) {
  return getToken(md5ModelParser::INT, i);
}


size_t md5ModelParser::TriContext::getRuleIndex() const {
  return md5ModelParser::RuleTri;
}

void md5ModelParser::TriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTri(this);
}

void md5ModelParser::TriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTri(this);
}

md5ModelParser::TriContext* md5ModelParser::tri() {
  TriContext *_localctx = _tracker.createInstance<TriContext>(_ctx, getState());
  enterRule(_localctx, 32, md5ModelParser::RuleTri);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(md5ModelParser::TRI);
    setState(149);
    match(md5ModelParser::INT);
    setState(150);
    match(md5ModelParser::INT);
    setState(151);
    match(md5ModelParser::INT);
    setState(152);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WeightsListContext ------------------------------------------------------------------

md5ModelParser::WeightsListContext::WeightsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

md5ModelParser::NumWeightsContext* md5ModelParser::WeightsListContext::numWeights() {
  return getRuleContext<md5ModelParser::NumWeightsContext>(0);
}

std::vector<md5ModelParser::WeightContext *> md5ModelParser::WeightsListContext::weight() {
  return getRuleContexts<md5ModelParser::WeightContext>();
}

md5ModelParser::WeightContext* md5ModelParser::WeightsListContext::weight(size_t i) {
  return getRuleContext<md5ModelParser::WeightContext>(i);
}


size_t md5ModelParser::WeightsListContext::getRuleIndex() const {
  return md5ModelParser::RuleWeightsList;
}

void md5ModelParser::WeightsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeightsList(this);
}

void md5ModelParser::WeightsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeightsList(this);
}

md5ModelParser::WeightsListContext* md5ModelParser::weightsList() {
  WeightsListContext *_localctx = _tracker.createInstance<WeightsListContext>(_ctx, getState());
  enterRule(_localctx, 34, md5ModelParser::RuleWeightsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    numWeights();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == md5ModelParser::WEIGHT) {
      setState(155);
      weight();
      setState(160);
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

//----------------- NumWeightsContext ------------------------------------------------------------------

md5ModelParser::NumWeightsContext::NumWeightsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::NumWeightsContext::NUM_WEIGHTS() {
  return getToken(md5ModelParser::NUM_WEIGHTS, 0);
}

tree::TerminalNode* md5ModelParser::NumWeightsContext::INT() {
  return getToken(md5ModelParser::INT, 0);
}


size_t md5ModelParser::NumWeightsContext::getRuleIndex() const {
  return md5ModelParser::RuleNumWeights;
}

void md5ModelParser::NumWeightsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumWeights(this);
}

void md5ModelParser::NumWeightsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumWeights(this);
}

md5ModelParser::NumWeightsContext* md5ModelParser::numWeights() {
  NumWeightsContext *_localctx = _tracker.createInstance<NumWeightsContext>(_ctx, getState());
  enterRule(_localctx, 36, md5ModelParser::RuleNumWeights);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(md5ModelParser::NUM_WEIGHTS);
    setState(162);
    match(md5ModelParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WeightContext ------------------------------------------------------------------

md5ModelParser::WeightContext::WeightContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* md5ModelParser::WeightContext::WEIGHT() {
  return getToken(md5ModelParser::WEIGHT, 0);
}

std::vector<tree::TerminalNode *> md5ModelParser::WeightContext::INT() {
  return getTokens(md5ModelParser::INT);
}

tree::TerminalNode* md5ModelParser::WeightContext::INT(size_t i) {
  return getToken(md5ModelParser::INT, i);
}

std::vector<md5ModelParser::NumericContext *> md5ModelParser::WeightContext::numeric() {
  return getRuleContexts<md5ModelParser::NumericContext>();
}

md5ModelParser::NumericContext* md5ModelParser::WeightContext::numeric(size_t i) {
  return getRuleContext<md5ModelParser::NumericContext>(i);
}


size_t md5ModelParser::WeightContext::getRuleIndex() const {
  return md5ModelParser::RuleWeight;
}

void md5ModelParser::WeightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeight(this);
}

void md5ModelParser::WeightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<md5ModelListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeight(this);
}

md5ModelParser::WeightContext* md5ModelParser::weight() {
  WeightContext *_localctx = _tracker.createInstance<WeightContext>(_ctx, getState());
  enterRule(_localctx, 38, md5ModelParser::RuleWeight);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(md5ModelParser::WEIGHT);
    setState(165);
    match(md5ModelParser::INT);
    setState(166);
    match(md5ModelParser::INT);
    setState(167);
    numeric();
    setState(168);
    match(md5ModelParser::T__3);
    setState(169);
    numeric();
    setState(170);
    numeric();
    setState(171);
    numeric();
    setState(172);
    match(md5ModelParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> md5ModelParser::_decisionToDFA;
atn::PredictionContextCache md5ModelParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN md5ModelParser::_atn;
std::vector<uint16_t> md5ModelParser::_serializedATN;

std::vector<std::string> md5ModelParser::_ruleNames = {
  "model", "cl", "option", "version", "numJoints", "numMeshes", "numeric", 
  "jointList", "joint", "mesh", "shaderPath", "vertList", "numVerts", "vert", 
  "triList", "numTris", "tri", "weightsList", "numWeights", "weight"
};

std::vector<std::string> md5ModelParser::_literalNames = {
  "", "'-'", "'{'", "'}'", "'('", "')'", "'MD5Version'", "'numJoints'", 
  "'numMeshes'", "'numverts'", "'numtris'", "'numweights'", "'mesh'", "'vert'", 
  "'joints'", "'shader'", "'tri'", "'weight'", "'\"'", "", "", "'commandline'"
};

std::vector<std::string> md5ModelParser::_symbolicNames = {
  "", "", "", "", "", "", "MD5VERSION", "NUM_JOINTS", "NUM_MESHES", "NUM_VERTS", 
  "NUM_TRIS", "NUM_WEIGHTS", "MESH", "VERT", "JOINTS", "SHADER", "TRI", 
  "WEIGHT", "DBL_QUOTE", "COMMENT", "WHITESPACE", "COMMANDLINE", "INT", 
  "FLOAT", "ID", "FILE_NAME", "FILE_PATH"
};

dfa::Vocabulary md5ModelParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> md5ModelParser::_tokenNames;

md5ModelParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1c, 0xb1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x31, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x34, 0xb, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x6, 0x4, 0x45, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x46, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x57, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x5a, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x7, 0xd, 0x7c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x7f, 0xb, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0x8f, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x92, 0xb, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x9f, 0xa, 
    0x13, 0xc, 0x13, 0xe, 0x13, 0xa2, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x2, 0x16, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x4, 0x4, 0x2, 0x1a, 
    0x1a, 0x1c, 0x1c, 0x3, 0x2, 0x18, 0x19, 0x2, 0xa3, 0x2, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x48, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x51, 0x3, 0x2, 0x2, 0x2, 0x10, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x74, 0x3, 0x2, 0x2, 0x2, 0x18, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x93, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x24, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x26, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 
    0x8, 0x5, 0x2, 0x2b, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x2c, 0x2d, 0x5, 0xa, 
    0x6, 0x2, 0x2d, 0x2e, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x32, 0x5, 0x10, 0x9, 
    0x2, 0x2f, 0x31, 0x5, 0x14, 0xb, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x3, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x17, 0x2, 0x2, 0x36, 0x37, 0x7, 
    0x14, 0x2, 0x2, 0x37, 0x38, 0x7, 0xe, 0x2, 0x2, 0x38, 0x3c, 0x7, 0x1c, 
    0x2, 0x2, 0x39, 0x3b, 0x5, 0x6, 0x4, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x14, 0x2, 0x2, 0x40, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x3, 0x2, 0x2, 0x42, 0x44, 0x7, 
    0x1a, 0x2, 0x2, 0x43, 0x45, 0x9, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x49, 0x7, 0x8, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x18, 0x2, 0x2, 0x4a, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x9, 0x2, 0x2, 0x4c, 0x4d, 
    0x7, 0x18, 0x2, 0x2, 0x4d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 
    0xa, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x18, 0x2, 0x2, 0x50, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x9, 0x3, 0x2, 0x2, 0x52, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x10, 0x2, 0x2, 0x54, 0x58, 0x7, 0x4, 0x2, 0x2, 
    0x55, 0x57, 0x5, 0x12, 0xa, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x5, 0x2, 0x2, 0x5c, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x7, 0x14, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x1a, 0x2, 
    0x2, 0x5f, 0x60, 0x7, 0x14, 0x2, 0x2, 0x60, 0x61, 0x7, 0x18, 0x2, 0x2, 
    0x61, 0x62, 0x7, 0x6, 0x2, 0x2, 0x62, 0x63, 0x5, 0xe, 0x8, 0x2, 0x63, 
    0x64, 0x5, 0xe, 0x8, 0x2, 0x64, 0x65, 0x5, 0xe, 0x8, 0x2, 0x65, 0x66, 
    0x7, 0x7, 0x2, 0x2, 0x66, 0x67, 0x7, 0x6, 0x2, 0x2, 0x67, 0x68, 0x5, 
    0xe, 0x8, 0x2, 0x68, 0x69, 0x5, 0xe, 0x8, 0x2, 0x69, 0x6a, 0x5, 0xe, 
    0x8, 0x2, 0x6a, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6b, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x6d, 0x7, 0xe, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x4, 0x2, 0x2, 
    0x6e, 0x6f, 0x5, 0x16, 0xc, 0x2, 0x6f, 0x70, 0x5, 0x18, 0xd, 0x2, 0x70, 
    0x71, 0x5, 0x1e, 0x10, 0x2, 0x71, 0x72, 0x5, 0x24, 0x13, 0x2, 0x72, 
    0x73, 0x7, 0x5, 0x2, 0x2, 0x73, 0x15, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x7, 0x11, 0x2, 0x2, 0x75, 0x76, 0x7, 0x14, 0x2, 0x2, 0x76, 0x77, 0x7, 
    0x1c, 0x2, 0x2, 0x77, 0x78, 0x7, 0x14, 0x2, 0x2, 0x78, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7d, 0x5, 0x1a, 0xe, 0x2, 0x7a, 0x7c, 0x5, 0x1c, 0xf, 
    0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x7, 0xb, 0x2, 0x2, 0x81, 0x82, 0x7, 0x18, 0x2, 0x2, 0x82, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xf, 0x2, 0x2, 0x84, 0x85, 0x7, 0x18, 
    0x2, 0x2, 0x85, 0x86, 0x7, 0x6, 0x2, 0x2, 0x86, 0x87, 0x5, 0xe, 0x8, 
    0x2, 0x87, 0x88, 0x5, 0xe, 0x8, 0x2, 0x88, 0x89, 0x7, 0x7, 0x2, 0x2, 
    0x89, 0x8a, 0x7, 0x18, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x18, 0x2, 0x2, 0x8b, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x90, 0x5, 0x20, 0x11, 0x2, 0x8d, 0x8f, 
    0x5, 0x22, 0x12, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0xc, 0x2, 0x2, 0x94, 0x95, 0x7, 0x18, 0x2, 0x2, 
    0x95, 0x21, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x12, 0x2, 0x2, 0x97, 
    0x98, 0x7, 0x18, 0x2, 0x2, 0x98, 0x99, 0x7, 0x18, 0x2, 0x2, 0x99, 0x9a, 
    0x7, 0x18, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x18, 0x2, 0x2, 0x9b, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0xa0, 0x5, 0x26, 0x14, 0x2, 0x9d, 0x9f, 0x5, 0x28, 
    0x15, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x7, 0xd, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x18, 0x2, 0x2, 0xa5, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x13, 0x2, 0x2, 0xa7, 0xa8, 0x7, 
    0x18, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x18, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0xe, 
    0x8, 0x2, 0xaa, 0xab, 0x7, 0x6, 0x2, 0x2, 0xab, 0xac, 0x5, 0xe, 0x8, 
    0x2, 0xac, 0xad, 0x5, 0xe, 0x8, 0x2, 0xad, 0xae, 0x5, 0xe, 0x8, 0x2, 
    0xae, 0xaf, 0x7, 0x7, 0x2, 0x2, 0xaf, 0x29, 0x3, 0x2, 0x2, 0x2, 0x9, 
    0x32, 0x3c, 0x46, 0x58, 0x7d, 0x90, 0xa0, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

md5ModelParser::Initializer md5ModelParser::_init;
