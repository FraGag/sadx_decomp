#include "../../Structs.h"

static struct Vector3 vec3_102023B0[] =
{
    { 0.00966f, 1.199633f, -0.606202f },
    { 0.00966f, 0.865915f, 0.884082f },
    { 1.448387f, 0.834313f, -1.031051f },
    { 1.888261f, 0.594916f, -0.761924f },
    { 0.00966f, -1.222915f, -0.557744f },
    { 0.00966f, -0.829868f, 0.918003f },
    { 1.448387f, -0.857594f, -0.997208f },
    { 1.88826f, -0.589419f, -0.738234f },
    { -0.708443f, 0.731777f, -0.369784f },
    { -0.708443f, 0.528209f, 0.53929f },
    { -0.708444f, -0.745977f, -0.340225f },
    { -0.708444f, -0.506219f, 0.559982f },
    { 0.840413f, 1.016973f, -0.602548f },
    { 0.840413f, -1.040254f, -0.561398f },
    { 1.163513f, 0.730416f, 0.504812f },
    { 1.163513f, -0.709644f, 0.533617f }
};

static struct Vector3 vec3_10202470[] =
{
    { -0.246778f, 0.729062f, -0.638412f },
    { -0.143649f, 0.627041f, 0.765627f },
    { 0.188943f, 0.486632f, -0.85293f },
    { 0.888565f, 0.446139f, -0.106825f },
    { -0.246778f, -0.754008f, -0.608747f },
    { -0.143649f, -0.595922f, 0.79009f },
    { 0.205705f, -0.512555f, -0.83365f },
    { 0.894234f, -0.438676f, -0.088937f },
    { -0.846352f, 0.392334f, -0.360224f },
    { -0.811147f, 0.364659f, 0.457236f },
    { -0.846352f, -0.406425f, -0.344247f },
    { -0.811147f, -0.346082f, 0.471453f },
    { 0.007259f, 0.782092f, -0.62312f },
    { 0.020232f, -0.803775f, -0.594589f },
    { 0.562593f, 0.597732f, 0.571144f },
    { 0.570649f, -0.568632f, 0.592467f }
};

static short unsigned int quads_10202240[] =
{
    14, 3, 12, 2,
    15, 7, 14, 3,
    13, 6, 15, 7,
    12, 2, 13, 6,
    10, 11, 8, 9,
    2, 3, 6, 7,
    1, 0, 9, 8,
    5, 1, 11, 9,
    4, 5, 10, 11,
    0, 4, 8, 10,
    13, 4, 12, 0,
    15, 5, 13, 4,
    14, 1, 15, 5,
    12, 0, 14, 1
};

static struct UV uv_102022B0[] =
{
    { 108, 211 },
    { 24, 211 },
    { 108, 38 },
    { 24, 38 },
    { 254, 28 },
    { 253, 240 },
    { 2, 30 },
    { 1, 241 },
    { 108, 211 },
    { 24, 211 },
    { 108, 38 },
    { 24, 38 },
    { 2, 244 },
    { 2, 30 },
    { 252, 243 },
    { 252, 29 },
    { 204, 0 },
    { 179, 0 },
    { 49, 0 },
    { 70, 0 },
    { 2, 207 },
    { 4, 77 },
    { 252, 201 },
    { 253, 76 },
    { 61, 25 },
    { 61, 211 },
    { 16, 23 },
    { 18, 212 },
    { 252, 243 },
    { 2, 244 },
    { 226, 117 },
    { 30, 117 },
    { 61, 25 },
    { 61, 211 },
    { 16, 23 },
    { 18, 212 },
    { 4, 122 },
    { 252, 122 },
    { 41, 245 },
    { 210, 244 },
    { 252, 27 },
    { 252, 243 },
    { 1, 27 },
    { 2, 244 },
    { 24, 38 },
    { 108, 38 },
    { 24, 211 },
    { 108, 211 },
    { 2, 244 },
    { 1, 27 },
    { 252, 243 },
    { 252, 27 },
    { 24, 38 },
    { 108, 38 },
    { 24, 211 },
    { 108, 211 }
};

static struct MESH mesh_10202390[] =
{
    { 0 | MeshPolyType_Quads, 14, quads_10202240, 0, NULL, NULL, uv_102022B0, 0 }
};

static struct MATERIAL mat_10202228[] =
{
    {
        0xFF7F7F7F,
        0xFFFFFFFF,
        6.0f,
        0x00000015,
        0x8400,
        0x21,
        0x94
    }
};

struct ATTACH attach_10202530 =
{
    vec3_102023B0,
    vec3_10202470,
    ARRAYSIZE(vec3_102023B0),
    mesh_10202390,
    mat_10202228,
    ARRAYSIZE(mesh_10202390),
    ARRAYSIZE(mat_10202228),
    { 0.589909f, -0.011641f, -0.056524f },
    1.625723f,
    0
};