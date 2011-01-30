#include "../../Structs.h"

extern struct ATTACH attach_102F6C44;
extern struct OBJECT obj_102F6A98;

struct OBJECT obj_102F6C70 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoScale,    &attach_102F6C44,
    { 0.0f, 0.0f, 0.0f },
    { 0, 3640, -7196 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102F6A98,
    NULL
};
