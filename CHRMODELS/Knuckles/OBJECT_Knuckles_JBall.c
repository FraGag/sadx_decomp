#include "../../Structs.h"

extern struct ATTACH attach_102F0DF8;

struct OBJECT OBJECT_Knuckles_JBall =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F0DF8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
