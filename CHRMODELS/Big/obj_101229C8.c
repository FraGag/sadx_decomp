#include "../../Structs.h"

extern struct ATTACH attach_1012299C;
extern struct OBJECT obj_101222AC;

struct OBJECT obj_101229C8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1012299C,
    { 0.0f, 0.75f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_101222AC
};
