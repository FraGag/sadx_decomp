#include "../../Structs.h"

static struct Vector3 vec3_1056DA18[] =
{
    { 1.106578f, -0.657073f, 0.400039f },
    { 0.894223f, -0.620656f, -0.203431f },
    { 0.179774f, -0.457303f, 0.314442f },
    { 0.085009f, -0.449908f, -0.187376f },
    { 1.110306f, 0.558568f, 0.425058f },
    { 0.897818f, 0.551838f, -0.179299f },
    { 0.182324f, 0.374253f, 0.331557f },
    { 0.087558f, 0.381647f, -0.170261f },
    { 0.795938f, -0.064072f, 0.564751f }
};

static struct Vector3 vec3_1056DA88[] =
{
    { -0.075863f, -0.725667f, 0.683851f },
    { -0.179251f, -0.795031f, -0.579478f },
    { -0.641132f, -0.55277f, 0.532348f },
    { -0.683492f, -0.493506f, -0.537858f },
    { -0.074946f, 0.694489f, 0.715589f },
    { -0.174105f, 0.819089f, -0.546608f },
    { -0.634969f, 0.537307f, 0.555082f },
    { -0.682195f, 0.516707f, -0.517324f },
    { 0.013837f, -0.026719f, 0.999547f }
};

static short unsigned int strips_1056D974[] =
{
    3,
    8, 2, 0,
    8,
    4, 5, 6, 7, 2, 3, 0, 1,
    4,
    5, 1, 7, 3,
    5 | 0x8000,
    2, 6, 8, 4, 0
};

static struct UV uv_1056D9A8[] =
{
    { 78, 194 },
    { 28, 220 },
    { 105, 231 },
    { 103, 154 },
    { 88, 156 },
    { 27, 167 },
    { 21, 168 },
    { 28, 220 },
    { 22, 221 },
    { 105, 231 },
    { 90, 231 },
    { 204, 7 },
    { 209, 253 },
    { 0, 46 },
    { 3, 220 },
    { 28, 220 },
    { 27, 167 },
    { 78, 194 },
    { 103, 154 },
    { 105, 231 }
};

static struct MESH mesh_1056D9F8[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1056D974, 0, NULL, NULL, uv_1056D9A8, 0 }
};

static struct MATERIAL mat_1056D960[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000003,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1056DAF4 =
{
    vec3_1056DA18,
    vec3_1056DA88,
    ARRAYSIZE(vec3_1056DA18),
    mesh_1056D9F8,
    mat_1056D960,
    ARRAYSIZE(mesh_1056D9F8),
    ARRAYSIZE(mat_1056D960),
    { 0.597657f, -0.049252f, 0.18066f },
    0.928501f,
    0
};
