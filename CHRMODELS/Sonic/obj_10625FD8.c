#include "../../Structs.h"

extern struct ATTACH attach_10625FAC;
extern struct OBJECT obj_10625D80;

struct OBJECT obj_10625FD8 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10625FAC,
    { 1.0419f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10625D80,
    NULL
};
