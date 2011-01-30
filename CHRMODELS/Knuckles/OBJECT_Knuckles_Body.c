#include "../../Structs.h"

extern struct ATTACH attach_102D6630;

struct OBJECT OBJECT_Knuckles_Body =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoChildren,    &attach_102D6630,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, -1335 },
    { 0.896f, 1.05f, 0.976f },
    NULL,
    NULL
};
