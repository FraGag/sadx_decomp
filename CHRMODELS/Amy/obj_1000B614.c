#include "../../Structs.h"

extern struct OBJECT obj_1000B5E0;
extern struct OBJECT obj_10009F54;

struct OBJECT obj_1000B614 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.032335f, -0.659951f, 0.387427f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000B5E0,
    &obj_10009F54
};
