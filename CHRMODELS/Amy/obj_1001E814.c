#include "../../Structs.h"

extern struct ATTACH attach_1001E7E8;
extern struct OBJECT obj_1001E1CC;

struct OBJECT obj_1001E814 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1001E7E8,
    { 0.2091f, -1.4252f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1001E1CC,
    NULL
};
