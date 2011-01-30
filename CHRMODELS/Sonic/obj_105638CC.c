#include "../../Structs.h"

extern struct ATTACH attach_105638A0;
extern struct OBJECT obj_105630B0;

struct OBJECT obj_105638CC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_105638A0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_105630B0
};
