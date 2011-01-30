#include "../../Structs.h"

extern struct OBJECT obj_1042CD5C;
extern struct OBJECT OBJECT_Tails_Body2;

struct OBJECT obj_1042CD90 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { -0.007652f, -3.889829f, 0.997542f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1042CD5C,
    &OBJECT_Tails_Body2
};
