#include "Globals.h"

// Here are the real global values. Place a "g_" before so you know you're referencing a global
// This is the real definition

Circle g_spriteArray[BALLCOUNT];

//
// X,Y coord of game map
//
Vector2 g_scrollPos;
Vector3 g_cameraPos;
Vector3 g_cameraStart;
Vector3 g_cameraEnd;

SizeF g_texelSize;

int g_frameCount;

//
// jump mechanics
//

bool g_jumpTrap = 0;
bool g_reJump = 0;

// box2d

float timeStep;
int iterations;

b2AABB* g_worldAABB;
b2World* g_world;
b2Vec2* g_gravity;

b2BoxDef* g_groundBoxDef;
b2BodyDef* g_groundBodyDef;
b2Body* g_groundBody;

Poly* g_platformArray[PLATFORMCOUNT];

int g_textureIDS[TEXTURECOUNT];
int g_palAddress[2];

float g_Zoom;



//