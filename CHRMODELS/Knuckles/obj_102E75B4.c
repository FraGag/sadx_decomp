#include "../../Structs.h"

extern struct ATTACH attach_102E7588;
extern struct OBJECT obj_102E6DA4;

struct OBJECT obj_102E75B4 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102E7588,
    { 1.041617f, 0.068269f, 0.215983f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102E6DA4
};
