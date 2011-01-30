#include "../../Structs.h"

extern struct ATTACH attach_102D9B84;
extern struct OBJECT obj_102D9754;

struct OBJECT obj_102D9BB0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102D9B84,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102D9754
};
