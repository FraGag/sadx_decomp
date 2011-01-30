#include "../../Structs.h"

extern struct ATTACH attach_10625D54;
extern struct OBJECT obj_10625AA8;

struct OBJECT obj_10625D80 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10625D54,
    { 0.7069f, -0.3648f, 0.0063f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10625AA8
};
