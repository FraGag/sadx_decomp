#include "../../Structs.h"

extern struct ATTACH ATTACH_Sonic_Tail;

struct OBJECT OBJECT_Sonic_Tail =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &ATTACH_Sonic_Tail,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
