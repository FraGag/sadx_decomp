#include "../../Structs.h"

static struct Vector3 vec3_10123FA0[] =
{
    { 2.542559f, -0.005436f, -0.873601f },
    { 0.508855f, -2.129429f, 0.886334f },
    { 0.218242f, -0.001917f, -1.732612f },
    { -0.076765f, -0.00062f, -1.771571f },
    { 2.544016f, 1.192632f, -0.428792f },
    { 2.541102f, -1.203502f, -0.428792f },
    { -0.082517f, 1.930615f, -0.85963f },
    { 0.508854f, -2.129428f, -0.859631f },
    { 2.544016f, 1.192632f, 0.460827f },
    { 2.541102f, -1.203503f, 0.460826f },
    { -0.082517f, 1.930614f, 0.886335f },
    { -0.069798f, -2.274015f, -0.879672f },
    { 2.542559f, -0.005436f, 0.905636f },
    { -0.069798f, -2.274016f, 0.904126f },
    { 0.218242f, -0.001917f, 1.759317f },
    { -0.076765f, -0.00062f, 1.796026f }
};

static struct Vector3 vec3_10124060[] =
{
    { 0.312882f, 0.038778f, -0.949f },
    { 0.322819f, -0.77005f, 0.550283f },
    { 0.216773f, 0.03304f, -0.975663f },
    { 0.130995f, 0.034325f, -0.990789f },
    { 0.308967f, 0.793853f, -0.523772f },
    { 0.436912f, -0.716569f, -0.543724f },
    { 0.301429f, 0.802224f, -0.515341f },
    { 0.321904f, -0.770346f, -0.550404f },
    { 0.343852f, 0.788342f, 0.510179f },
    { 0.439646f, -0.715361f, 0.543111f },
    { 0.332017f, 0.79814f, 0.50273f },
    { 0.222688f, -0.823748f, -0.521392f },
    { 0.348047f, 0.038072f, 0.936704f },
    { 0.222019f, -0.824489f, 0.520506f },
    { 0.233295f, 0.032506f, 0.971862f },
    { 0.126554f, 0.034031f, 0.991376f }
};

static short unsigned int strips_10123EE8[] =
{
    10,
    6, 2, 3, 7, 11, 1, 13, 14, 15, 10,
    14,
    12, 1, 9, 7, 5, 2, 0, 6, 4, 10, 8, 14, 12, 1
};

static struct UV uv_10123F20[] =
{
    { 0, 0 },
    { 29, 117 },
    { 0, 117 },
    { 57, 246 },
    { 1, 254 },
    { 57, 246 },
    { 1, 254 },
    { 29, 117 },
    { 0, 117 },
    { 0, 0 },
    { 254, 117 },
    { 57, 246 },
    { 254, 190 },
    { 57, 246 },
    { 254, 190 },
    { 29, 117 },
    { 254, 117 },
    { 0, 0 },
    { 255, 44 },
    { 0, 0 },
    { 255, 44 },
    { 29, 117 },
    { 254, 117 },
    { 57, 246 }
};

static struct MESH mesh_10123F80[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_10123EE8, 0, NULL, NULL, uv_10123F20, 0 }
};

static struct MATERIAL mat_10123ED4[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000015,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10124120 =
{
    vec3_10123FA0,
    vec3_10124060,
    ARRAYSIZE(vec3_10123FA0),
    mesh_10123F80,
    mat_10123ED4,
    ARRAYSIZE(mesh_10123F80),
    ARRAYSIZE(mat_10123ED4),
    { 1.23075f, -0.171701f, 0.012227f },
    2.757112f,
    0
};