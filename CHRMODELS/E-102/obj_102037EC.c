#include "../../Structs.h"

extern struct ATTACH attach_102037C0;
extern struct OBJECT obj_1020323C;

struct OBJECT obj_102037EC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_102037C0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1020323C,
    NULL
};
