#include "../../Structs.h"

extern struct ATTACH attach_10561C3C;
extern struct OBJECT OBJECT_Sonic_Right_Shoe_Heel;

struct OBJECT obj_10561C68 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10561C3C,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &OBJECT_Sonic_Right_Shoe_Heel
};
