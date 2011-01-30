#include "../../Structs.h"

extern struct ATTACH attach_1020BC80;
extern struct OBJECT obj_1020B984;

struct OBJECT obj_1020BCAC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1020BC80,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1020B984,
    NULL
};
