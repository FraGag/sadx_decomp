#include "../../Structs.h"

extern struct OBJECT obj_102D66C4;
extern struct OBJECT OBJECT_Knuckles_Body;

struct OBJECT obj_102D66F8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { -0.007652f, -4.246429f, 4.035642f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102D66C4,
    &OBJECT_Knuckles_Body
};
