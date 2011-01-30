#include "../../Structs.h"

static struct Rotation3AnimData r3ad_10728C78[] =
{
    { 0, { 8191, 0, 0 } },
    { 1, { 8140, 0, 0 } },
    { 2, { 7996, 0, 0 } },
    { 3, { 7771, 0, 0 } },
    { 4, { 7480, 0, 0 } },
    { 5, { 7136, 0, 0 } },
    { 6, { 6751, 0, 0 } },
    { 7, { 6340, 0, 0 } },
    { 8, { 5916, 0, 0 } },
    { 9, { 5491, 0, 0 } },
    { 10, { 5080, 0, 0 } },
    { 11, { 4696, 0, 0 } },
    { 12, { 4351, 0, 0 } },
    { 13, { 4060, 0, 0 } },
    { 14, { 3836, 0, 0 } },
    { 15, { 3691, 0, 0 } },
    { 16, { 3640, 0, 0 } }
};

static struct AnimFrame_PosRot afpr_10728D88[] =
{
    { NULL, r3ad_10728C78, 0, ARRAYSIZE(r3ad_10728C78) }
};

struct AnimHead2 ah2_10728D98 =
{
    afpr_10728D88,
    17,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
