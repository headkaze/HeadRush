#include "Globals.h"

// Here are the real global values. Place a "g_" before so you know you're referencing a global
// This is the real definition

Sprite g_spriteArray[];

//
// X,Y coord of game map
//
float g_levelX = 0;
float g_levelY = 0;

//
// jump mechanics
//

bool g_jumpTrap = 0;
bool g_reJump = 0;

Sprite g_colSprite1;
Sprite g_colSprite2;

b2AABB* g_worldAABB;
b2World* g_world;
b2Vec2* g_gravity;
b2BoxDef* g_groundBoxDef;
b2BodyDef* g_groundBodyDef;
b2BoxDef* g_boxDef;
b2BodyDef* g_bodyDef;
b2Body* g_body;
b2PolyDef* g_plat;
