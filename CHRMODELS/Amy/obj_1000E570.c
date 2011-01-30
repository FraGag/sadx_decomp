#include "../../Structs.h"

extern struct ATTACH attach_1000E544;
extern struct OBJECT obj_1000DA90;

struct OBJECT obj_1000E570 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1000E544,
    { 1.1f, -0.253566f, 0.19f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1000DA90
};
