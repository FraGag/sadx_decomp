#include "../../Structs.h"

extern struct ATTACH attach_102029B8;
extern struct OBJECT obj_10202744;

struct OBJECT obj_102029E4 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102029B8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10202744
};
