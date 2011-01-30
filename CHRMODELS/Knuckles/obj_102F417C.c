#include "../../Structs.h"

extern struct ATTACH attach_102F4150;
extern struct OBJECT obj_102F3C28;

struct OBJECT obj_102F417C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoChildren,    &attach_102F4150,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.05f, 1.0f },
    NULL,
    &obj_102F3C28
};
