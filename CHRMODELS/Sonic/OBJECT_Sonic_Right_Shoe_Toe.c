#include "../../Structs.h"

extern struct ATTACH ATTACH_Sonic_Right_Shoe_Toe;

struct OBJECT OBJECT_Sonic_Right_Shoe_Toe =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &ATTACH_Sonic_Right_Shoe_Toe,
    { 0.832894f, -0.799462f, 0.153083f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
