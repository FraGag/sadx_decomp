#include "../../Structs.h"

static struct Vector3 vec3_1011B698[] =
{
    { 0.056454f, 0.148641f, -8E-06f },
    { -0.009835f, 0.08877f, -0.131546f },
    { -0.066291f, -0.05987f, -0.131537f },
    { -0.056458f, -0.148639f, 9E-06f },
    { 0.009831f, -0.088767f, 0.131547f },
    { 0.066287f, 0.059872f, 0.131538f }
};

static struct Vector3 vec3_1011B6E0[] =
{
    { 0.893042f, -0.339211f, -0.295656f },
    { 0.893042f, -0.339211f, -0.295656f },
    { 0.893042f, -0.339211f, -0.295656f },
    { 0.893042f, -0.339211f, -0.295656f },
    { 0.893042f, -0.339211f, -0.295656f },
    { 0.893042f, -0.339211f, -0.295656f }
};

static short unsigned int strips_1011B644[] =
{
    3,
    5, 4, 3,
    5,
    3, 2, 5, 1, 0
};

static struct UV uv_1011B658[] =
{
    { 191, 254 },
    { 63, 254 },
    { 0, 127 },
    { 0, 127 },
    { 63, 0 },
    { 191, 254 },
    { 191, 0 },
    { 255, 127 }
};

static struct MESH mesh_1011B678[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1011B644, 0, NULL, NULL, uv_1011B658, 0 }
};

static struct MATERIAL mat_1011B630[] =
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

struct ATTACH attach_1011B728 =
{
    vec3_1011B698,
    vec3_1011B6E0,
    ARRAYSIZE(vec3_1011B698),
    mesh_1011B678,
    mat_1011B630,
    ARRAYSIZE(mesh_1011B678),
    ARRAYSIZE(mat_1011B630),
    { -2E-06f, 1E-06f, 0.0f },
    0.198395f,
    0
};
