#include "../../Structs.h"

extern struct ATTACH attach_10597D44;
extern struct OBJECT obj_10597B5C;

struct OBJECT obj_10597D70 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10597D44,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10597B5C
};
