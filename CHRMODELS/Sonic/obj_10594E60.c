#include "../../Structs.h"

extern struct ATTACH attach_10594E34;
extern struct OBJECT obj_10594C00;

struct OBJECT obj_10594E60 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10594E34,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10594C00
};
