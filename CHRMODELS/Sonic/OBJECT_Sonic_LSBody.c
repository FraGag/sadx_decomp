#include "../../Structs.h"

extern struct ATTACH attach_1068361C;
extern struct OBJECT obj_10682EF4;

struct OBJECT OBJECT_Sonic_LSBody =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1068361C,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10682EF4
};
