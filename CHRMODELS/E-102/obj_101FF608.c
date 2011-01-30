#include "../../Structs.h"

extern struct OBJECT obj_101FF5D4;
extern struct OBJECT obj_101FF56C;

struct OBJECT obj_101FF608 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.0f, -8.40774f, -5.26466f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_101FF5D4,
    &obj_101FF56C
};
