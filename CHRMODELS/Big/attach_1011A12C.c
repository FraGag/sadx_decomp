#include "../../Structs.h"

static struct Vector3 vec3_1011A0CC[] =
{
    { -1.778047f, -1.651699f, 1.900667f },
    { -1.858806f, 1.703503f, 2.097133f },
    { 1.563357f, -1.651955f, 1.97748f },
    { 1.482598f, 1.703245f, 2.173946f }
};

static struct Vector3 vec3_1011A0FC[] =
{
    { -0.022947f, -0.058991f, 0.997995f },
    { -0.022947f, -0.058991f, 0.997995f },
    { -0.022947f, -0.058991f, 0.997995f },
    { -0.022947f, -0.058991f, 0.997995f }
};

static short unsigned int strips_1011A094[] =
{
    4,
    3, 1, 2, 0
};

static struct UV uv_1011A0A0[] =
{
    { 255, 0 },
    { 0, 0 },
    { 255, 255 },
    { 0, 255 }
};

static struct MESH mesh_1011A0B0[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1011A094, 0, NULL, NULL, uv_1011A0A0, 0 }
};

static struct MATERIAL mat_1011A080[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        10.0f,
        0x0000000B,
        0xA400,
        0xB1,
        0x94
    }
};

struct ATTACH attach_1011A12C =
{
    vec3_1011A0CC,
    vec3_1011A0FC,
    ARRAYSIZE(vec3_1011A0CC),
    mesh_1011A0B0,
    mat_1011A080,
    ARRAYSIZE(mesh_1011A0B0),
    ARRAYSIZE(mat_1011A080),
    { -0.147725f, 0.025774f, 2.037307f },
    2.292422f,
    0
};
