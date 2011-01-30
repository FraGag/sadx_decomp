#include "../../Structs.h"

extern struct ATTACH attach_102F4EB8;
extern struct OBJECT obj_102F4B8C;

struct OBJECT obj_102F4EE4 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoScale,    &attach_102F4EB8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, -12203 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102F4B8C,
    NULL
};
