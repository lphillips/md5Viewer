
// Generated from ..\md3Viewer\grammar\md5Model.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "md5ModelParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by md5ModelParser.
 */
class  md5ModelListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModel(md5ModelParser::ModelContext *ctx) = 0;
  virtual void exitModel(md5ModelParser::ModelContext *ctx) = 0;

  virtual void enterCl(md5ModelParser::ClContext *ctx) = 0;
  virtual void exitCl(md5ModelParser::ClContext *ctx) = 0;

  virtual void enterOption(md5ModelParser::OptionContext *ctx) = 0;
  virtual void exitOption(md5ModelParser::OptionContext *ctx) = 0;

  virtual void enterVersion(md5ModelParser::VersionContext *ctx) = 0;
  virtual void exitVersion(md5ModelParser::VersionContext *ctx) = 0;

  virtual void enterNumJoints(md5ModelParser::NumJointsContext *ctx) = 0;
  virtual void exitNumJoints(md5ModelParser::NumJointsContext *ctx) = 0;

  virtual void enterNumMeshes(md5ModelParser::NumMeshesContext *ctx) = 0;
  virtual void exitNumMeshes(md5ModelParser::NumMeshesContext *ctx) = 0;

  virtual void enterNumeric(md5ModelParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(md5ModelParser::NumericContext *ctx) = 0;

  virtual void enterJointList(md5ModelParser::JointListContext *ctx) = 0;
  virtual void exitJointList(md5ModelParser::JointListContext *ctx) = 0;

  virtual void enterJoint(md5ModelParser::JointContext *ctx) = 0;
  virtual void exitJoint(md5ModelParser::JointContext *ctx) = 0;

  virtual void enterMesh(md5ModelParser::MeshContext *ctx) = 0;
  virtual void exitMesh(md5ModelParser::MeshContext *ctx) = 0;

  virtual void enterShaderPath(md5ModelParser::ShaderPathContext *ctx) = 0;
  virtual void exitShaderPath(md5ModelParser::ShaderPathContext *ctx) = 0;

  virtual void enterVertList(md5ModelParser::VertListContext *ctx) = 0;
  virtual void exitVertList(md5ModelParser::VertListContext *ctx) = 0;

  virtual void enterNumVerts(md5ModelParser::NumVertsContext *ctx) = 0;
  virtual void exitNumVerts(md5ModelParser::NumVertsContext *ctx) = 0;

  virtual void enterVert(md5ModelParser::VertContext *ctx) = 0;
  virtual void exitVert(md5ModelParser::VertContext *ctx) = 0;

  virtual void enterTriList(md5ModelParser::TriListContext *ctx) = 0;
  virtual void exitTriList(md5ModelParser::TriListContext *ctx) = 0;

  virtual void enterNumTris(md5ModelParser::NumTrisContext *ctx) = 0;
  virtual void exitNumTris(md5ModelParser::NumTrisContext *ctx) = 0;

  virtual void enterTri(md5ModelParser::TriContext *ctx) = 0;
  virtual void exitTri(md5ModelParser::TriContext *ctx) = 0;

  virtual void enterWeightsList(md5ModelParser::WeightsListContext *ctx) = 0;
  virtual void exitWeightsList(md5ModelParser::WeightsListContext *ctx) = 0;

  virtual void enterNumWeights(md5ModelParser::NumWeightsContext *ctx) = 0;
  virtual void exitNumWeights(md5ModelParser::NumWeightsContext *ctx) = 0;

  virtual void enterWeight(md5ModelParser::WeightContext *ctx) = 0;
  virtual void exitWeight(md5ModelParser::WeightContext *ctx) = 0;


};

