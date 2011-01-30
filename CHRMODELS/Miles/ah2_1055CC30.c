#include "../../Structs.h"

static struct Vector3AnimData v3ad_1055CAF0[] =
{
    { 0, { -0.2989f, -2.2163f, 0.0f } },
    { 1, { -0.2955f, -2.2442f, 0.0f } },
    { 2, { -0.286f, -2.3231f, 0.0f } },
    { 3, { -0.2713f, -2.4455f, 0.0f } },
    { 4, { -0.2522f, -2.6044f, 0.0f } },
    { 5, { -0.2296f, -2.7924f, 0.0f } },
    { 6, { -0.2043f, -3.0022f, 0.0f } },
    { 7, { -0.1773f, -3.2265f, 0.0f } },
    { 8, { -0.1494f, -3.4582f, 0.0f } },
    { 9, { -0.1216f, -3.6898f, 0.0f } },
    { 10, { -0.0946f, -3.9142f, 0.0f } },
    { 11, { -0.0693f, -4.124f, 0.0f } },
    { 12, { -0.0467f, -4.3119f, 0.0f } },
    { 13, { -0.0276f, -4.4708f, 0.0f } },
    { 14, { -0.0128f, -4.5933f, 0.0f } },
    { 15, { -0.0034f, -4.6721f, 0.0f } },
    { 16, { 0.0f, -4.7f, 0.0f } }
};

static struct Rotation3AnimData r3ad_1055CC00[] =
{
    { 0, { 0, 0, -2294 } },
    { 16, { 0, 0, -2294 } }
};

static struct AnimFrame_PosRot afpr_1055CC20[] =
{
    { v3ad_1055CAF0, r3ad_1055CC00, ARRAYSIZE(v3ad_1055CAF0), ARRAYSIZE(r3ad_1055CC00) }
};

struct AnimHead2 ah2_1055CC30 =
{
    afpr_1055CC20,
    17,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
