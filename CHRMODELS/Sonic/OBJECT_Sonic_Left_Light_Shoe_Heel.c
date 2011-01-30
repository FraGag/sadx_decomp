#include "../../Structs.h"

extern struct ATTACH attach_10581F8C;
extern struct OBJECT OBJECT_Sonic_Left_Light_Shoe_Toe;

struct OBJECT OBJECT_Sonic_Left_Light_Shoe_Heel =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_10581F8C,
    { 1.391f, 0.08599f, 0.1723f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &OBJECT_Sonic_Left_Light_Shoe_Toe,
    NULL
};
