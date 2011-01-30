#include "../../Structs.h"

extern struct ATTACH ATTACH_Sonic_Body;
extern struct OBJECT obj_10569E20;

struct OBJECT OBJECT_Sonic_Body =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &ATTACH_Sonic_Body,
    { -0.03774f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10569E20
};
