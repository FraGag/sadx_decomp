#include "../../Structs.h"

static struct Vector3 vec3_1061BC18[] =
{
    { 0.0f, -4.104904f, 0.0f },
    { 0.0f, 2.409564f, 0.0f },
    { 1.82f, -1.370548f, 0.0f },
    { 0.0f, -1.296646f, -1.82f },
    { -1.82f, 1.216005f, 0.0f },
    { 0.0f, 0.624793f, 1.82f }
};

static struct Vector3 vec3_1061BC60[] =
{
    { -0.090983f, -0.993141f, 0.073434f },
    { 0.202558f, 0.970854f, -0.128108f },
    { 0.990169f, -0.134057f, 0.03993f },
    { -0.053919f, -0.128785f, -0.990206f },
    { -0.922807f, 0.378719f, -0.070703f },
    { 0.063512f, 0.21492f, 0.974564f }
};

static short unsigned int tris_1061BB68[] =
{
    3, 2, 0,
    2, 3, 1,
    4, 3, 0,
    3, 4, 1,
    5, 4, 0,
    4, 5, 1,
    2, 5, 0,
    5, 2, 1
};

static struct UV uv_1061BB98[] =
{
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 },
    { 0, 255 }
};

static struct MESH mesh_1061BBF8[] =
{
    { 0 | MeshPolyType_Triangles, 8, tris_1061BB68, 0, NULL, NULL, uv_1061BB98, 0 }
};

static struct MATERIAL mat_1061BB54[] =
{
    {
        0x7FA5FFFF,
        0xFFFFFFFF,
        11.0f,
        0x00000000,
        0xA400,
        0x71,
        0x95
    }
};

struct ATTACH attach_1061BCA8 =
{
    vec3_1061BC18,
    vec3_1061BC60,
    ARRAYSIZE(vec3_1061BC18),
    mesh_1061BBF8,
    mat_1061BB54,
    ARRAYSIZE(mesh_1061BBF8),
    ARRAYSIZE(mat_1061BB54),
    { 0.0f, -0.84767f, 0.0f },
    3.731216f,
    0
};
