#include "../../Structs.h"

extern struct ATTACH attach_102F3620;
extern struct OBJECT obj_102F1380;

struct OBJECT obj_102F364C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_102F3620,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102F1380,
    NULL
};
