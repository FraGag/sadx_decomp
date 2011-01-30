#include "../../Structs.h"

extern struct ATTACH attach_1011D41C;
extern struct OBJECT obj_1011BB24;

struct OBJECT obj_1011D448 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1011D41C,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1011BB24,
    NULL
};
