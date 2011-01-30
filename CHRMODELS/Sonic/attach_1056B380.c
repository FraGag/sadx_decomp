#include "../../Structs.h"

static struct Vector3 vec3_1056B2C0[] =
{
    { 1.253997f, -0.03539f, -0.265661f },
    { 1.251108f, -0.31542f, -0.001226f },
    { 0.009857f, -0.008766f, -0.239764f },
    { 0.006773f, -0.288792f, 0.003517f },
    { 1.258218f, 0.24313f, 0.000121f },
    { 1.255783f, -0.036909f, 0.264553f },
    { 0.014018f, 0.269756f, 0.004756f },
    { 0.011642f, -0.010285f, 0.248034f }
};

static struct Vector3 vec3_1056B320[] =
{
    { -0.012278f, -0.00095f, -0.999924f },
    { -0.030752f, -0.999523f, -0.002795f },
    { -0.012189f, 0.006422f, -0.999905f },
    { -0.030753f, -0.999524f, -0.002569f },
    { 0.012051f, 0.999924f, 0.002456f },
    { -0.004921f, -0.006121f, 0.999969f },
    { 0.012053f, 0.999924f, 0.0026f },
    { -0.004697f, 0.001173f, 0.999988f }
};

static short unsigned int strips_1056B264[] =
{
    10,
    5, 3, 1, 2, 0, 6, 4, 7, 5, 3
};

static struct UV uv_1056B27C[] =
{
    { 63, 131 },
    { 123, 251 },
    { 123, 131 },
    { 63, 251 },
    { 63, 131 },
    { 3, 251 },
    { 3, 131 },
    { 63, 251 },
    { 63, 131 },
    { 123, 251 }
};

static struct MESH mesh_1056B2A4[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1056B264, 0, NULL, NULL, uv_1056B27C, 0 }
};

static struct MATERIAL mat_1056B250[] =
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

struct ATTACH attach_1056B380 =
{
    vec3_1056B2C0,
    vec3_1056B320,
    ARRAYSIZE(vec3_1056B2C0),
    mesh_1056B2A4,
    mat_1056B250,
    ARRAYSIZE(mesh_1056B2A4),
    ARRAYSIZE(mat_1056B250),
    { 0.632495f, -0.022832f, -0.000554f },
    0.762272f,
    0
};
