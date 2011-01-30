#include "../../Structs.h"

extern struct ATTACH attach_102F5F50;
extern struct OBJECT obj_102F5C3C;

struct OBJECT obj_102F5F7C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F5F50,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F5C3C
};
