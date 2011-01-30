#include "../../Structs.h"

extern struct ATTACH attach_1011D740;
extern struct OBJECT obj_1011D448;

struct OBJECT obj_1011D76C =
{
    ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1011D740,
    { 0.152609f, -0.071357f, -1E-05f },
    { 0, 1, -625 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1011D448
};
