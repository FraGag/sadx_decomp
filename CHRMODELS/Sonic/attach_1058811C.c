#include "../../Structs.h"

static struct Vector3 vec3_10588040[] =
{
    { -0.002311f, 0.057806f, 0.176118f },
    { 0.014568f, -0.283991f, 0.157903f },
    { 1.234044f, -0.259604f, 0.115874f },
    { 1.234153f, 0.111911f, 0.130953f },
    { -0.004625f, -0.267828f, -0.163168f },
    { 1.218665f, -0.242574f, -0.205323f },
    { -0.021504f, 0.073969f, -0.144953f },
    { 1.220176f, 0.129393f, -0.190339f },
    { 1.411258f, -0.046259f, -0.0564f }
};

static struct Vector3 vec3_105880B0[] =
{
    { -0.573579f, 0.521629f, 0.631593f },
    { -0.529087f, -0.625075f, 0.573888f },
    { 0.425988f, -0.678549f, 0.598419f },
    { 0.390607f, 0.631569f, 0.669736f },
    { -0.583857f, -0.567269f, -0.580789f },
    { 0.361585f, -0.624263f, -0.692497f },
    { -0.632717f, 0.574553f, -0.51919f },
    { 0.326365f, 0.701868f, -0.633141f },
    { 0.996162f, 0.044044f, -0.075644f }
};

static short unsigned int strips_10587F94[] =
{
    4,
    1, 0, 4, 6,
    10,
    4, 2, 1, 3, 0, 7, 6, 5, 4, 2,
    5 | 0x8000,
    5, 2, 8, 3, 7,
    3,
    8, 5, 7
};

static struct UV uv_10587FC8[] =
{
    { 36, 17 },
    { 21, 41 },
    { 0, 12 },
    { 3, 38 },
    { 56, 122 },
    { 95, 221 },
    { 95, 122 },
    { 95, 216 },
    { 95, 118 },
    { 56, 216 },
    { 56, 118 },
    { 56, 221 },
    { 56, 122 },
    { 95, 221 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 }
};

static struct MESH mesh_10588020[] =
{
    { 1 | MeshPolyType_StripsB, 4, strips_10587F94, 0, NULL, NULL, uv_10587FC8, 0 }
};

static struct MATERIAL mat_10587F30[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x39,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000003,
        0xA400,
        0x69,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x69,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x96
    },
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

struct ATTACH attach_1058811C =
{
    vec3_10588040,
    vec3_105880B0,
    ARRAYSIZE(vec3_10588040),
    mesh_10588020,
    mat_10587F30,
    ARRAYSIZE(mesh_10588020),
    ARRAYSIZE(mat_10587F30),
    { 0.694877f, -0.077299f, -0.014603f },
    0.74369f,
    0
};