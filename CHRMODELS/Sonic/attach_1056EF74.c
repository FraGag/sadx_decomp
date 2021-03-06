#include "../../Structs.h"

static struct Vector3 vec3_1056ED48[] =
{
    { 0.980637f, -0.379148f, 0.406183f },
    { 0.971728f, 0.298185f, 0.426867f },
    { 0.448957f, -0.391492f, 0.447938f },
    { 0.439904f, 0.300097f, 0.448493f },
    { 0.979792f, -0.519462f, -0.172488f },
    { 0.96553f, 0.477504f, -0.143689f },
    { 0.447996f, -0.552516f, -0.17229f },
    { 0.433738f, 0.498992f, -0.141558f },
    { 0.447324f, -0.228099f, -0.004297f },
    { 0.445119f, -0.006709f, 0.217041f },
    { -0.003489f, -0.237236f, -0.000589f },
    { -0.005694f, -0.015846f, 0.220749f },
    { 0.443027f, -0.004536f, -0.227844f },
    { 0.440822f, 0.216854f, -0.006506f },
    { -0.007786f, -0.013673f, -0.224136f },
    { -0.009991f, 0.207717f, -0.002798f },
    { 0.971571f, -0.023831f, -0.514014f },
    { 0.439747f, -0.027768f, -0.522606f },
    { 0.592818f, -0.026571f, -0.592623f },
    { 0.58681f, 0.572796f, -0.142408f },
    { 0.601067f, -0.621268f, -0.177306f },
    { 0.602028f, -0.438413f, 0.527008f },
    { 0.592975f, 0.346937f, 0.527639f }
};

static struct Vector3 vec3_1056EE60[] =
{
    { 0.7156f, -0.454427f, 0.530483f },
    { 0.708516f, 0.426637f, 0.562125f },
    { -0.781258f, -0.401893f, 0.477616f },
    { -0.791316f, 0.362402f, 0.492427f },
    { 0.692353f, -0.663796f, -0.282882f },
    { 0.673447f, 0.695325f, -0.250983f },
    { -0.750799f, -0.60637f, -0.261948f },
    { -0.764149f, 0.601741f, -0.232342f },
    { 0.020251f, -0.999794f, -0.001643f },
    { 0.008171f, 0.002688f, 0.999963f },
    { 0.020278f, -0.999793f, 0.001592f },
    { 0.008275f, -0.002422f, 0.999963f },
    { -0.008274f, 0.002422f, -0.999963f },
    { -0.020278f, 0.999793f, -0.001592f },
    { -0.008171f, -0.002688f, -0.999963f },
    { -0.020251f, 0.999794f, 0.001643f },
    { 0.666874f, 0.02087f, -0.744879f },
    { -0.736051f, 0.006375f, -0.676896f },
    { -0.082699f, 0.014964f, -0.996462f },
    { -0.104796f, 0.956117f, -0.273603f },
    { -0.084164f, -0.94212f, -0.324539f },
    { -0.089855f, -0.601833f, 0.793551f },
    { -0.101127f, 0.566117f, 0.818099f }
};

static short unsigned int strips_1056EBB0[] =
{
    10,
    9, 10, 8, 14, 12, 15, 13, 11, 9, 10
};

static struct UV uv_1056EC28[] =
{
    { 123, 144 },
    { 51, 183 },
    { 123, 181 },
    { 50, 145 },
    { 122, 143 },
    { 49, 107 },
    { 122, 106 },
    { 50, 145 },
    { 123, 144 },
    { 51, 183 }
};

static short unsigned int strips_1056EBC8[] =
{
    6 | 0x8000,
    17, 6, 18, 20, 16, 4,
    5 | 0x8000,
    1, 5, 0, 16, 4,
    6 | 0x8000,
    0, 4, 21, 20, 2, 6,
    6 | 0x8000,
    1, 0, 22, 21, 3, 2,
    6 | 0x8000,
    5, 1, 19, 22, 7, 3,
    6 | 0x8000,
    7, 17, 19, 18, 5, 16
};

static struct UV uv_1056EC50[] =
{
    { 7, 7 },
    { 247, 7 },
    { 7, 71 },
    { 247, 71 },
    { 7, 247 },
    { 247, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 247, 247 },
    { 7, 247 },
    { 247, 71 },
    { 7, 71 },
    { 247, 7 },
    { 7, 7 },
    { 247, 247 },
    { 7, 247 },
    { 247, 71 },
    { 7, 71 },
    { 247, 7 },
    { 7, 7 },
    { 247, 247 },
    { 7, 247 },
    { 247, 71 },
    { 7, 71 },
    { 247, 7 },
    { 7, 7 },
    { 7, 7 },
    { 247, 7 },
    { 7, 71 },
    { 247, 71 },
    { 7, 247 },
    { 247, 247 }
};

static short unsigned int strips_1056EC1C[] =
{
    5 | 0x8000,
    17, 7, 6, 3, 2
};

static struct UV uv_1056ECDC[] =
{
    { 7, 175 },
    { 55, 7 },
    { 135, 247 },
    { 207, 7 },
    { 247, 175 }
};

static struct MESH mesh_1056ECF0[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1056EBB0, 0, NULL, NULL, uv_1056EC28, 0 },
    { 1 | MeshPolyType_StripsB, 6, strips_1056EBC8, 0, NULL, NULL, uv_1056EC50, 0 },
    { 2 | MeshPolyType_StripsB, 1, strips_1056EC1C, 0, NULL, NULL, uv_1056ECDC, 0 }
};

static struct MATERIAL mat_1056EB74[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000A,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1056EF74 =
{
    vec3_1056ED48,
    vec3_1056EE60,
    ARRAYSIZE(vec3_1056ED48),
    mesh_1056ECF0,
    mat_1056EB74,
    ARRAYSIZE(mesh_1056ECF0),
    ARRAYSIZE(mat_1056EB74),
    { 0.485323f, -0.024236f, -0.032492f },
    0.810728f,
    0
};
