#include "../../Structs.h"

static struct Vector3 vec3_10206F58[] =
{
    { 4.360981f, -1.338852f, -0.004872f },
    { 4.360493f, -0.005238f, 1.328741f },
    { -0.067015f, -1.339015f, -0.004705f },
    { -0.067503f, -0.005403f, 1.328908f },
    { 4.360515f, -0.005238f, -1.338485f },
    { 4.360026f, 1.328374f, -0.004872f },
    { -0.067482f, -0.005403f, -1.338317f },
    { -0.067969f, 1.328209f, -0.004705f },
    { 6.049258f, 0.021824f, -0.051416f },
    { 3.830838f, 0.02126f, -0.05147f },
    { 4.938466f, 1.131541f, -0.051443f },
    { 4.938776f, 0.021542f, -1.161443f },
    { 4.939031f, -1.088458f, -0.051443f },
    { 4.938722f, 0.021542f, 1.058557f },
    { -0.946059f, -0.005925f, -0.004705f }
};

static struct Vector3 vec3_10207010[] =
{
    { 0.577468f, -0.816413f, 5E-06f },
    { 0.577368f, 0.000207f, 0.816484f },
    { -0.523818f, -0.85183f, -3E-06f },
    { -0.524034f, -0.000216f, 0.851698f },
    { 0.577332f, 0.000207f, -0.81651f },
    { 0.577232f, 0.81658f, 5E-06f },
    { -0.524056f, -0.000216f, -0.851684f },
    { -0.524272f, 0.851551f, -3E-06f },
    { 1.0f, 0.000254f, 2.4E-05f },
    { -1.0f, -0.000254f, -2.4E-05f },
    { -0.001035f, 0.999999f, 0.0f },
    { -0.000757f, 0.0f, -1.0f },
    { -0.000527f, -1.0f, 0.0f },
    { -0.000805f, 0.0f, 1.0f },
    { -1.0f, -0.000413f, -6E-06f }
};

static short unsigned int quads_10206DAC[] =
{
    0, 1, 2, 3,
    1, 5, 3, 7,
    5, 4, 7, 6,
    4, 0, 6, 2
};

static struct UV uv_10206E20[] =
{
    { 128, 254 },
    { 0, 254 },
    { 129, 0 },
    { 0, 0 },
    { 254, 254 },
    { 128, 254 },
    { 254, 0 },
    { 129, 0 },
    { 128, 254 },
    { 0, 254 },
    { 129, 0 },
    { 0, 0 },
    { 254, 254 },
    { 128, 254 },
    { 254, 0 },
    { 129, 0 }
};

static short unsigned int tris_10206DD0[] =
{
    6, 2, 14,
    3, 7, 14,
    13, 10, 9,
    14, 2, 3,
    11, 10, 8,
    10, 11, 9,
    12, 11, 8,
    11, 12, 9,
    13, 12, 8,
    12, 13, 9,
    10, 13, 8,
    14, 7, 6
};

static struct UV uv_10206E60[] =
{
    { 127, 32 },
    { 254, 32 },
    { 127, 0 },
    { 127, 32 },
    { 0, 32 },
    { 127, 0 },
    { 214, 124 },
    { 214, 18 },
    { 174, 124 },
    { 127, 0 },
    { 254, 32 },
    { 127, 32 },
    { 214, 124 },
    { 214, 18 },
    { 255, 124 },
    { 214, 18 },
    { 214, 124 },
    { 174, 124 },
    { 214, 231 },
    { 214, 124 },
    { 255, 124 },
    { 214, 124 },
    { 214, 231 },
    { 174, 124 },
    { 214, 124 },
    { 214, 231 },
    { 255, 124 },
    { 214, 231 },
    { 214, 124 },
    { 174, 124 },
    { 214, 18 },
    { 214, 124 },
    { 255, 124 },
    { 127, 0 },
    { 0, 32 },
    { 127, 32 }
};

static short unsigned int quads_10206E18[] =
{
    0, 4, 1, 5
};

static struct UV uv_10206EF0[] =
{
    { 123, 254 },
    { 0, 131 },
    { 247, 131 },
    { 123, 7 }
};

static struct MESH mesh_10206F00[] =
{
    { 0 | MeshPolyType_Quads, 4, quads_10206DAC, 0, NULL, NULL, uv_10206E20, 0 },
    { 1 | MeshPolyType_Triangles, 12, tris_10206DD0, 0, NULL, NULL, uv_10206E60, 0 },
    { 2 | MeshPolyType_Quads, 1, quads_10206E18, 0, NULL, NULL, uv_10206EF0, 0 }
};

static struct MATERIAL mat_10206D70[] =
{
    {
        0xFFFF0000,
        0xFFFFFFFF,
        6.0f,
        0x00000000,
        0x8400,
        0x21,
        0x94
    },
    {
        0xFFFFFFFF,
        0xFFFFFFFF,
        6.0f,
        0x00000001,
        0x8400,
        0x61,
        0x94
    },
    {
        0xFF7F0000,
        0xFFFFFFFF,
        6.0f,
        0x00000001,
        0x8400,
        0x61,
        0x94
    }
};

struct ATTACH attach_102070C4 =
{
    vec3_10206F58,
    vec3_10207010,
    ARRAYSIZE(vec3_10206F58),
    mesh_10206F00,
    mat_10206D70,
    ARRAYSIZE(mesh_10206F00),
    ARRAYSIZE(mat_10206D70),
    { 2.551599f, -0.00532f, -0.004789f },
    3.600821f,
    0
};
