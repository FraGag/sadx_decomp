#include "../../Structs.h"

static struct Vector3 vec3_102E8238[] =
{
    { 0.804862f, -0.22441f, -0.012385f },
    { 0.740676f, 0.007728f, 0.213542f },
    { -0.141215f, -0.171161f, 0.002404f },
    { -0.115481f, 0.008452f, 0.182141f },
    { 0.840773f, 0.009652f, -0.215924f },
    { 0.806848f, 0.241601f, -0.015043f },
    { -0.050838f, 0.005647f, -0.181308f },
    { -0.139837f, 0.189011f, -0.00044f }
};

static struct Vector3 vec3_102E8298[] =
{
    { -0.056625f, -0.989643f, -0.131908f },
    { -0.038682f, 0.002637f, 0.999248f },
    { -0.653142f, -0.756016f, -0.042963f },
    { -0.529488f, 0.002749f, 0.848313f },
    { -0.055018f, 0.0f, -0.998485f },
    { -0.043539f, 0.989382f, -0.138664f },
    { -0.385309f, -0.005581f, -0.922771f },
    { -0.64173f, 0.765428f, -0.047988f }
};

static short unsigned int strips_102E81C0[] =
{
    10,
    5, 3, 1, 2, 0, 6, 4, 7, 5, 3,
    4,
    6, 2, 7, 3
};

static struct UV uv_102E81E0[] =
{
    { 123, 211 },
    { 63, 151 },
    { 63, 211 },
    { 123, 131 },
    { 123, 211 },
    { 183, 151 },
    { 183, 211 },
    { 123, 131 },
    { 123, 211 },
    { 63, 151 },
    { 183, 151 },
    { 123, 131 },
    { 123, 131 },
    { 63, 151 }
};

static struct MESH mesh_102E8218[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_102E81C0, 0, NULL, NULL, uv_102E81E0, 0 }
};

static struct MATERIAL mat_102E81AC[] =
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

struct ATTACH attach_102E82F8 =
{
    vec3_102E8238,
    vec3_102E8298,
    ARRAYSIZE(vec3_102E8238),
    mesh_102E8218,
    mat_102E81AC,
    ARRAYSIZE(mesh_102E8218),
    ARRAYSIZE(mat_102E81AC),
    { 0.349779f, 0.008596f, -0.001191f },
    0.588675f,
    0
};
