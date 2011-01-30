#include "../../Structs.h"

extern struct ATTACH ATTACH_Amy_Body;

struct OBJECT OBJECT_Amy_Body =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &ATTACH_Amy_Body,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    NULL
};
