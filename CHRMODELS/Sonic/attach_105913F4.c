#include "../../Structs.h"

static struct Vector3 vec3_10591318[] =
{
    { -0.002311f, 0.057806f, -0.176118f },
    { 0.014568f, -0.283991f, -0.157903f },
    { 1.234044f, -0.259604f, -0.115875f },
    { 1.234152f, 0.111911f, -0.130953f },
    { -0.004625f, -0.267828f, 0.163168f },
    { 1.218665f, -0.242574f, 0.205323f },
    { -0.021504f, 0.073969f, 0.144953f },
    { 1.220176f, 0.129393f, 0.190339f },
    { 1.411258f, -0.04626f, 0.056399f }
};

static struct Vector3 vec3_10591388[] =
{
    { -0.573579f, 0.521629f, -0.631593f },
    { -0.529088f, -0.625075f, -0.573888f },
    { 0.425988f, -0.678549f, -0.598419f },
    { 0.390607f, 0.631569f, -0.669736f },
    { -0.583857f, -0.567269f, 0.580789f },
    { 0.361585f, -0.624263f, 0.692496f },
    { -0.632716f, 0.574553f, 0.519191f },
    { 0.326365f, 0.701868f, 0.633141f },
    { 0.996162f, 0.044044f, 0.075644f }
};

static short unsigned int strips_1059126C[] =
{
    4,
    4, 6, 1, 0,
    10,
    5, 1, 2, 0, 3, 6, 7, 4, 5, 1,
    5,
    5, 2, 8, 3, 7,
    3,
    7, 5, 8
};

static struct UV uv_105912A0[] =
{
    { 0, 12 },
    { 3, 38 },
    { 36, 17 },
    { 21, 41 },
    { 56, 221 },
    { 95, 122 },
    { 95, 221 },
    { 95, 118 },
    { 95, 216 },
    { 56, 118 },
    { 56, 216 },
    { 56, 122 },
    { 56, 221 },
    { 95, 122 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 },
    { 71, 223 }
};

static struct MESH mesh_105912F8[] =
{
    { 1 | MeshPolyType_StripsB, 4, strips_1059126C, 0, NULL, NULL, uv_105912A0, 0 }
};

static struct MATERIAL mat_10591208[] =
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

struct ATTACH attach_105913F4 =
{
    vec3_10591318,
    vec3_10591388,
    ARRAYSIZE(vec3_10591318),
    mesh_105912F8,
    mat_10591208,
    ARRAYSIZE(mesh_105912F8),
    ARRAYSIZE(mat_10591208),
    { 0.694877f, -0.077299f, 0.014602f },
    0.74369f,
    0
};
