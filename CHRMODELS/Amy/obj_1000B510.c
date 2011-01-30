#include "../../Structs.h"

extern struct ATTACH attach_1000B4E4;
extern struct OBJECT obj_1000AE48;

struct OBJECT obj_1000B510 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1000B4E4,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1000AE48
};
