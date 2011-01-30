#include "../../Structs.h"

extern struct ATTACH attach_102E8FF0;
extern struct OBJECT obj_102E8CC4;

struct OBJECT obj_102E901C =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102E8FF0,
    { 0.627195f, -0.633243f, 0.118473f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102E8CC4
};
