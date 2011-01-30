#include "../../Structs.h"

extern struct ATTACH attach_1020AB90;
extern struct OBJECT obj_1020A254;

struct OBJECT obj_1020ABBC =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_1020AB90,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1020A254,
    NULL
};
