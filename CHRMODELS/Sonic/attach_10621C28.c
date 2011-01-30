#include "../../Structs.h"

static struct Vector3 vec3_10621B68[] =
{
    { 0.851494f, 0.007071f, -0.149832f },
    { 0.854808f, -0.251655f, 0.129292f },
    { -0.002783f, -0.047887f, -0.150378f },
    { -0.001353f, -0.292872f, 0.105343f },
    { 0.849585f, 0.290208f, 0.131299f },
    { 0.851381f, 0.00709f, 0.401159f },
    { -0.002494f, 0.199078f, 0.10723f },
    { -0.002855f, -0.04993f, 0.344395f }
};

static struct Vector3 vec3_10621BC8[] =
{
    { 0.004609f, 0.01438f, -0.999886f },
    { 0.037831f, -0.999014f, 0.023237f },
    { 0.008295f, -0.038931f, -0.999207f },
    { 0.038784f, -0.999246f, -0.001649f },
    { -0.09942f, 0.994678f, 0.027029f },
    { -0.06686f, 0.007723f, 0.997732f },
    { -0.098613f, 0.99512f, 0.003287f },
    { -0.063138f, -0.047165f, 0.99689f }
};

static short unsigned int strips_10621B0C[] =
{
    10,
    6, 0, 2, 1, 3, 5, 7, 4, 6, 0
};

static struct UV uv_10621B24[] =
{
    { 3, 211 },
    { 123, 235 },
    { 3, 235 },
    { 123, 211 },
    { 3, 211 },
    { 123, 193 },
    { 3, 193 },
    { 123, 211 },
    { 3, 211 },
    { 123, 235 }
};

static struct MESH mesh_10621B4C[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10621B0C, 0, NULL, NULL, uv_10621B24, 0 }
};

static struct MATERIAL mat_10621AF8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10621C28 =
{
    vec3_10621B68,
    vec3_10621BC8,
    ARRAYSIZE(vec3_10621B68),
    mesh_10621B4C,
    mat_10621AF8,
    ARRAYSIZE(mesh_10621B4C),
    ARRAYSIZE(mat_10621AF8),
    { 0.425977f, -0.001332f, 0.12539f },
    0.509847f,
    0
};
