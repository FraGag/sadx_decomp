#include "../../Structs.h"

extern struct OBJECT obj_100112F8;
extern struct OBJECT obj_1000EC04;

struct OBJECT obj_1001132C =
{
    ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.741447f, 0.0f, 0.0f },
    { 0, 60, -13 },
    { 1.0f, 1.0f, 1.0f },
    &obj_100112F8,
    &obj_1000EC04
};
