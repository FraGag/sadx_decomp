#include "../../Structs.h"

extern struct ATTACH attach_10680E00;
extern struct OBJECT obj_10680BF4;

struct OBJECT obj_10680E2C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10680E00,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10680BF4
};
