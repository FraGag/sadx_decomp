#include "../../Structs.h"

extern struct ATTACH attach_1058B414;
extern struct OBJECT obj_1058B22C;

struct OBJECT obj_1058B440 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1058B414,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1058B22C
};
