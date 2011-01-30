#include "../../Structs.h"

extern struct ATTACH attach_1042F48C;
extern struct OBJECT obj_1042EED4;

struct OBJECT obj_1042F4B8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1042F48C,
    { 0.7116f, 0.0391f, -0.1126f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1042EED4,
    NULL
};
