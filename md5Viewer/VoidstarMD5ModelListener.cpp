#include "VoidstarMD5ModelListener.h"
#include "grammar/md5ModelBaseListener.h"

#include <string>
using namespace std;

void VoidstarMD5ModelListener::enterModel(md5ModelParser::ModelContext* ctx)
{
	this->meshes.clear();
	this->joints.clear();
	currentJointIndex = 0;
	currentMeshIndex = 0;
}

void VoidstarMD5ModelListener::exitModel(md5ModelParser::ModelContext*)
{
	int noop = 0;
}

void VoidstarMD5ModelListener::exitNumJoints(md5ModelParser::NumJointsContext* ctx)
{
	size_t numJoints = (size_t)stoi(ctx->INT()->getSymbol()->getText());
	this->joints.resize(numJoints);
}

void VoidstarMD5ModelListener::exitNumMeshes(md5ModelParser::NumMeshesContext* ctx)
{
	size_t numMeshes = (size_t)stoi(ctx->INT()->getSymbol()->getText());
	this->meshes.resize(numMeshes);
}

void VoidstarMD5ModelListener::exitJoint(md5ModelParser::JointContext* ctx)
{
	md5Joint joint;
	joint.name = ctx->ID()->getText();
	joint.parentIndex = stoi(ctx->INT()->getText());
	joint.pos[0] = stof(ctx->numeric(0)->getText());
	joint.pos[1] = stof(ctx->numeric(1)->getText());
	joint.pos[2] = stof(ctx->numeric(2)->getText());
	joint.orient[0] = stof(ctx->numeric(3)->getText());
	joint.orient[1] = stof(ctx->numeric(4)->getText());
	joint.orient[2] = stof(ctx->numeric(5)->getText());
	this->joints[currentJointIndex] = joint;
	this->currentJointIndex += 1;
}

void VoidstarMD5ModelListener::enterMesh(md5ModelParser::MeshContext*)
{
}

void VoidstarMD5ModelListener::exitMesh(md5ModelParser::MeshContext*)
{
	this->currentMeshIndex += 1;
}

void VoidstarMD5ModelListener::exitShaderPath(md5ModelParser::ShaderPathContext* ctx)
{
	this->getCurrentMesh().shaderPath = ctx->FILE_PATH()->getText();
}

void VoidstarMD5ModelListener::exitNumVerts(md5ModelParser::NumVertsContext* ctx)
{
	size_t numVerts = (size_t)stoi(ctx->INT()->getSymbol()->getText());
	this->getCurrentMesh().vertices.resize(numVerts);
}

void VoidstarMD5ModelListener::exitVert(md5ModelParser::VertContext* ctx) 
{
	md5Vertex vertex;
	vertex.index = stoi(ctx->INT(0)->getSymbol()->getText());
	vertex.st[0] = stof(ctx->numeric(0)->getText());
	vertex.st[1] = stof(ctx->numeric(1)->getText());
	vertex.startWeight = stoi(ctx->INT(1)->getSymbol()->getText());
	vertex.weightCount = stoi(ctx->INT(2)->getSymbol()->getText());
	this->getCurrentMesh().vertices[vertex.index] = vertex;
}

void VoidstarMD5ModelListener::exitNumTris(md5ModelParser::NumTrisContext* ctx)
{
	size_t numTris = (size_t)stoi(ctx->INT()->getSymbol()->getText());
	this->getCurrentMesh().triangles.resize(numTris);
}

void VoidstarMD5ModelListener::exitTri(md5ModelParser::TriContext* ctx)
{
	md5Triangle triangle;
	triangle.index = stoi(ctx->INT(0)->getSymbol()->getText());
	triangle.vert1Index = stoi(ctx->INT(1)->getSymbol()->getText());
	triangle.vert2Index = stoi(ctx->INT(2)->getSymbol()->getText());
	triangle.vert3Index = stoi(ctx->INT(3)->getSymbol()->getText());
	this->getCurrentMesh().triangles[triangle.index] = triangle;
}

void VoidstarMD5ModelListener::exitNumWeights(md5ModelParser::NumWeightsContext* ctx)
{
	size_t numWeights = (size_t)stoi(ctx->INT()->getSymbol()->getText());
	this->getCurrentMesh().weights.resize(numWeights);
}

void VoidstarMD5ModelListener::exitWeight(md5ModelParser::WeightContext* ctx)
{
	md5Weight weight;
	weight.index = stoi(ctx->INT(0)->getText());
	weight.jointIndex = stoi(ctx->INT(1)->getText());
	weight.bias = stof(ctx->numeric(0)->getText());
	weight.pos[0] = stof(ctx->numeric(1)->getText());
	weight.pos[1] = stof(ctx->numeric(2)->getText());
	weight.pos[2] = stof(ctx->numeric(3)->getText());
	this->getCurrentMesh().weights[weight.index] = weight;
}

md5Mesh& VoidstarMD5ModelListener::getCurrentMesh()
{
	return this->meshes[currentMeshIndex];
}