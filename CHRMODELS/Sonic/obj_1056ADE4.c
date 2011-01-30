#include "../../Structs.h"

extern struct OBJECT obj_1056ADB0;
extern struct OBJECT OBJECT_Sonic_Body;

struct OBJECT obj_1056ADE4 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { -0.006634f, -1.443185f, -1.883338f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1056ADB0,
    &OBJECT_Sonic_Body
};
