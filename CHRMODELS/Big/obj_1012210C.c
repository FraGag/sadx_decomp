#include "../../Structs.h"

extern struct ATTACH attach_101220E0;
extern struct OBJECT obj_10121B8C;

struct OBJECT obj_1012210C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_101220E0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10121B8C
};
