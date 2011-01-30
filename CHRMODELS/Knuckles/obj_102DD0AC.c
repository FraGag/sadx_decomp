#include "../../Structs.h"

extern struct ATTACH attach_102DD080;
extern struct OBJECT obj_102DC94C;

struct OBJECT obj_102DD0AC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102DD080,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102DC94C
};
