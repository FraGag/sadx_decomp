#include "../../Structs.h"

extern struct ATTACH attach_1001EAF8;
extern struct OBJECT obj_1001E814;

struct OBJECT obj_1001EB24 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1001EAF8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1001E814
};
