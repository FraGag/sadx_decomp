#include "../../Structs.h"

extern struct ATTACH attach_100122F8;
extern struct OBJECT obj_10012014;

struct OBJECT obj_10012324 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_100122F8,
    { -2E-06f, 1E-06f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10012014
};
