#include "../../Structs.h"

static struct Vector3 vec3_10206C50[] =
{
    { -0.856307f, 0.141845f, -0.861349f },
    { 1.02186f, -0.595143f, -0.861349f },
    { 1.211581f, 3.009f, -0.861349f },
    { 1.998844f, 2.599737f, -0.861349f },
    { -0.856307f, 0.141845f, 0.909817f },
    { 1.02186f, -0.595143f, 0.909817f },
    { 1.211581f, 3.009f, 0.909817f },
    { 1.998844f, 2.599737f, 0.909817f }
};

static struct Vector3 vec3_10206CB0[] =
{
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, -1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f },
    { 0.0f, 0.0f, 1.0f }
};

static short unsigned int quads_10206C04[] =
{
    2, 3, 0, 1,
    4, 5, 6, 7
};

static struct UV uv_10206C14[] =
{
    { 251, 93 },
    { 251, 178 },
    { 2, 3 },
    { 3, 202 },
    { 2, 3 },
    { 3, 202 },
    { 251, 93 },
    { 251, 178 }
};

static struct MESH mesh_10206C34[] =
{
    { 0 | MeshPolyType_Quads, 2, quads_10206C04, 0, NULL, NULL, uv_10206C14, 0 }
};

static struct MATERIAL mat_10206BF0[] =
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

struct ATTACH attach_10206D10 =
{
    vec3_10206C50,
    vec3_10206CB0,
    ARRAYSIZE(vec3_10206C50),
    mesh_10206C34,
    mat_10206BF0,
    ARRAYSIZE(mesh_10206C34),
    ARRAYSIZE(mat_10206BF0),
    { 0.571268f, 1.206929f, 0.024234f },
    2.35043f,
    0
};
