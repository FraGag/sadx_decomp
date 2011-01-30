#include "../../Structs.h"

extern struct ATTACH attach_1000FDCC;
extern struct OBJECT obj_1000FB34;

struct OBJECT obj_1000FDF8 =
{
    ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1000FDCC,
    { 0.714f, -0.254f, -0.001f },
    { 129, -46, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1000FB34
};
