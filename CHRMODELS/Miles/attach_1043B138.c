#include "../../Structs.h"

static struct Vector3 vec3_1043AFB8[] =
{
    { 0.154033f, -0.607665f, 0.154861f },
    { 0.229219f, -0.570753f, -0.411569f },
    { 0.123216f, 0.663256f, 0.180983f },
    { 0.199541f, 0.653082f, -0.386396f },
    { 0.456542f, -0.476169f, 0.142703f },
    { 0.524384f, -0.435727f, -0.27238f },
    { 0.432871f, 0.501604f, 0.162402f },
    { 0.500697f, 0.462347f, -0.263757f },
    { 0.837435f, -0.291301f, -0.10113f },
    { 0.88126f, -0.264569f, -0.36876f },
    { 0.821733f, 0.273939f, -0.085585f },
    { 0.866733f, 0.246397f, -0.364232f },
    { 0.04901f, 0.519558f, -0.306992f },
    { 0.073734f, -0.490948f, -0.330071f },
    { -0.012967f, 0.579848f, 0.090555f },
    { 0.014803f, -0.560866f, 0.065955f }
};

static struct Vector3 vec3_1043B078[] =
{
    { -0.160409f, -0.752757f, 0.638456f },
    { 0.037425f, -0.670831f, -0.740665f },
    { -0.193227f, 0.748073f, 0.634863f },
    { 0.008114f, 0.722073f, -0.691769f },
    { 0.436398f, -0.579109f, 0.688614f },
    { 0.421559f, -0.681937f, -0.597704f },
    { 0.476195f, 0.533839f, 0.698752f },
    { 0.494144f, 0.647229f, -0.580445f },
    { 0.787368f, -0.459464f, 0.411029f },
    { 0.638836f, -0.392512f, -0.661682f },
    { 0.796343f, 0.427399f, 0.427981f },
    { 0.634753f, 0.390864f, -0.666569f },
    { -0.60972f, 0.434324f, -0.663026f },
    { -0.513098f, -0.542834f, -0.664877f },
    { -0.754101f, 0.502198f, 0.423237f },
    { -0.631054f, -0.665313f, 0.398911f }
};

static short unsigned int strips_1043AEB0[] =
{
    4,
    6, 4, 10, 8,
    4,
    5, 7, 9, 11,
    4,
    12, 14, 2, 0,
    4,
    3, 1, 13, 15,
    20,
    14, 15, 0, 1, 5, 3, 7, 6, 11, 10, 9, 8, 5, 4, 0, 6, 2, 3, 12, 13
};

static struct UV uv_1043AF08[] =
{
    { 123, 195 },
    { 3, 195 },
    { 123, 251 },
    { 3, 251 },
    { 3, 195 },
    { 123, 195 },
    { 3, 251 },
    { 123, 251 },
    { 123, 131 },
    { 123, 131 },
    { 123, 151 },
    { 3, 151 },
    { 123, 151 },
    { 3, 151 },
    { 3, 131 },
    { 3, 131 },
    { 123, 131 },
    { 3, 131 },
    { 3, 151 },
    { 3, 151 },
    { 3, 195 },
    { 123, 151 },
    { 123, 195 },
    { 123, 195 },
    { 123, 251 },
    { 123, 251 },
    { 3, 251 },
    { 3, 251 },
    { 3, 195 },
    { 3, 195 },
    { 3, 151 },
    { 123, 195 },
    { 123, 151 },
    { 123, 151 },
    { 123, 131 },
    { 3, 131 }
};

static struct MESH mesh_1043AF98[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1043AEB0, 0, NULL, NULL, uv_1043AF08, 0 }
};

static struct MATERIAL mat_1043AE98[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1043B138 =
{
    vec3_1043AFB8,
    vec3_1043B078,
    ARRAYSIZE(vec3_1043AFB8),
    mesh_1043AF98,
    mat_1043AE98,
    ARRAYSIZE(mesh_1043AF98),
    ARRAYSIZE(mat_1043AE98),
    { 0.434146f, 0.027795f, -0.115293f },
    0.865102f,
    0
};
