#include "../../Structs.h"

static struct Rotation3AnimData r3ad_10728338[] =
{
    { 0, { 0, 0, 0 } },
    { 1, { 0, 0, -23 } },
    { 2, { 0, 0, -89 } },
    { 3, { 0, 0, -192 } },
    { 4, { 0, 0, -325 } },
    { 5, { 0, 0, -483 } },
    { 6, { 0, 0, -660 } },
    { 7, { 0, 0, -848 } },
    { 8, { 0, 0, -1043 } },
    { 9, { 0, 0, -1237 } },
    { 10, { 0, 0, -1426 } },
    { 11, { 0, 0, -1602 } },
    { 12, { 0, 0, -1760 } },
    { 13, { 0, 0, -1893 } },
    { 14, { 0, 0, -1996 } },
    { 15, { 0, 0, -2062 } },
    { 16, { 0, 0, -2086 } }
};

static struct AnimFrame_PosRot afpr_10728448[] =
{
    { NULL, r3ad_10728338, 0, ARRAYSIZE(r3ad_10728338) }
};

struct AnimHead2 ah2_10728458 =
{
    afpr_10728448,
    17,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
