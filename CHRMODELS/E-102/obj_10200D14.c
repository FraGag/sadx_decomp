#include "../../Structs.h"

extern struct ATTACH attach_10200CE8;
extern struct OBJECT obj_1020098C;

struct OBJECT obj_10200D14 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10200CE8,
    { -2.067511f, 0.49302f, 0.696793f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1020098C
};
