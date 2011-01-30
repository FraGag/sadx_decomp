#include "../../Structs.h"

static struct Vector3 vec3_1020C8D0[] =
{
    { 2.0f, 0.0f, -0.5f },
    { 2.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, -0.5f },
    { 0.0f, 0.0f, 0.0f },
    { 2.0f, -0.5f, 0.0f },
    { 2.0f, 0.0f, 0.0f },
    { 0.0f, -0.5f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 2.0f, 0.0f, 0.5f },
    { 2.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.5f },
    { 0.0f, 0.0f, 0.0f },
    { 2.0f, 0.5f, 0.0f },
    { 2.0f, 0.0f, 0.0f },
    { 0.0f, 0.5f, 0.0f },
    { 0.0f, 0.0f, 0.0f }
};

static struct Vector3 vec3_1020C990[] =
{
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, -1.0f, 0.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f }
};

static short unsigned int quads_1020C850[] =
{
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9, 10, 11,
    12, 13, 14, 15
};

static struct UV uv_1020C870[] =
{
    { 251, 0 },
    { 251, 255 },
    { 3, 0 },
    { 3, 255 },
    { 251, 0 },
    { 251, 255 },
    { 3, 0 },
    { 3, 255 },
    { 251, 0 },
    { 251, 255 },
    { 3, 0 },
    { 3, 255 },
    { 251, 0 },
    { 251, 255 },
    { 3, 0 },
    { 3, 255 }
};

static struct MESH mesh_1020C8B0[] =
{
    { 0 | MeshPolyType_Quads, 4, quads_1020C850, 0, NULL, NULL, uv_1020C870, 0 }
};

static struct MATERIAL mat_1020C83C[] =
{
    {
        0xFFFFFFFF,
        0x00000000,
        0.0f,
        0x0000000A,
        0x8400,
        0xB1,
        0x26
    }
};

struct ATTACH attach_1020CA50 =
{
    vec3_1020C8D0,
    vec3_1020C990,
    ARRAYSIZE(vec3_1020C8D0),
    mesh_1020C8B0,
    mat_1020C83C,
    ARRAYSIZE(mesh_1020C8B0),
    ARRAYSIZE(mat_1020C83C),
    { 1.0f, 0.0f, 0.0f },
    1.118034f,
    0
};
