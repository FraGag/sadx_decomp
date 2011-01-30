#include "../../Structs.h"

extern struct OBJECT obj_1000B544;
extern struct OBJECT obj_1000A2D4;

struct OBJECT obj_1000B578 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.669026f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000B544,
    &obj_1000A2D4
};
