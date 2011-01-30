#include "../../Structs.h"

extern struct OBJECT obj_1000B578;
extern struct OBJECT obj_1000A114;

struct OBJECT obj_1000B5AC =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 1.087259f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000B578,
    &obj_1000A114
};
