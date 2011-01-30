#include "../../Structs.h"

extern struct ATTACH attach_102F7094;
extern struct OBJECT obj_102F6C70;

struct OBJECT obj_102F70C0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F7094,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F6C70
};
