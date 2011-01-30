#include "../../Structs.h"

extern struct OBJECT obj_10009CBC;
extern struct OBJECT OBJECT_Amy_Body;

struct OBJECT obj_10009CF0 =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.011747f, -7.582628f, 0.994253f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10009CBC,
    &OBJECT_Amy_Body
};
