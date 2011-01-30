#include "../../Structs.h"

extern struct ATTACH attach_10582C94;
extern struct OBJECT OBJECT_Sonic_Right_Light_Shoe_Toe;

struct OBJECT OBJECT_Sonic_Right_Light_Shoe_Heel =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10582C94,
    { 1.391f, 0.086f, -0.1723f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &OBJECT_Sonic_Right_Light_Shoe_Toe,
    NULL
};
