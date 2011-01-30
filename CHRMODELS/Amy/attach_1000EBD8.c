#include "../../Structs.h"

static struct Vector3 vec3_1000EB18[] =
{
    { 0.737735f, -0.193282f, 0.005019f },
    { 0.736241f, -0.00177f, 0.195533f },
    { -0.010475f, -0.156796f, 0.00747f },
    { -0.007796f, 0.00271f, 0.172479f },
    { 0.734004f, 4.6E-05f, -0.1874f },
    { 0.732482f, 0.178901f, 0.003113f },
    { -0.009022f, 0.004352f, -0.159114f },
    { -0.006357f, 0.157387f, 0.005895f }
};

static struct Vector3 vec3_1000EB78[] =
{
    { -0.044255f, -0.999019f, 0.001404f },
    { -0.03234f, 0.004172f, 0.999468f },
    { -0.044266f, -0.99902f, 5E-05f },
    { -0.032308f, 0.010876f, 0.999419f },
    { -0.042475f, 0.0046f, -0.999087f },
    { -0.027657f, 0.999617f, 0.001128f },
    { -0.042409f, 0.011046f, -0.999039f },
    { -0.027659f, 0.999617f, 0.000259f }
};

static short unsigned int strips_1000EABC[] =
{
    10,
    2, 1, 3, 5, 7, 4, 6, 0, 2, 1
};

static struct UV uv_1000EAD4[] =
{
    { 113, 140 },
    { 125, 135 },
    { 113, 135 },
    { 125, 130 },
    { 113, 130 },
    { 125, 135 },
    { 113, 135 },
    { 125, 140 },
    { 113, 140 },
    { 125, 135 }
};

static struct MESH mesh_1000EAFC[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1000EABC, 0, NULL, NULL, uv_1000EAD4, 0 }
};

static struct MATERIAL mat_1000EAA8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000008,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000EBD8 =
{
    vec3_1000EB18,
    vec3_1000EB78,
    ARRAYSIZE(vec3_1000EB18),
    mesh_1000EAFC,
    mat_1000EAA8,
    ARRAYSIZE(mesh_1000EAFC),
    ARRAYSIZE(mat_1000EAA8),
    { 0.36363f, -0.007191f, 0.004066f },
    0.423449f,
    0
};
