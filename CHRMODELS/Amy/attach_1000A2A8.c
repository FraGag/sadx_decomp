#include "../../Structs.h"

static struct Vector3 vec3_1000A1E8[] =
{
    { 0.659201f, -0.007075f, -0.242932f },
    { 0.659527f, -0.310308f, 0.044493f },
    { -0.010666f, -0.022684f, -0.2427f },
    { -0.009622f, -0.315236f, 0.025339f },
    { 0.66011f, 0.29237f, 0.045375f },
    { 0.660497f, -0.009693f, 0.322764f },
    { -0.009829f, 0.250195f, 0.027206f },
    { -0.009214f, -0.024843f, 0.280472f }
};

static struct Vector3 vec3_1000A248[] =
{
    { 0.006192f, 0.022041f, -0.999738f },
    { -0.004834f, -0.999732f, 0.022635f },
    { 0.006831f, 0.001285f, -0.999976f },
    { -0.003689f, -0.999971f, -0.006614f },
    { -0.05781f, 0.997953f, 0.027345f },
    { -0.063865f, 0.014331f, 0.997856f },
    { -0.056972f, 0.998375f, 0.000856f },
    { -0.063424f, -0.005023f, 0.997974f }
};

static short unsigned int strips_1000A15C[] =
{
    4,
    3, 2, 1, 0,
    4,
    7, 3, 5, 1,
    4,
    6, 7, 4, 5,
    4,
    2, 6, 0, 4
};

static struct UV uv_1000A188[] =
{
    { 133, 144 },
    { 121, 144 },
    { 133, 158 },
    { 121, 158 },
    { 133, 144 },
    { 121, 144 },
    { 133, 158 },
    { 121, 158 },
    { 133, 144 },
    { 121, 144 },
    { 133, 158 },
    { 121, 158 },
    { 133, 144 },
    { 121, 144 },
    { 133, 158 },
    { 121, 158 }
};

static struct MESH mesh_1000A1C8[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1000A15C, 0, NULL, NULL, uv_1000A188, 0 }
};

static struct MATERIAL mat_1000A148[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000E,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000A2A8 =
{
    vec3_1000A1E8,
    vec3_1000A248,
    ARRAYSIZE(vec3_1000A1E8),
    mesh_1000A1C8,
    mat_1000A148,
    ARRAYSIZE(mesh_1000A1C8),
    ARRAYSIZE(mat_1000A148),
    { 0.324916f, -0.011433f, 0.039916f },
    0.43888f,
    0
};
