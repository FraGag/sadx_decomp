#include "../../Structs.h"

static struct Vector3AnimData v3ad_107285A8[] =
{
    { 0, { 0.0f, -5.2f, 0.0f } },
    { 1, { 0.0f, -5.2167f, 0.0f } },
    { 2, { 0.0f, -5.2599f, 0.0f } },
    { 3, { 0.0f, -5.319f, 0.0f } },
    { 4, { 0.0f, -5.3833f, 0.0f } },
    { 5, { 0.0f, -5.4423f, 0.0f } },
    { 6, { 0.0f, -5.4855f, 0.0f } },
    { 7, { 0.0f, -5.5022f, 0.0f } },
    { 8, { 0.0f, -5.4919f, 0.0f } },
    { 9, { 0.0f, -5.4641f, 0.0f } },
    { 10, { 0.0f, -5.4239f, 0.0f } },
    { 11, { 0.0f, -5.3762f, 0.0f } },
    { 12, { 0.0f, -5.326f, 0.0f } },
    { 13, { 0.0f, -5.2784f, 0.0f } },
    { 14, { 0.0f, -5.2381f, 0.0f } },
    { 15, { 0.0f, -5.2104f, 0.0f } }
};

static struct Rotation3AnimData r3ad_107286A8[] =
{
    { 0, { -3337, 0, 1668 } },
    { 15, { -3337, 0, 1668 } }
};

static struct AnimFrame_PosRot afpr_107286C8[] =
{
    { v3ad_107285A8, r3ad_107286A8, ARRAYSIZE(v3ad_107285A8), ARRAYSIZE(r3ad_107286A8) }
};

struct AnimHead2 ah2_107286D8 =
{
    afpr_107286C8,
    16,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
