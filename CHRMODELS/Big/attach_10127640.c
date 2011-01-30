#include "../../Structs.h"

extern struct Vector3 vec3_101275B0[6];

static struct Vector3 vec3_101275F8[] =
{
    { -0.681975f, -0.08368f, 0.726573f },
    { -0.030153f, -0.102194f, 0.994307f },
    { -0.030153f, -0.102194f, 0.994307f },
    { -0.681975f, -0.08368f, 0.726573f },
    { -0.379716f, -0.099331f, 0.919755f },
    { -0.381131f, -0.099291f, 0.919174f }
};

static short unsigned int strips_10127568[] =
{
    6 | 0x8000,
    3, 0, 4, 5, 2, 1
};

static struct UV uv_10127578[] =
{
    { 0, 254 },
    { 0, 9 },
    { 247, 255 },
    { 247, 9 },
    { 0, 254 },
    { 0, 9 }
};

static struct MESH mesh_10127590[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10127568, 0, NULL, NULL, uv_10127578, 0 }
};

static struct MATERIAL mat_10127554[] =
{
    {
        0xFFFCFC00,
        0xFFFFFFFF,
        11.0f,
        0x00000017,
        0xA400,
        0x21,
        0x94
    }
};

struct ATTACH attach_10127640 =
{
    vec3_101275B0,
    vec3_101275F8,
    ARRAYSIZE(vec3_101275B0),
    mesh_10127590,
    mat_10127554,
    ARRAYSIZE(mesh_10127590),
    ARRAYSIZE(mat_10127554),
    { 0.504252f, 0.290861f, -1.169666f },
    3.525747f,
    0
};
