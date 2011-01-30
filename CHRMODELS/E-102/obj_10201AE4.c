#include "../../Structs.h"

extern struct ATTACH attach_10201AB8;
extern struct OBJECT obj_10200D14;

struct OBJECT obj_10201AE4 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoScale,    &attach_10201AB8,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, -32718 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10200D14,
    NULL
};
