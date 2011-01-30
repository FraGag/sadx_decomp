#include "../../Structs.h"

static struct Vector3 vec3_10119FA8[] =
{
    { 0.336751f, -0.888433f, 1.505842f },
    { 0.285902f, 0.870516f, 1.60627f },
    { 2.489311f, -2.054399f, 1.39291f },
    { 3.224056f, -0.385401f, 1.409217f },
    { 1.002548f, 0.574499f, 1.543595f }
};

static struct Vector3 vec3_10119FE4[] =
{
    { 0.04736f, -0.034291f, 0.998289f },
    { 0.064412f, -0.055028f, 0.996405f },
    { 0.042607f, -0.028515f, 0.998685f },
    { 0.042607f, -0.028515f, 0.998685f },
    { 0.053339f, -0.04156f, 0.997711f }
};

static short unsigned int strips_10119F5C[] =
{
    4,
    3, 4, 2, 0,
    3,
    4, 1, 0
};

static struct UV uv_10119F70[] =
{
    { 7, -7 },
    { 215, -7 },
    { 7, 262 },
    { 215, 262 },
    { 183, -7 },
    { 255, -7 },
    { 247, 262 }
};

static struct MESH mesh_10119F8C[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_10119F5C, 0, NULL, NULL, uv_10119F70, 0 }
};

static struct MATERIAL mat_10119F48[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0xB9,
        0x94
    }
};

struct ATTACH attach_1011A020 =
{
    vec3_10119FA8,
    vec3_10119FE4,
    ARRAYSIZE(vec3_10119FA8),
    mesh_10119F8C,
    mat_10119F48,
    ARRAYSIZE(mesh_10119F8C),
    ARRAYSIZE(mat_10119F48),
    { 1.754979f, -0.591942f, 1.49959f },
    1.972128f,
    0
};
