#include "../../Structs.h"

extern struct ATTACH attach_101FF338;
extern struct OBJECT obj_101FE24C;

struct OBJECT obj_101FF364 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_101FF338,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_101FE24C,
    NULL
};
