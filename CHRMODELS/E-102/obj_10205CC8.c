#include "../../Structs.h"

extern struct ATTACH attach_10205C9C;
extern struct OBJECT obj_10205914;
extern struct OBJECT obj_102054C8;

struct OBJECT obj_10205CC8 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10205C9C,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10205914,
    &obj_102054C8
};
