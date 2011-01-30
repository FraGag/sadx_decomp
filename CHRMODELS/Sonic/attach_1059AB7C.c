#include "../../Structs.h"

static struct Vector3 vec3_1059AA70[] =
{
    { 1.598947f, 0.353152f, -0.153446f },
    { 1.581567f, 0.487715f, -0.011289f },
    { 1.563251f, 0.373731f, 0.111564f },
    { 1.581002f, 0.042841f, 0.178491f },
    { 1.541812f, -0.300849f, 0.099799f },
    { 1.54773f, -0.413863f, -0.031521f },
    { 1.566326f, -0.32489f, -0.17202f },
    { 1.618669f, 0.009771f, -0.204092f },
    { 1.627482f, 0.010752f, -0.14283f },
    { 1.628946f, 0.018723f, -0.002055f },
    { 1.59508f, 0.032352f, 0.124186f }
};

static struct Vector3 vec3_1059AAF8[] =
{
    { 0.995479f, 0.092833f, 0.020094f },
    { 0.985873f, 0.097895f, 0.135911f },
    { 0.966224f, 0.100704f, 0.237214f },
    { 0.966977f, -0.018253f, 0.254209f },
    { 0.961418f, -0.182428f, 0.205903f },
    { 0.978253f, -0.183996f, 0.095745f },
    { 0.983297f, -0.181999f, 0.001764f },
    { 0.988757f, -0.048444f, -0.141467f },
    { 0.997339f, -0.046729f, -0.05596f },
    { 0.991215f, -0.045224f, 0.124292f },
    { 0.969389f, -0.042347f, 0.241849f }
};

static short unsigned int strips_1059A9E8[] =
{
    7 | 0x8000,
    7, 8, 0, 9, 1, 10, 2,
    9,
    2, 3, 10, 4, 9, 5, 8, 6, 7
};

static struct UV uv_1059AA10[] =
{
    { 186, 65 },
    { 200, 65 },
    { 199, 16 },
    { 221, 65 },
    { 219, 2 },
    { 243, 65 },
    { 242, 16 },
    { 242, 16 },
    { 254, 65 },
    { 243, 65 },
    { 243, 115 },
    { 221, 65 },
    { 220, 127 },
    { 200, 65 },
    { 199, 115 },
    { 186, 65 }
};

static struct MESH mesh_1059AA50[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1059A9E8, 0, NULL, NULL, uv_1059AA10, 0 }
};

static struct MATERIAL mat_1059A9D4[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x96
    }
};

struct ATTACH attach_1059AB7C =
{
    vec3_1059AA70,
    vec3_1059AAF8,
    ARRAYSIZE(vec3_1059AA70),
    mesh_1059AA50,
    mat_1059A9D4,
    ARRAYSIZE(mesh_1059AA50),
    ARRAYSIZE(mat_1059A9D4),
    { 1.585379f, 0.036926f, -0.012801f },
    0.452745f,
    0
};
