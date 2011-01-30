#include "../../Structs.h"

extern struct ATTACH attach_1041FDD8;
extern struct OBJECT obj_1041ED2C;

struct OBJECT OBJECT_Tails_Body =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1041FDD8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1041ED2C
};
