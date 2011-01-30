#include "../../Structs.h"

static struct Vector3 vec3_1043A170[] =
{
    { 0.954361f, -0.277017f, 0.746925f },
    { 0.953533f, -0.277029f, -0.751261f },
    { -0.410377f, -0.277018f, 0.577692f },
    { -0.410895f, -0.277026f, -0.396058f },
    { 0.848167f, -1.801683f, 0.315537f },
    { 0.847945f, -1.801654f, -0.102671f },
    { -0.074489f, -1.145278f, 0.474018f },
    { -0.074879f, -1.145288f, -0.252595f },
    { 0.196391f, -0.277028f, -0.687381f },
    { 0.426237f, -1.046315f, -0.593235f },
    { 0.954258f, -1.161708f, 0.561631f },
    { 0.953733f, -1.1617f, -0.546587f },
    { 0.426845f, -1.046304f, 0.634984f },
    { 0.197064f, -0.277018f, 0.746453f }
};

static struct Vector3 vec3_1043A218[] =
{
    { 0.670438f, -0.123921f, 0.731544f },
    { 0.637583f, -0.135784f, -0.758321f },
    { -0.765259f, -0.360078f, 0.533593f },
    { -0.804192f, -0.365015f, -0.469083f },
    { 0.339066f, -0.854169f, 0.394245f },
    { 0.340059f, -0.885961f, -0.315331f },
    { -0.650893f, -0.554798f, 0.518205f },
    { -0.70424f, -0.586085f, -0.400687f },
    { -0.283152f, -0.199406f, -0.938116f },
    { -0.226732f, -0.401865f, -0.887185f },
    { 0.721504f, -0.245333f, 0.64749f },
    { 0.669355f, -0.343693f, -0.658664f },
    { -0.093346f, -0.299855f, 0.949407f },
    { -0.154635f, -0.186764f, 0.970158f }
};

static short unsigned int strips_1043A0A0[] =
{
    3,
    2, 3, 6,
    6 | 0x8000,
    6, 7, 3, 9, 8, 1,
    14,
    13, 2, 12, 6, 4, 7, 5, 9, 11, 1, 10, 0, 12, 13,
    5 | 0x8000,
    11, 5, 10, 4, 12
};

static struct UV uv_1043A0E0[] =
{
    { 104, 5 },
    { 104, 5 },
    { 21, 47 },
    { 21, 47 },
    { 21, 47 },
    { 104, 5 },
    { 56, 76 },
    { 115, 54 },
    { 115, 124 },
    { 115, 55 },
    { 104, 5 },
    { 56, 76 },
    { 21, 47 },
    { 3, 123 },
    { 21, 47 },
    { 3, 123 },
    { 56, 76 },
    { 48, 124 },
    { 115, 124 },
    { 47, 123 },
    { 115, 124 },
    { 56, 76 },
    { 115, 55 },
    { 48, 124 },
    { 3, 123 },
    { 47, 123 },
    { 3, 123 },
    { 56, 76 }
};

static struct MESH mesh_1043A150[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1043A0A0, 0, NULL, NULL, uv_1043A0E0, 0 }
};

static struct MATERIAL mat_1043A088[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000B,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1043A2C0 =
{
    vec3_1043A170,
    vec3_1043A218,
    ARRAYSIZE(vec3_1043A170),
    mesh_1043A150,
    mat_1043A088,
    ARRAYSIZE(mesh_1043A150),
    ARRAYSIZE(mat_1043A088),
    { 0.271733f, -1.03935f, -0.002168f },
    1.364055f,
    0
};
