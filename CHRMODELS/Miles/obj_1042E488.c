#include "../../Structs.h"

extern struct ATTACH attach_1042E45C;
extern struct OBJECT obj_1042DD60;

struct OBJECT obj_1042E488 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1042E45C,
    { 0.0047f, 0.0241f, -0.0232f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1042DD60
};
