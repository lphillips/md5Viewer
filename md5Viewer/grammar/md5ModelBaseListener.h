
// Generated from ..\md3Viewer\grammar\md5Model.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "md5ModelListener.h"


/**
 * This class provides an empty implementation of md5ModelListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  md5ModelBaseListener : public md5ModelListener {
public:

  virtual void enterModel(md5ModelParser::ModelContext * /*ctx*/) override { }
  virtual void exitModel(md5ModelParser::ModelContext * /*ctx*/) override { }

  virtual void enterCl(md5ModelParser::ClContext * /*ctx*/) override { }
  virtual void exitCl(md5ModelParser::ClContext * /*ctx*/) override { }

  virtual void enterOption(md5ModelParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(md5ModelParser::OptionContext * /*ctx*/) override { }

  virtual void enterVersion(md5ModelParser::VersionContext * /*ctx*/) override { }
  virtual void exitVersion(md5ModelParser::VersionContext * /*ctx*/) override { }

  virtual void enterNumJoints(md5ModelParser::NumJointsContext * /*ctx*/) override { }
  virtual void exitNumJoints(md5ModelParser::NumJointsContext * /*ctx*/) override { }

  virtual void enterNumMeshes(md5ModelParser::NumMeshesContext * /*ctx*/) override { }
  virtual void exitNumMeshes(md5ModelParser::NumMeshesContext * /*ctx*/) override { }

  virtual void enterNumeric(md5ModelParser::NumericContext * /*ctx*/) override { }
  virtual void exitNumeric(md5ModelParser::NumericContext * /*ctx*/) override { }

  virtual void enterJointList(md5ModelParser::JointListContext * /*ctx*/) override { }
  virtual void exitJointList(md5ModelParser::JointListContext * /*ctx*/) override { }

  virtual void enterJoint(md5ModelParser::JointContext * /*ctx*/) override { }
  virtual void exitJoint(md5ModelParser::JointContext * /*ctx*/) override { }

  virtual void enterMesh(md5ModelParser::MeshContext * /*ctx*/) override { }
  virtual void exitMesh(md5ModelParser::MeshContext * /*ctx*/) override { }

  virtual void enterShaderPath(md5ModelParser::ShaderPathContext * /*ctx*/) override { }
  virtual void exitShaderPath(md5ModelParser::ShaderPathContext * /*ctx*/) override { }

  virtual void enterVertList(md5ModelParser::VertListContext * /*ctx*/) override { }
  virtual void exitVertList(md5ModelParser::VertListContext * /*ctx*/) override { }

  virtual void enterNumVerts(md5ModelParser::NumVertsContext * /*ctx*/) override { }
  virtual void exitNumVerts(md5ModelParser::NumVertsContext * /*ctx*/) override { }

  virtual void enterVert(md5ModelParser::VertContext * /*ctx*/) override { }
  virtual void exitVert(md5ModelParser::VertContext * /*ctx*/) override { }

  virtual void enterTriList(md5ModelParser::TriListContext * /*ctx*/) override { }
  virtual void exitTriList(md5ModelParser::TriListContext * /*ctx*/) override { }

  virtual void enterNumTris(md5ModelParser::NumTrisContext * /*ctx*/) override { }
  virtual void exitNumTris(md5ModelParser::NumTrisContext * /*ctx*/) override { }

  virtual void enterTri(md5ModelParser::TriContext * /*ctx*/) override { }
  virtual void exitTri(md5ModelParser::TriContext * /*ctx*/) override { }

  virtual void enterWeightsList(md5ModelParser::WeightsListContext * /*ctx*/) override { }
  virtual void exitWeightsList(md5ModelParser::WeightsListContext * /*ctx*/) override { }

  virtual void enterNumWeights(md5ModelParser::NumWeightsContext * /*ctx*/) override { }
  virtual void exitNumWeights(md5ModelParser::NumWeightsContext * /*ctx*/) override { }

  virtual void enterWeight(md5ModelParser::WeightContext * /*ctx*/) override { }
  virtual void exitWeight(md5ModelParser::WeightContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

