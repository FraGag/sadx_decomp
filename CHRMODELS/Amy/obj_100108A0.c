#include "../../Structs.h"

extern struct ATTACH attach_10010874;
extern struct OBJECT obj_1000FDF8;

struct OBJECT obj_100108A0 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10010874,
    { 1.1f, -0.253602f, -0.19f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1000FDF8
};
