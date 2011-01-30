#include "../../Structs.h"

static struct Rotation3AnimData r3ad_10728470[] =
{
    { 0, { 0, 0, -2086 } },
    { 1, { 0, 0, -1993 } },
    { 2, { 0, 0, -1755 } },
    { 3, { 0, 0, -1429 } },
    { 4, { 0, 0, -1074 } },
    { 5, { 0, 0, -748 } },
    { 6, { 0, 0, -509 } },
    { 7, { 0, 0, -417 } },
    { 8, { 0, 0, -474 } },
    { 9, { 0, 0, -627 } },
    { 10, { 0, 0, -849 } },
    { 11, { 0, 0, -1113 } },
    { 12, { 0, 0, -1390 } },
    { 13, { 0, 0, -1653 } },
    { 14, { 0, 0, -1875 } },
    { 15, { 0, 0, -2028 } },
    { 16, { 0, 0, -2086 } }
};

static struct AnimFrame_PosRot afpr_10728580[] =
{
    { NULL, r3ad_10728470, 0, ARRAYSIZE(r3ad_10728470) }
};

struct AnimHead2 ah2_10728590 =
{
    afpr_10728580,
    17,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
