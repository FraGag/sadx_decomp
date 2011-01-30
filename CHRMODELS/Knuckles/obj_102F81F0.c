#include "../../Structs.h"

extern struct ATTACH attach_102F81C4;
extern struct OBJECT obj_102F7DB8;

struct OBJECT obj_102F81F0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F81C4,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F7DB8
};
