#include "../../Structs.h"

extern struct ATTACH attach_102048F0;
extern struct OBJECT obj_102038F0;
extern struct OBJECT obj_102004F8;

struct OBJECT obj_1020491C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_102048F0,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102038F0,
    &obj_102004F8
};
