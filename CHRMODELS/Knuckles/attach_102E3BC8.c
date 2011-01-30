#include "../../Structs.h"

static struct Vector3 vec3_102E3B08[] =
{
    { 0.972203f, -0.011124f, -0.178501f },
    { 0.972196f, -0.352819f, 0.116749f },
    { 0.092227f, -0.055868f, -0.169691f },
    { 0.092737f, -0.390744f, 0.103111f },
    { 0.97219f, 0.320423f, 0.116759f },
    { 0.97215f, -0.013884f, 0.431452f },
    { 0.092734f, 0.271335f, 0.103118f },
    { 0.092153f, -0.058883f, 0.390681f }
};

static struct Vector3 vec3_102E3B68[] =
{
    { -0.002062f, 0.027331f, -0.999624f },
    { 0.029754f, -0.999515f, -0.009136f },
    { 0.000535f, -0.014538f, -0.999894f },
    { 0.030127f, -0.999276f, -0.023236f },
    { -0.067646f, 0.997699f, -0.004458f },
    { -0.033934f, 0.023573f, 0.999146f },
    { -0.067563f, 0.997519f, -0.019766f },
    { -0.032357f, -0.019883f, 0.999279f }
};

static short unsigned int strips_102E3AAC[] =
{
    10,
    5, 3, 1, 2, 0, 6, 4, 7, 5, 3
};

static struct UV uv_102E3AC4[] =
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

static struct MESH mesh_102E3AEC[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_102E3AAC, 0, NULL, NULL, uv_102E3AC4, 0 }
};

static struct MATERIAL mat_102E3A98[] =
{
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

struct ATTACH attach_102E3BC8 =
{
    vec3_102E3B08,
    vec3_102E3B68,
    ARRAYSIZE(vec3_102E3B08),
    mesh_102E3AEC,
    mat_102E3A98,
    ARRAYSIZE(mesh_102E3AEC),
    ARRAYSIZE(mat_102E3A98),
    { 0.532178f, -0.035161f, 0.126476f },
    0.535381f,
    0
};