#include "../../Structs.h"

static struct Vector3 vec3_1056E528[] =
{
    { 0.358962f, -0.625023f, -0.057157f },
    { -0.077426f, -0.618865f, 0.291128f },
    { 0.322585f, 0.609168f, -0.044868f },
    { -0.112439f, 0.569602f, 0.302951f },
    { 0.463462f, -0.503726f, 0.154509f },
    { 0.150946f, -0.486464f, 0.42572f },
    { 0.435161f, 0.445768f, 0.164189f },
    { 0.115743f, 0.385202f, 0.43655f },
    { 0.480625f, -0.343679f, 0.732086f },
    { 0.279157f, -0.331914f, 0.907085f },
    { 0.466575f, 0.205457f, 0.733374f },
    { 0.258172f, 0.164027f, 0.912153f },
    { -0.130135f, 0.445538f, 0.218296f },
    { -0.103039f, -0.535884f, 0.209836f },
    { 0.238975f, -0.580454f, -0.148195f },
    { 0.207239f, 0.527353f, -0.137821f }
};

static struct Vector3 vec3_1056E5E8[] =
{
    { 0.511366f, -0.738669f, -0.439173f },
    { -0.502637f, -0.755196f, 0.420756f },
    { 0.430736f, 0.80204f, -0.413762f },
    { -0.540108f, 0.731905f, 0.41545f },
    { 0.847247f, -0.531003f, -0.01445f },
    { -0.26598f, -0.714966f, 0.646589f },
    { 0.843223f, 0.534454f, 0.057731f },
    { -0.267655f, 0.60273f, 0.751716f },
    { 0.773695f, -0.494513f, 0.396047f },
    { -0.221062f, -0.466517f, 0.856443f },
    { 0.754399f, 0.494028f, 0.432224f },
    { -0.257278f, 0.386971f, 0.885473f },
    { -0.947256f, 0.3204f, -0.007128f },
    { -0.87506f, -0.483562f, 0.020925f },
    { 0.179328f, -0.57545f, -0.797934f },
    { 0.09799f, 0.484608f, -0.869226f }
};

static short unsigned int strips_1056E420[] =
{
    4,
    4, 6, 8, 10,
    4,
    7, 5, 11, 9,
    20,
    12, 13, 1, 0, 4, 2, 6, 7, 10, 11, 8, 9, 4, 5, 1, 7, 3, 2, 15, 14,
    4,
    1, 3, 12, 15,
    4,
    2, 0, 14, 13
};

static struct UV uv_1056E478[] =
{
    { 13, 126 },
    { 241, 126 },
    { 29, 252 },
    { 225, 252 },
    { 241, 126 },
    { 13, 126 },
    { 225, 252 },
    { 29, 252 },
    { 251, 3 },
    { 3, 3 },
    { 4, 47 },
    { 4, 47 },
    { 13, 126 },
    { 250, 47 },
    { 241, 126 },
    { 241, 126 },
    { 225, 252 },
    { 225, 252 },
    { 29, 252 },
    { 29, 252 },
    { 13, 126 },
    { 13, 126 },
    { 4, 47 },
    { 241, 126 },
    { 250, 47 },
    { 250, 47 },
    { 251, 3 },
    { 3, 3 },
    { 4, 47 },
    { 250, 47 },
    { 251, 3 },
    { 251, 3 },
    { 250, 47 },
    { 4, 47 },
    { 3, 3 },
    { 3, 3 }
};

static struct MESH mesh_1056E508[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1056E420, 0, NULL, NULL, uv_1056E478, 0 }
};

static struct MATERIAL mat_1056E408[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000005,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1056E6A8 =
{
    vec3_1056E528,
    vec3_1056E5E8,
    ARRAYSIZE(vec3_1056E528),
    mesh_1056E508,
    mat_1056E408,
    ARRAYSIZE(mesh_1056E508),
    ARRAYSIZE(mat_1056E408),
    { 0.175245f, -0.007928f, 0.381979f },
    0.839391f,
    0
};
