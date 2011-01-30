#include "../../Structs.h"

extern struct OBJECT obj_1041FE6C;
extern struct OBJECT OBJECT_Tails_Body;

struct OBJECT obj_1041FEA0 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { -0.007652f, -3.889829f, 0.997542f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1041FE6C,
    &OBJECT_Tails_Body
};
