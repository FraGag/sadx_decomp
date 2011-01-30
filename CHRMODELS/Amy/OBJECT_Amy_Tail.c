#include "../../Structs.h"

extern struct ATTACH ATTACH_Amy_Tail;

struct OBJECT OBJECT_Amy_Tail =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &ATTACH_Amy_Tail,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
