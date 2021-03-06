#include <nds.h>
#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include "Box2D.h"

// Having this struct inside here means it won't make a copy each time you #include it

struct Sprite							// define the elements that construct our 'balls'
{
	u16* Gfx;
	b2CircleDef* CircleDef;
	b2BodyDef* BodyDef;
	b2Body* Body;
	
	float X;
	float Y;
	float XSpeed;
	float YSpeed;
	int Angle;
	int Status;
	int Type;
	int Action;
};

#define BG0_MAP_BASE				0
#define BG0_MAP_BASE_SUB			0

#define BG1_MAP_BASE				2
#define BG1_MAP_BASE_SUB			3

#define BG2_MAP_BASE				0
#define BG2_MAP_BASE_SUB			0

#define BG3_MAP_BASE				7
#define BG3_MAP_BASE_SUB			7

#define BG0_TILE_BASE				7
#define BG0_TILE_BASE_SUB			7

#define BG1_TILE_BASE				5
#define BG1_TILE_BASE_SUB			1

#define BG2_TILE_BASE				7
#define BG2_TILE_BASE_SUB			5

#define BG3_TILE_BASE				8
#define BG3_TILE_BASE_SUB			8

#define SCREEN_WIDTH				256
#define SCREEN_HEIGHT				192

#define LEVEL_WIDTH					512
#define LEVEL_HEIGHT				512
	
	// Defines for the physic effects
#define 	ACCEL				0.070F			// Horizontal acceleration on forced movement		( *1.5 when turning)
#define 	FRICTION			0.025F			// Speed of slowdown when no force applied
#define		MAXACCEL			3.5F			// Maximum horizontal speed
#define		BOUNCE_X_DEADEN		1.55F			// how much to deaden a horzontal bounce
#define		JUMPSPEED			4.99F			// initial speed of a jump (negetive)				( > higher jump)
#define		GRAVITY				0.18F			// force of gravity									(affects jump and bounce)
#define		BOUNCEFACTOR		0				// used to reverse a vertical drop for a bounce		( < for more bounces)
#define		BOUNCEFACTORAMOUNT	1.55F			// the amount of bounce to allow on a vertical drop	( > for smaller bounce)
#define		MAXYSPEED			4.5F			// maximum speed you can drop
#define		ROLLSPEEDLIMIT		1F				// speed at which a roll works of a platform
#define		ROLLSPEED			0.15F			// amount ball speed is affected by a roll

	// Defines for ball properties
#define		BALLSCROLLX			72				// closeness to sides to enable scrolling
#define		BALLSCROLLY			80				// closeness to top/bot to enable scrolling
#define		BALLSIZE			24				// Size of balls
#define		BALLOFFSET			4				// Ball offset of balls
#define		BALLCOUNT			16				// Number of balls

	// Defines for player (ball) status
	
#define		BALLSTATUS_NORMAL				0
#define		BALLSTATUS_JUMPING				1
#define		BALLSTATUS_FALLING				2
#define		BALLSTATUS_GROUNDTOUCH			3

	//	Defines for the balls type
	
#define		BALLTYPE_NULL		0
#define		BALLTYPE_PLAYER		1
#define		BALLTYPE_EVILBALL	2

	// Defines for ball actions
#define		ACTION_NONE			0
#define		ACTION_MOVELEFT		1
#define		ACTION_MOVERIGHT	2
#define		ACTION_SLOW			3
#define		ACTION_JUMP			4

	// Collision data (these are the decypted values from colmaps)
	
#define		PLATFORM			2				// the highest value of a decryted colmap platform

#define		BLANK				0
#define		SOLID				1
#define		JUMPTHROUGH			2
#define		CRUMBLER			3
#define		FALLER				4

#define		DEADLY				64

#define		SCALE				0.1F

#define		VELX				5.0F
#define		VELY				5.0F
#define		IMPX				0.01F
#define		IMPY				0.01F

#endif

// This means that g_playerBall; is defined externally (in Globals.cpp)

extern Sprite g_spriteArray[BALLCOUNT];
extern float g_levelX;
extern float g_levelY;

extern bool g_jumpTrap;
extern bool g_reJump;

extern Sprite g_colSprite1;
extern Sprite g_colSprite2;

extern b2AABB* g_worldAABB;
extern b2World* g_world;
extern b2Vec2* g_gravity;
extern b2BoxDef* g_groundBoxDef;
extern b2BodyDef* g_groundBodyDef;
extern b2BoxDef* g_boxDef;
extern b2BodyDef* g_bodyDef;
extern b2Body* g_body;

extern b2PolyDef* g_plat;