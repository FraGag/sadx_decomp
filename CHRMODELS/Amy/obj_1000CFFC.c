#include "../../Structs.h"

extern struct ATTACH attach_1000CFD0;

struct OBJECT obj_1000CFFC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1000CFD0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
