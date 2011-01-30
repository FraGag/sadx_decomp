#include "../../Structs.h"

extern struct ATTACH attach_1011F67C;
extern struct OBJECT obj_1011F384;

struct OBJECT obj_1011F6A8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1011F67C,
    { 0.4557f, -0.7258f, 0.0688f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1011F384
};
