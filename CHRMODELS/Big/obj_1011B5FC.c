#include "../../Structs.h"

extern struct ATTACH attach_1011B5D0;
extern struct OBJECT obj_1011B4A4;

struct OBJECT obj_1011B5FC =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1011B5D0,
    { 2.763015f, -1.753244f, 0.974315f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1011B4A4
};
