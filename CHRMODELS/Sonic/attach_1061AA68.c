#include "../../Structs.h"

static struct Vector3 vec3_1061A948[] =
{
    { 8.0f, 4.0f, 0.0f },
    { 0.0f, 4.0f, 0.0f },
    { 8.0f, 2.0f, -3.464102f },
    { 0.0f, 2.0f, -3.464102f },
    { 8.0f, -2.0f, -3.464102f },
    { 0.0f, -2.0f, -3.464102f },
    { 8.0f, -4.0f, 1E-06f },
    { 0.0f, -4.0f, 1E-06f },
    { 8.0f, -1.999999f, 3.464102f },
    { 0.0f, -2.0f, 3.464102f },
    { 8.0f, 2.000001f, 3.464101f },
    { 0.0f, 2.000001f, 3.464101f }
};

static struct Vector3 vec3_1061A9D8[] =
{
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 0.5f, -0.866025f },
    { 0.0f, 0.5f, -0.866025f },
    { 0.0f, -0.5f, -0.866025f },
    { 0.0f, -0.5f, -0.866025f },
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, -0.5f, 0.866026f },
    { 0.0f, -0.5f, 0.866026f },
    { 0.0f, 0.5f, 0.866025f },
    { 0.0f, 0.5f, 0.866025f }
};

static short unsigned int strips_1061A8D4[] =
{
    14,
    6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 7, 6, 5
};

static struct UV uv_1061A8F4[] =
{
    { 239, 255 },
    { 0, 195 },
    { 239, 195 },
    { 0, 75 },
    { 239, 75 },
    { 0, 15 },
    { 239, 15 },
    { 0, 75 },
    { 239, 75 },
    { 0, 195 },
    { 239, 195 },
    { 0, 255 },
    { 239, 255 },
    { 0, 195 }
};

static struct MESH mesh_1061A92C[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1061A8D4, 0, NULL, NULL, uv_1061A8F4, 0 }
};

static struct MATERIAL mat_1061A8C0[] =
{
    {
        0xFFFFFFFF,
        0xFFFFFFFF,
        11.0f,
        0x00000000,
        0xA400,
        0xB1,
        0x86
    }
};

struct ATTACH attach_1061AA68 =
{
    vec3_1061A948,
    vec3_1061A9D8,
    ARRAYSIZE(vec3_1061A948),
    mesh_1061A92C,
    mat_1061A8C0,
    ARRAYSIZE(mesh_1061A92C),
    ARRAYSIZE(mat_1061A8C0),
    { 4.0f, 0.0f, 0.0f },
    5.291502f,
    0
};
