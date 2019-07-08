/** Grammar for parsing and lexing iD Software's MD5 model format **/
grammar md5Model ;
options { language=Cpp; }

/*
 * Parser Rules
 */
model : version cl numJoints numMeshes jointList mesh* ;
cl : COMMANDLINE DBL_QUOTE MESH FILE_PATH option* DBL_QUOTE ;
option : '-' ID (ID | FILE_PATH)+ ;
version : MD5VERSION INT ;
numJoints : NUM_JOINTS INT ;
numMeshes : NUM_MESHES INT ;
numeric : FLOAT | INT ;
jointList : JOINTS '{' joint* '}' ;
joint : DBL_QUOTE ID DBL_QUOTE INT '(' numeric numeric numeric ')' '(' numeric numeric numeric ')' ;
mesh : MESH '{' shaderPath vertList triList weightsList '}' ;
shaderPath : SHADER DBL_QUOTE FILE_PATH DBL_QUOTE ;
vertList : numVerts vert* ;
numVerts : NUM_VERTS INT ;
vert : VERT INT '(' numeric numeric ')' INT INT ;
triList : numTris tri* ;
numTris : NUM_TRIS INT ;
tri : TRI INT INT INT INT ;
weightsList : numWeights weight* ;
numWeights : NUM_WEIGHTS INT ;
weight : WEIGHT INT INT numeric '(' numeric numeric numeric ')' ;

/*
 * Lexer Rules
 */
MD5VERSION : 'MD5Version' ;
NUM_JOINTS : 'numJoints' ;
NUM_MESHES : 'numMeshes' ;
NUM_VERTS : 'numverts' ;
NUM_TRIS : 'numtris' ;
NUM_WEIGHTS : 'numweights' ;
MESH : 'mesh' ;
VERT : 'vert' ;
JOINTS : 'joints' ;
SHADER : 'shader' ;
TRI : 'tri' ;
WEIGHT : 'weight' ;
DBL_QUOTE : '"' ;
COMMENT: '//' ~[\r\n]* -> skip ;
WHITESPACE: [ \n\r\t]+ -> skip ;
COMMANDLINE : 'commandline';
fragment DIGIT: [0-9] ;
fragment CHAR: [a-zA-Z] ;
fragment NUMBER: DIGIT+ ;
INT: '-'? NUMBER ;
FLOAT: INT ('.' NUMBER)? ;
ID : [A-Za-z][A-Za-z0-9_]+ ;
FILE_NAME : ID ('.' ID)? ;
FILE_PATH : ID ('/' (ID | FILE_NAME))* ;
