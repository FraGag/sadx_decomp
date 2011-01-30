#include "../../Structs.h"

extern struct ATTACH attach_1056DF54;
extern struct OBJECT obj_1056DB20;

struct OBJECT obj_1056DF80 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1056DF54,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1056DB20
};
