#include "../../Structs.h"

extern struct ATTACH attach_10010ACC;
extern struct OBJECT obj_100108A0;

struct OBJECT obj_10010AF8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10010ACC,
    { 0.6581f, -0.0001f, 0.009f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_100108A0,
    NULL
};
