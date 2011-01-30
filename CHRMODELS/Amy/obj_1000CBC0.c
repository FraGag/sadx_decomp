#include "../../Structs.h"

extern struct ATTACH attach_1000CB94;
extern struct OBJECT obj_1000C508;

struct OBJECT obj_1000CBC0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_1000CB94,
    { 1E-06f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_1000C508
};
