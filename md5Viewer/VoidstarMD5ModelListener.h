#pragma once

#include <vector>
#include <array>
#include "grammar/md5ModelBaseListener.h"
using namespace std;

typedef struct md5Vertex
{
	int index;
	float st[2];
	int startWeight;
	int weightCount;
} md5Vertex;

typedef struct md5Triangle
{
	int index;
	int vert1Index;
	int vert2Index;
	int vert3Index;
} md5Triangle;

typedef struct md5Weight
{
	int index;
	int jointIndex;
	float bias;
	float pos[3];
} md5Weight;

typedef struct md5Joint
{
	string name;
	int parentIndex;
	float pos[3];
	float orient[3];
} md5Joint;

typedef struct md5Mesh
{
	string shaderPath;
	vector<md5Vertex> vertices;
	vector<md5Triangle> triangles;
	vector<md5Weight> weights;
};

class VoidstarMD5ModelListener : public md5ModelBaseListener {
	void enterModel(md5ModelParser::ModelContext*) override;
	void exitModel(md5ModelParser::ModelContext*) override;
	void exitNumJoints(md5ModelParser::NumJointsContext*) override;
	void exitNumMeshes(md5ModelParser::NumMeshesContext*) override;
	void exitJoint(md5ModelParser::JointContext*) override;
	void enterMesh(md5ModelParser::MeshContext*) override;
	void exitMesh(md5ModelParser::MeshContext*) override;
	void exitShaderPath(md5ModelParser::ShaderPathContext*) override;
	void exitNumVerts(md5ModelParser::NumVertsContext*) override;
	void exitVert(md5ModelParser::VertContext*) override;
	void exitNumTris(md5ModelParser::NumTrisContext*) override;
	void exitTri(md5ModelParser::TriContext*) override;
	void exitNumWeights(md5ModelParser::NumWeightsContext*) override;
	void exitWeight(md5ModelParser::WeightContext*) override;
private:
	vector<md5Mesh> meshes;
	vector<md5Joint> joints;
	int currentJointIndex = 0;
	int currentMeshIndex = 0;

	md5Mesh& getCurrentMesh();

};