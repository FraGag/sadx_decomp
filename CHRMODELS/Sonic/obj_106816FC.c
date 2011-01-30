#include "../../Structs.h"

extern struct ATTACH attach_106816D0;
extern struct OBJECT obj_106814C4;

struct OBJECT obj_106816FC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_106816D0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_106814C4
};
