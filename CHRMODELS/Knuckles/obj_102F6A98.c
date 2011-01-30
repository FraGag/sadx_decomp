#include "../../Structs.h"

extern struct ATTACH attach_102F6A6C;
extern struct OBJECT obj_102F6634;

struct OBJECT obj_102F6A98 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102F6A6C,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102F6634
};
