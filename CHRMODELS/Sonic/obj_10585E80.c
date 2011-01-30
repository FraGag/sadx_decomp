#include "../../Structs.h"

extern struct ATTACH attach_10585E54;
extern struct OBJECT obj_10585744;
extern struct OBJECT obj_10584BD0;

struct OBJECT obj_10585E80 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10585E54,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10585744,
    &obj_10584BD0
};
