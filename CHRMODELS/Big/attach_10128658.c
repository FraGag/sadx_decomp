#include "../../Structs.h"

static struct Vector3 vec3_10128598[] =
{
    { -0.360447f, -0.299078f, 0.507177f },
    { 1.592383f, -0.169577f, 0.602459f },
    { 1.633363f, 0.2839f, -0.619141f },
    { 1.159839f, -0.373951f, -0.610292f },
    { 1.96636f, -0.455121f, -0.613367f },
    { 1.951815f, -0.033544f, 0.493386f },
    { 1.921491f, -0.334974f, 0.496541f },
    { -0.291528f, 0.385991f, 0.500005f }
};

static struct Vector3 vec3_101285F8[] =
{
    { -0.004817f, -0.009983f, -0.999939f },
    { -0.004818f, -0.009982f, -0.999939f },
    { -0.088715f, -0.897838f, 0.431297f },
    { 0.828638f, 0.376612f, 0.414153f },
    { -0.733825f, 0.53386f, 0.420111f },
    { -0.004817f, -0.009983f, -0.999939f },
    { -0.004817f, -0.009983f, -0.999939f },
    { -0.004817f, -0.009983f, -0.999939f }
};

static short unsigned int strips_10128518[] =
{
    6 | 0x8000,
    1, 2, 3, 4, 1, 2
};

static struct UV uv_10128534[] =
{
    { 60, 218 },
    { 139, 231 },
    { 42, 174 },
    { 0, 249 },
    { 60, 218 },
    { 139, 231 }
};

static short unsigned int strips_10128528[] =
{
    4,
    7, 5, 0, 6
};

static struct UV uv_1012854C[] =
{
    { 199, 254 },
    { 0, 97 },
    { 223, 151 },
    { 10, 51 }
};

static struct MESH mesh_1012855C[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10128518, 0, NULL, NULL, uv_10128534, 0 },
    { 1 | MeshPolyType_StripsB, 1, strips_10128528, 0, NULL, NULL, uv_1012854C, 0 }
};

static struct MATERIAL mat_101284F0[] =
{
    {
        0xFF000000,
        0xFFFFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x94
    },
    {
        0xFFFFFFFF,
        0xFFFFFFFF,
        11.0f,
        0x00000022,
        0xA400,
        0xA1,
        0x94
    }
};

struct ATTACH attach_10128658 =
{
    vec3_10128598,
    vec3_101285F8,
    ARRAYSIZE(vec3_10128598),
    mesh_1012855C,
    mat_101284F0,
    ARRAYSIZE(mesh_1012855C),
    ARRAYSIZE(mat_101284F0),
    { 0.802956f, -0.034565f, -0.008341f },
    1.303366f,
    0
};
