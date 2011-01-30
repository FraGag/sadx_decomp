#include "../../Structs.h"

extern struct ATTACH attach_102E4E8C;
extern struct OBJECT obj_102E4A5C;

struct OBJECT obj_102E4EB8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102E4E8C,
    { 0.0f, -0.001606f, -0.016737f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102E4A5C
};
