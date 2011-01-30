#include "../../Structs.h"

extern struct ATTACH attach_102F51F8;
extern struct OBJECT obj_102F4EE4;

struct OBJECT obj_102F5224 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F51F8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F4EE4
};
