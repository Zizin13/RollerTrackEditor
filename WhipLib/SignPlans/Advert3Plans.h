#ifndef _WHIPLIB_ADVERT3PLANS_H
#define _WHIPLIB_ADVERT3PLANS_H
//-------------------------------------------------------------------------------------------------
#include "Polygon.h"
#include "Animation.h"
//-------------------------------------------------------------------------------------------------
static float g_advert3Coords[] = {
0.000000f,
1520.671997f,
-100.241997f,
0.000000f,
-1520.671997f,
-100.241997f,
0.000000f,
-1520.671997f,
1904.670044f,
0.000000f,
1520.671997f,
1904.670044f,
};
static int g_advert3CoordsCount = sizeof(g_advert3Coords) / sizeof(float); 
//-------------------------------------------------------------------------------------------------
static tPolygon g_advert3Pols[] = {
{2,3,0,1,8704,0,0,0,0},
};
static int g_advert3PolsCount = sizeof(g_advert3Pols)/sizeof(tPolygon);
//-------------------------------------------------------------------------------------------------
static uint32 g_advert3Backs[] = {
0,
};
static int g_advert3BacksCount = sizeof(g_advert3Backs) / sizeof(uint32); 
//-------------------------------------------------------------------------------------------------
static tAnimation g_advert3Anms[] = {
{0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}},
};
static int g_advert3AnmsCount = sizeof(g_advert3Anms) / sizeof(tAnimation); 
//-------------------------------------------------------------------------------------------------
#endif
