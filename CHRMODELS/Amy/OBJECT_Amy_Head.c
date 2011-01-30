#include "../../Structs.h"

extern struct ATTACH ATTACH_Amy_Head;
extern struct OBJECT obj_10012324;

struct OBJECT OBJECT_Amy_Head =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &ATTACH_Amy_Head,
    { -0.297f, 0.0412f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10012324,
    NULL
};
