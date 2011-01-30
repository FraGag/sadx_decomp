#include "../../Structs.h"

extern struct ATTACH attach_102E8048;
extern struct OBJECT obj_102E7964;

struct OBJECT obj_102E8074 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102E8048,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102E7964
};
