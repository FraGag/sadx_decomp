#include "../../Structs.h"

static struct Rotation3AnimData r3ad_10388480[] =
{
    { 0, { 0, 0, 0 } },
    { 1, { 0, 0, 3629 } },
    { 2, { 0, 0, 12988 } },
    { 3, { 0, 0, 25786 } },
    { 4, { 0, 0, 39730 } },
    { 5, { 0, 0, 52528 } },
    { 6, { 0, 0, 61887 } }
};

static struct AnimFrame_PosRot afpr_103884F0[] =
{
    { NULL, r3ad_10388480, 0, ARRAYSIZE(r3ad_10388480) }
};

struct AnimHead2 ah2_10388500 =
{
    afpr_103884F0,
    7,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
