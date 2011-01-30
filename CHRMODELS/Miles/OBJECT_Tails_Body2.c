#include "../../Structs.h"

extern struct ATTACH attach_1042CCC8;
extern struct OBJECT obj_1042BC1C;

struct OBJECT OBJECT_Tails_Body2 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1042CCC8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1042BC1C
};
