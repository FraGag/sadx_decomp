#include "../../Structs.h"

static struct Vector3 vec3_10205828[] =
{
    { -0.85631f, 0.141846f, 0.861349f },
    { 1.021857f, -0.595143f, 0.861349f },
    { 1.211579f, 3.009001f, 0.861349f },
    { 1.998841f, 2.599738f, 0.861349f },
    { -0.85631f, 0.141846f, -0.909817f },
    { 1.021857f, -0.595143f, -0.909817f },
    { 1.211579f, 3.009001f, -0.909817f },
    { 1.998841f, 2.599738f, -0.909817f }
};

static struct Vector3 vec3_10205888[] =
{
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f }
};

static short unsigned int quads_102057DC[] =
{
    0, 1, 2, 3,
    6, 7, 4, 5
};

static struct UV uv_102057EC[] =
{
    { 1, 3 },
    { 3, 205 },
    { 252, 103 },
    { 252, 177 },
    { 252, 103 },
    { 252, 177 },
    { 1, 3 },
    { 3, 205 }
};

static struct MESH mesh_1020580C[] =
{
    { 0 | MeshPolyType_Quads, 2, quads_102057DC, 0, NULL, NULL, uv_102057EC, 0 }
};

static struct MATERIAL mat_102057C8[] =
{
    {
        0xFFFF0000,
        0xFFFFFFFF,
        6.0f,
        0x00000002,
        0x8400,
        0xA1,
        0x94
    }
};

struct ATTACH attach_102058E8 =
{
    vec3_10205828,
    vec3_10205888,
    ARRAYSIZE(vec3_10205828),
    mesh_1020580C,
    mat_102057C8,
    ARRAYSIZE(mesh_1020580C),
    ARRAYSIZE(mat_102057C8),
    { 0.571266f, 1.206929f, -0.024234f },
    2.35043f,
    0
};
