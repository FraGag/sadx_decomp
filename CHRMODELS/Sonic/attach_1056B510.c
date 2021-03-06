#include "../../Structs.h"

static struct Vector3 vec3_1056B450[] =
{
    { 0.767989f, -0.021842f, -0.28564f },
    { 0.771304f, -0.302157f, -0.004615f },
    { -0.012414f, -0.040162f, -0.26564f },
    { -0.009221f, -0.32048f, -0.001475f },
    { 0.766081f, 0.256423f, -0.002608f },
    { 0.76968f, -0.023885f, 0.278417f },
    { -0.014359f, 0.238102f, 0.000411f },
    { -0.010723f, -0.042205f, 0.264574f }
};

static struct Vector3 vec3_1056B4B0[] =
{
    { -0.015075f, 0.009551f, -0.999841f },
    { 0.012393f, -0.999915f, -0.004121f },
    { -0.014642f, -0.00301f, -0.999888f },
    { 0.012387f, -0.999918f, -0.003196f },
    { -0.034515f, 0.999398f, 0.003399f },
    { -0.006888f, 0.002588f, 0.999973f },
    { -0.034504f, 0.999396f, 0.004185f },
    { -0.00673f, -0.010117f, 0.999926f }
};

static short unsigned int strips_1056B3F4[] =
{
    10,
    5, 3, 1, 2, 0, 6, 4, 7, 5, 3
};

static struct UV uv_1056B40C[] =
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

static struct MESH mesh_1056B434[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1056B3F4, 0, NULL, NULL, uv_1056B40C, 0 }
};

static struct MATERIAL mat_1056B3E0[] =
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

struct ATTACH attach_1056B510 =
{
    vec3_1056B450,
    vec3_1056B4B0,
    ARRAYSIZE(vec3_1056B450),
    mesh_1056B434,
    mat_1056B3E0,
    ARRAYSIZE(mesh_1056B434),
    ARRAYSIZE(mat_1056B3E0),
    { 0.378472f, -0.032029f, -0.003612f },
    0.616929f,
    0
};
