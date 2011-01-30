#include "../../Structs.h"

extern struct ATTACH attach_102F7BBC;
extern struct OBJECT obj_102F7774;

struct OBJECT obj_102F7BE8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F7BBC,
    { 1.039752f, 0.068311f, -0.231903f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F7774
};
