#include "../../Structs.h"

static struct Vector3 vec3_1011B540[] =
{
    { 0.056455f, 0.148641f, -9E-06f },
    { -0.009795f, 0.08877f, 0.131549f },
    { -0.066251f, -0.05987f, 0.131558f },
    { -0.056458f, -0.148639f, 8E-06f },
    { 0.009791f, -0.088767f, -0.13155f },
    { 0.066247f, 0.059872f, -0.131559f }
};

static struct Vector3 vec3_1011B588[] =
{
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f }
};

static short unsigned int strips_1011B4EC[] =
{
    5 | 0x8000,
    4, 3, 0, 2, 1,
    3,
    0, 4, 5
};

static struct UV uv_1011B500[] =
{
    { 63, 254 },
    { 0, 127 },
    { 255, 127 },
    { 63, 0 },
    { 191, 0 },
    { 255, 127 },
    { 63, 254 },
    { 191, 254 }
};

static struct MESH mesh_1011B520[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1011B4EC, 0, NULL, NULL, uv_1011B500, 0 }
};

static struct MATERIAL mat_1011B4D8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000006,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1011B5D0 =
{
    vec3_1011B540,
    vec3_1011B588,
    ARRAYSIZE(vec3_1011B540),
    mesh_1011B520,
    mat_1011B4D8,
    ARRAYSIZE(mesh_1011B520),
    ARRAYSIZE(mat_1011B4D8),
    { -2E-06f, 1E-06f, 0.0f },
    0.198394f,
    0
};
