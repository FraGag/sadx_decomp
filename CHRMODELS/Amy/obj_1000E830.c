#include "../../Structs.h"

extern struct OBJECT obj_1000E7FC;
extern struct OBJECT obj_1000CFFC;

struct OBJECT obj_1000E830 =
{
    ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.741447f, 0.0f, 0.0f },
    { 0, -33, -18 },
    { 1.0f, 1.0f, 1.0f },
    &obj_1000E7FC,
    &obj_1000CFFC
};
