#include "../../Structs.h"

static struct Vector3 vec3_1014BBC0[] =
{
    { 0.0f, -5.166667f, 0.0f },
    { 2.5f, 2.583333f, 0.0f },
    { 0.0f, 2.583333f, 2.5f },
    { -2.5f, 2.583333f, 0.0f },
    { 0.0f, 2.583334f, -2.5f }
};

static struct Vector3 vec3_1014BBFC[] =
{
    { 0.0f, -1.0f, 0.0f },
    { 0.887189f, 0.461407f, 0.0f },
    { 0.0f, 0.461407f, 0.887189f },
    { -0.887188f, 0.461407f, 0.0f },
    { 0.0f, 0.461407f, -0.887188f }
};

static short unsigned int strips_1014BB70[] =
{
    8 | 0x8000,
    3, 0, 4, 1, 3, 2, 0, 1
};

static struct UV uv_1014BB84[] =
{
    { 0, 31 },
    { 111, 254 },
    { 111, 31 },
    { 223, 31 },
    { 0, 31 },
    { 111, 31 },
    { 111, 254 },
    { 223, 31 }
};

static struct MESH mesh_1014BBA4[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1014BB70, 0, NULL, NULL, uv_1014BB84, 0 }
};

static struct MATERIAL mat_1014BB5C[] =
{
    {
        0xFFFF0000,
        0xFFFFFFFF,
        11.0f,
        0x00000030,
        0xA400,
        0x21,
        0x94
    }
};

struct ATTACH attach_1014BC38 =
{
    vec3_1014BBC0,
    vec3_1014BBFC,
    ARRAYSIZE(vec3_1014BBC0),
    mesh_1014BBA4,
    mat_1014BB5C,
    ARRAYSIZE(mesh_1014BBA4),
    ARRAYSIZE(mat_1014BB5C),
    { 0.0f, -1.291667f, 0.0f },
    4.611467f,
    0
};
