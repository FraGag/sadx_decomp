#include "../../Structs.h"

extern struct ATTACH attach_101FE220;
extern struct OBJECT obj_101FDF7C;

struct OBJECT obj_101FE24C =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_101FE220,
    { -3.525782f, -0.162634f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_101FDF7C
};
