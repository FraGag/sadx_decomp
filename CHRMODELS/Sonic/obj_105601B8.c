#include "../../Structs.h"

extern struct ATTACH attach_1056018C;
extern struct OBJECT OBJECT_Sonic_Left_Shoe_Heel;

struct OBJECT obj_105601B8 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1056018C,
    { -1E-06f, 0.0f, -1E-06f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &OBJECT_Sonic_Left_Shoe_Heel
};
