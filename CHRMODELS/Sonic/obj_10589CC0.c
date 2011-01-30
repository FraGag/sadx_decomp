#include "../../Structs.h"

extern struct ATTACH attach_10589C94;
extern struct OBJECT obj_10589A60;

struct OBJECT obj_10589CC0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_10589C94,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_10589A60
};
