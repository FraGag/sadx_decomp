#include "../../Structs.h"

extern struct OBJECT obj_1000B5AC;

struct OBJECT obj_1000B5E0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, -16385 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000B5AC,
    NULL
};
