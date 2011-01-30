#include "../../Structs.h"

static struct Vector3 vec3_1011E7C0[] =
{
    { -0.16973f, 1.643746f, 0.377195f },
    { -0.365965f, -6.017982f, 0.456757f },
    { -0.030307f, -6.564464f, -0.456757f },
    { -0.443874f, -4.214798f, -0.456757f },
    { -0.623715f, -7.274685f, -0.456757f },
    { -0.31869f, -7.519471f, 0.377195f },
    { -0.535985f, -7.165696f, 0.377195f },
    { 0.324123f, 0.839712f, 0.377195f }
};

static struct Vector3 vec3_1011E820[] =
{
    { 0.0f, 0.0f, -1.0f },
    { 0.017592f, -0.056077f, -0.998271f },
    { -0.84842f, 0.312894f, 0.426943f },
    { 0.052528f, -0.986224f, 0.156852f },
    { 0.313832f, 0.925736f, 0.211003f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f }
};

static short unsigned int strips_1011E740[] =
{
    6 | 0x8000,
    4, 3, 2, 1, 4, 3
};

static struct UV uv_1011E75C[] =
{
    { 0, 248 },
    { 48, 163 },
    { 159, 228 },
    { 69, 213 },
    { 0, 248 },
    { 48, 163 }
};

static short unsigned int strips_1011E750[] =
{
    4,
    7, 5, 0, 6
};

static struct UV uv_1011E774[] =
{
    { 255, 22 },
    { 82, 255 },
    { 122, 0 },
    { 23, 245 }
};

static struct MESH mesh_1011E784[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1011E740, 0, NULL, NULL, uv_1011E75C, 0 },
    { 1 | MeshPolyType_StripsB, 1, strips_1011E750, 0, NULL, NULL, uv_1011E774, 0 }
};

static struct MATERIAL mat_1011E718[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000022,
        0xA400,
        0xA1,
        0x94
    }
};

struct ATTACH attach_1011E880 =
{
    vec3_1011E7C0,
    vec3_1011E820,
    ARRAYSIZE(vec3_1011E7C0),
    mesh_1011E784,
    mat_1011E718,
    ARRAYSIZE(mesh_1011E784),
    ARRAYSIZE(mat_1011E718),
    { -0.149796f, -2.937862f, 0.0f },
    1.044463f,
    0
};
