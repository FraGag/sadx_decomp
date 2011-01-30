#include "../../Structs.h"

static struct Rotation3AnimData r3ad_1055C960[] =
{
    { 0, { 0, 0, -2730 } },
    { 15, { 0, 0, -2730 } }
};

static struct AnimFrame_PosRot afpr_1055C980[] =
{
    { NULL, r3ad_1055C960, 0, ARRAYSIZE(r3ad_1055C960) }
};

struct AnimHead2 ah2_1055C990 =
{
    afpr_1055C980,
    16,
    AnimHead2Flags_HasPosition | AnimHead2Flags_HasRotation,
    0x0002
};
