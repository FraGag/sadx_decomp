#include "../../Structs.h"

static struct Vector3 vec3_10129820[] =
{
    { 0.056455f, 0.148641f, -9E-06f },
    { -0.009795f, 0.08877f, 0.131549f },
    { -0.066251f, -0.05987f, 0.131558f },
    { -0.056458f, -0.148639f, 8E-06f },
    { 0.009791f, -0.088767f, -0.13155f },
    { 0.066247f, 0.059872f, -0.131559f }
};

static struct Vector3 vec3_10129868[] =
{
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f },
    { 0.893132f, -0.339211f, 0.295384f }
};

static short unsigned int strips_101297CC[] =
{
    5 | 0x8000,
    4, 3, 0, 2, 1,
    3,
    0, 4, 5
};

static struct UV uv_101297E0[] =
{
    { 59, 254 },
    { 0, 135 },
    { 239, 135 },
    { 59, 15 },
    { 179, 15 },
    { 239, 135 },
    { 59, 254 },
    { 179, 254 }
};

static struct MESH mesh_10129800[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_101297CC, 0, NULL, NULL, uv_101297E0, 0 }
};

static struct MATERIAL mat_101297B8[] =
{
    {
        0xFF000000,
        0xFFFFFFFF,
        11.0f,
        0x00000006,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_101298B0 =
{
    vec3_10129820,
    vec3_10129868,
    ARRAYSIZE(vec3_10129820),
    mesh_10129800,
    mat_101297B8,
    ARRAYSIZE(mesh_10129800),
    ARRAYSIZE(mat_101297B8),
    { -2E-06f, 1E-06f, 0.0f },
    0.198498f,
    0
};
