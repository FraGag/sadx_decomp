#include "../../Structs.h"

static struct Vector3 vec3_10627A88[] =
{
    { 1.111594f, -0.657286f, -0.309564f },
    { 0.936716f, -0.480838f, 0.262451f },
    { 0.026337f, -0.296064f, -0.350255f },
    { 0.038077f, -0.404181f, 0.319791f },
    { 1.098171f, 0.592447f, -0.338749f },
    { 0.911946f, 0.405126f, 0.292431f },
    { 0.022908f, 0.193474f, -0.353224f },
    { 0.034745f, 0.279563f, 0.315469f },
    { 0.995024f, 0.689702f, -0.004259f },
    { 0.024208f, 0.427312f, -0.076565f },
    { 0.029339f, -0.520777f, -0.099248f },
    { 1.147754f, -0.041372f, -0.442673f },
    { 1.027028f, -0.781273f, -0.027513f }
};

static struct Vector3 vec3_10627B28[] =
{
    { -0.134426f, -0.601969f, -0.787124f },
    { 0.02016f, -0.43648f, 0.899488f },
    { -0.139177f, -0.364222f, -0.920854f },
    { -0.092282f, -0.523541f, 0.846988f },
    { -0.163589f, 0.609933f, -0.775384f },
    { -0.031636f, 0.444155f, 0.895391f },
    { -0.163786f, 0.356201f, -0.919943f },
    { -0.111501f, 0.489964f, 0.864583f },
    { -0.214032f, 0.974915f, 0.061082f },
    { -0.297805f, 0.940294f, -0.164799f },
    { -0.26501f, -0.934972f, -0.235789f },
    { -0.045824f, -0.023182f, -0.99868f },
    { -0.178959f, -0.983856f, -0.000924f }
};

static short unsigned int strips_106279E0[] =
{
    7,
    12, 1, 3, 5, 7, 8, 9,
    4,
    8, 4, 9, 6,
    7 | 0x8000,
    4, 6, 11, 2, 0, 10, 12,
    3,
    3, 10, 12
};

static struct UV uv_10627A18[] =
{
    { 247, 247 },
    { 247, 231 },
    { 7, 231 },
    { 247, 23 },
    { 7, 23 },
    { 247, 7 },
    { 7, 7 },
    { 85, 190 },
    { 85, 180 },
    { 39, 190 },
    { 39, 180 },
    { 78, 200 },
    { 47, 206 },
    { 79, 217 },
    { 47, 229 },
    { 79, 234 },
    { 46, 229 },
    { 76, 234 },
    { 7, 231 },
    { 7, 247 },
    { 247, 247 }
};

static struct MESH mesh_10627A6C[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_106279E0, 0, NULL, NULL, uv_10627A18, 0 }
};

static struct MATERIAL mat_106279CC[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10627BC4 =
{
    vec3_10627A88,
    vec3_10627B28,
    ARRAYSIZE(vec3_10627A88),
    mesh_10627A6C,
    mat_106279CC,
    ARRAYSIZE(mesh_10627A6C),
    ARRAYSIZE(mat_106279CC),
    { 0.585331f, -0.045785f, -0.061441f },
    0.827949f,
    0
};
