#include "../../Structs.h"

extern struct ATTACH attach_1001E1A0;
extern struct OBJECT obj_1001DEBC;

struct OBJECT obj_1001E1CC =
{
    ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1001E1A0,
    { -0.1249f, 1.4093f, 0.0f },
    { 0, 0, 31456 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1001DEBC
};
