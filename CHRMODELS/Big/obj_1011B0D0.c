#include "../../Structs.h"

extern struct ATTACH attach_1011B0A4;
extern struct OBJECT obj_1011A158;

struct OBJECT obj_1011B0D0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1011B0A4,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1011A158,
    NULL
};
