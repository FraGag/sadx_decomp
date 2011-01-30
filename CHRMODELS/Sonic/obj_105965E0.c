#include "../../Structs.h"

extern struct ATTACH attach_105965B4;
extern struct OBJECT obj_105963CC;

struct OBJECT obj_105965E0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_105965B4,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_105963CC
};
