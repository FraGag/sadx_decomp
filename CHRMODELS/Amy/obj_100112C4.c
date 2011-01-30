#include "../../Structs.h"

extern struct ATTACH attach_10011298;
extern struct OBJECT obj_10010AF8;

struct OBJECT obj_100112C4 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10011298,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10010AF8
};
