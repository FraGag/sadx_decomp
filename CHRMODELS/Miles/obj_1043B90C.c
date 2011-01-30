#include "../../Structs.h"

extern struct ATTACH attach_1043B8E0;
extern struct OBJECT obj_1043B5D0;

struct OBJECT obj_1043B90C =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1043B8E0,
    { 0.0075f, -0.068f, 0.0107f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1043B5D0
};
