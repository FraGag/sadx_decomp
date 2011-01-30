#include "../../Structs.h"

extern struct ATTACH attach_102004CC;
extern struct OBJECT obj_101FFAC8;

struct OBJECT obj_102004F8 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_102004CC,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_101FFAC8,
    NULL
};
