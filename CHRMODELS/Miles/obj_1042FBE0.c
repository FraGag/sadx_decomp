#include "../../Structs.h"

extern struct ATTACH attach_1042FBB4;
extern struct OBJECT obj_1042F4B8;

struct OBJECT obj_1042FBE0 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1042FBB4,
    { 0.0047f, 0.0304f, 0.006f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1042F4B8
};
