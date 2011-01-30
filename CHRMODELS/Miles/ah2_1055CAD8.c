#include "../../Structs.h"

static struct Vector3AnimData v3ad_1055C9A4[] =
{
    { 0, { -0.2989f, -2.2163f, 0.0f } },
    { 15, { -0.2989f, -2.2163f, 0.0f } }
};

static struct Rotation3AnimData r3ad_1055C9C8[] =
{
    { 0, { 0, 0, -2294 } },
    { 1, { 0, 0, -2335 } },
    { 2, { 0, 0, -2439 } },
    { 3, { 0, 0, -2582 } },
    { 4, { 0, 0, -2737 } },
    { 5, { 0, 0, -2880 } },
    { 6, { 0, 0, -2984 } },
    { 7, { 0, 0, -3024 } },
    { 8, { 0, 0, -2999 } },
    { 9, { 0, 0, -2932 } },
    { 10, { 0, 0, -2835 } },
    { 11, { 0, 0, -2720 } },
    { 12, { 0, 0, -2599 } },
    { 13, { 0, 0, -2483 } },
    { 14, { 0, 0, -2386 } },
    { 15, { 0, 0, -2319 } }
};

static struct AnimFrame_PosRot afpr_1055CAC8[] =
{
    { v3ad_1055C9A4, r3ad_1055C9C8, ARRAYSIZE(v3ad_1055C9A4), ARRAYSIZE(r3ad_1055C9C8) }
};

struct AnimHead2 ah2_1055CAD8 =
{
    afpr_1055CAC8,
    16,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
