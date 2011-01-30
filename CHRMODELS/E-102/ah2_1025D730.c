#include "../../Structs.h"

static struct Vector3AnimData v3ad_1025D548[] =
{
    { 0, { 0.586f, 0.6633f, -3.3724f } },
    { 1, { 0.1666f, 0.6633f, -3.3724f } },
    { 2, { -0.2529f, 0.6633f, -3.3724f } },
    { 3, { -0.6723f, 0.6633f, -3.3724f } },
    { 4, { -1.0917f, 0.6633f, -3.3724f } },
    { 5, { -1.5111f, 0.6633f, -3.3724f } },
    { 6, { -1.9306f, 0.6633f, -3.3724f } },
    { 7, { -2.35f, 0.6633f, -3.3724f } },
    { 19, { -2.35f, 0.6633f, -3.3724f } }
};

static struct Rotation3AnimData r3ad_1025D5D8[] =
{
    { 0, { 0, 0, 0 } },
    { 7, { 0, 0, 0 } },
    { 8, { 2047, 0, 0 } },
    { 9, { 4095, 0, 0 } },
    { 10, { 6143, 0, 0 } },
    { 11, { 8191, 0, 0 } },
    { 12, { 10239, 0, 0 } },
    { 13, { 12287, 0, 0 } },
    { 14, { 14335, 0, 0 } },
    { 15, { 16383, 0, 0 } },
    { 19, { 16383, 0, 0 } }
};

static struct Vector3AnimData v3ad_1025D688[] =
{
    { 0, { -1.76f, 1.4132f, 0.0212f } },
    { 15, { -1.76f, 1.4132f, 0.0212f } },
    { 16, { -1.76f, 1.6099f, 0.0212f } },
    { 17, { -1.76f, 1.8066f, 0.0212f } },
    { 18, { -1.76f, 2.0033f, 0.0212f } },
    { 19, { -1.76f, 2.1999f, 0.0212f } }
};

static struct AnimFrame_PosRotScale afprs_1025D6E8[] =
{
    { NULL, NULL, NULL, 0, 0, 0 },
    { v3ad_1025D548, r3ad_1025D5D8, NULL, ARRAYSIZE(v3ad_1025D548), ARRAYSIZE(r3ad_1025D5D8), 0 },
    { v3ad_1025D688, NULL, NULL, ARRAYSIZE(v3ad_1025D688), 0, 0 }
};

struct AnimHead2 ah2_1025D730 =
{
    afprs_1025D6E8,
    20,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation | AnimHead2Flags_HasScale,
    0x0003
};
