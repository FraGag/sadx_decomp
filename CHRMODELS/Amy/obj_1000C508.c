#include "../../Structs.h"

extern struct ATTACH attach_1000C4DC;
extern struct OBJECT obj_1000BE90;

struct OBJECT obj_1000C508 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1000C4DC,
    { 1.1249f, -0.0247f, -0.001641f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000BE90,
    NULL
};
