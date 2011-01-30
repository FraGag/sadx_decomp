#include "../../Structs.h"

static struct Vector3 vec3_102F6E68[] =
{
    { 1.162208f, -0.616021f, 0.098529f },
    { 1.175285f, -0.228095f, -0.42855f },
    { 0.498797f, -0.630074f, 0.110959f },
    { 0.513516f, -0.201349f, -0.471583f },
    { 1.191697f, -0.160944f, 0.57806f },
    { 1.217895f, 0.310084f, 0.289874f },
    { 0.532324f, -0.127176f, 0.640927f },
    { 0.561195f, 0.393417f, 0.322421f },
    { 0.514152f, -0.38064f, 0.100593f },
    { 0.525989f, -0.099936f, -0.220895f },
    { 0.030406f, -0.355057f, 0.104719f },
    { 0.042244f, -0.074354f, -0.21677f },
    { 0.537524f, -0.059462f, 0.387372f },
    { 0.549362f, 0.221241f, 0.065883f },
    { 0.053778f, -0.03388f, 0.391497f },
    { 0.065616f, 0.246824f, 0.070009f },
    { 0.792204f, 0.384168f, -0.297435f },
    { 1.210019f, 0.274044f, -0.240649f },
    { 0.552081f, 0.354043f, -0.26353f },
    { 0.771078f, -0.142183f, 0.693086f },
    { 0.802608f, 0.427716f, 0.344418f },
    { 0.733535f, -0.69265f, 0.112945f },
    { 0.749887f, -0.223341f, -0.524769f }
};

static struct Vector3 vec3_102F6F80[] =
{
    { 0.63379f, -0.772687f, 0.035578f },
    { 0.658138f, -0.255178f, -0.708335f },
    { -0.702023f, -0.710185f, 0.052919f },
    { -0.692162f, -0.179029f, -0.699185f },
    { 0.683635f, -0.142647f, 0.715748f },
    { 0.738269f, 0.593253f, 0.320951f },
    { -0.669516f, -0.065694f, 0.739887f },
    { -0.645363f, 0.683903f, 0.340268f },
    { -0.05214f, -0.996492f, 0.065463f },
    { -0.011641f, -0.059154f, -0.998181f },
    { -0.052213f, -0.996872f, 0.059328f },
    { -0.011926f, -0.064603f, -0.99784f },
    { 0.011926f, 0.064603f, 0.99784f },
    { 0.052213f, 0.996872f, -0.059327f },
    { 0.01164f, 0.059154f, 0.998181f },
    { 0.05214f, 0.996492f, -0.065463f },
    { 0.050119f, 0.800888f, -0.596713f },
    { 0.72262f, 0.533612f, -0.439407f },
    { -0.653662f, 0.623767f, -0.428534f },
    { 0.017346f, -0.124031f, 0.992127f },
    { 0.067357f, 0.885716f, 0.459316f },
    { -0.041611f, -0.997005f, 0.065193f },
    { -0.015372f, -0.276816f, -0.9608f }
};

static short unsigned int strips_102F6CE0[] =
{
    10,
    13, 14, 12, 10, 8, 11, 9, 15, 13, 14
};

static struct UV uv_102F6D50[] =
{
    { 183, 211 },
    { 123, 171 },
    { 123, 211 },
    { 63, 171 },
    { 63, 211 },
    { 123, 171 },
    { 123, 211 },
    { 183, 171 },
    { 183, 211 },
    { 123, 171 }
};

static short unsigned int strips_102F6CF8[] =
{
    6,
    2, 3, 22, 16, 17, 5,
    3,
    3, 18, 16,
    5 | 0x8000,
    7, 20, 19, 4, 0,
    12,
    6, 2, 21, 22, 1, 17, 4, 5, 20, 16, 7, 18,
    7 | 0x8000,
    4, 1, 0, 21, 19, 6, 7
};

static struct UV uv_102F6D78[] =
{
    { 7, 7 },
    { 127, 7 },
    { 127, 87 },
    { 247, 87 },
    { 247, 207 },
    { 247, 207 },
    { 127, 7 },
    { 247, 7 },
    { 247, 87 },
    { 247, 7 },
    { 247, 87 },
    { 127, 87 },
    { 127, 207 },
    { 7, 207 },
    { 127, 7 },
    { 7, 7 },
    { 7, 87 },
    { 127, 87 },
    { 127, 207 },
    { 247, 207 },
    { 127, 207 },
    { 247, 207 },
    { 247, 87 },
    { 247, 87 },
    { 247, 7 },
    { 247, 7 },
    { 127, 207 },
    { 127, 207 },
    { 7, 207 },
    { 7, 87 },
    { 127, 87 },
    { 127, 7 },
    { 247, 7 }
};

static short unsigned int strips_102F6D44[] =
{
    5 | 0x8000,
    18, 7, 3, 6, 2
};

static struct UV uv_102F6DFC[] =
{
    { 207, 7 },
    { 47, 7 },
    { 247, 167 },
    { 7, 167 },
    { 127, 247 }
};

static struct MESH mesh_102F6E10[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_102F6CE0, 0, NULL, NULL, uv_102F6D50, 0 },
    { 1 | MeshPolyType_StripsB, 5, strips_102F6CF8, 0, NULL, NULL, uv_102F6D78, 0 },
    { 2 | MeshPolyType_StripsB, 1, strips_102F6D44, 0, NULL, NULL, uv_102F6DFC, 0 }
};

static struct MATERIAL mat_102F6CA4[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x29,
        0x94
    },
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

struct ATTACH attach_102F7094 =
{
    vec3_102F6E68,
    vec3_102F6F80,
    ARRAYSIZE(vec3_102F6E68),
    mesh_102F6E10,
    mat_102F6CA4,
    ARRAYSIZE(mesh_102F6E10),
    ARRAYSIZE(mat_102F6CA4),
    { 0.624151f, -0.132467f, 0.084159f },
    0.886831f,
    0
};
