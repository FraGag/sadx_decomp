#include "../../Structs.h"

extern struct ATTACH attach_1000E79C;
extern struct OBJECT obj_1000E570;
extern struct OBJECT obj_1000D7B4;

struct OBJECT obj_1000E7C8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1000E79C,
    { 0.6582f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000E570,
    &obj_1000D7B4
};
