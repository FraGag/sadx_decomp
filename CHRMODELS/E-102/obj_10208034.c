#include "../../Structs.h"

extern struct ATTACH attach_10208008;
extern struct OBJECT obj_10207A84;

struct OBJECT obj_10208034 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10208008,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10207A84,
    NULL
};
