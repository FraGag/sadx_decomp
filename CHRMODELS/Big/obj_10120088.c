#include "../../Structs.h"

extern struct ATTACH attach_1012005C;
extern struct OBJECT obj_1011F6A8;

struct OBJECT obj_10120088 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1012005C,
    { 1.0811f, -0.0316f, 0.3201f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1011F6A8
};
