#include "../../Structs.h"

extern struct OBJECT obj_1000CC28;
extern struct OBJECT obj_1000B7D4;

struct OBJECT obj_1000CC5C =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 1.087258f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000CC28,
    &obj_1000B7D4
};
