#include "../../Structs.h"

static struct Vector3 vec3_1020C648[] =
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

static struct Vector3 vec3_1020C708[] =
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

static short unsigned int quads_1020C608[] =
{
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9, 10, 11,
    12, 13, 14, 15
};

static struct MESH mesh_1020C628[] =
{
    { 0 | MeshPolyType_Quads, 4, quads_1020C608, 0, NULL, NULL, NULL, 0 }
};

static struct MATERIAL mat_1020C5F4[] =
{
    {
        0xFFB2B2B2,
        0x00000000,
        0.0f,
        0x00000000,
        0x0400,
        0x90,
        0x26
    }
};

struct ATTACH attach_1020C7C8 =
{
    vec3_1020C648,
    vec3_1020C708,
    ARRAYSIZE(vec3_1020C648),
    mesh_1020C628,
    mat_1020C5F4,
    ARRAYSIZE(mesh_1020C628),
    ARRAYSIZE(mat_1020C5F4),
    { 1.0f, 0.0f, 0.0f },
    1.118034f,
    0
};
