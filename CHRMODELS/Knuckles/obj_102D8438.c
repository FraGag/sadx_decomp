#include "../../Structs.h"

extern struct ATTACH attach_102D840C;
extern struct OBJECT obj_102D7FDC;

struct OBJECT obj_102D8438 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102D840C,
    { 0.0f, -0.001606f, -0.016737f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102D7FDC
};
