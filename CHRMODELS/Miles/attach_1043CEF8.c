#include "../../Structs.h"

static struct Vector3 vec3_1043CE38[] =
{
    { -0.032397f, 0.3708f, -0.054008f },
    { 0.009801f, 0.376756f, 0.057674f },
    { -0.031266f, 0.163506f, -0.140977f },
    { 0.076934f, 0.178776f, 0.145387f },
    { 0.028672f, -0.195939f, -0.141889f },
    { 0.136872f, -0.180668f, 0.144474f },
    { 0.096822f, -0.404126f, -0.055976f },
    { 0.13902f, -0.39817f, 0.055706f }
};

static struct Vector3 vec3_1043CE98[] =
{
    { 0.921459f, 0.154557f, -0.356407f },
    { 0.921459f, 0.154557f, -0.356407f },
    { 0.921458f, 0.154558f, -0.356407f },
    { 0.921458f, 0.154558f, -0.356407f },
    { 0.921458f, 0.154559f, -0.356407f },
    { 0.921458f, 0.154559f, -0.356407f },
    { 0.921458f, 0.154559f, -0.356408f },
    { 0.921458f, 0.154559f, -0.356408f }
};

static short unsigned int strips_1043CDE4[] =
{
    8,
    0, 1, 2, 3, 4, 5, 6, 7
};

static struct UV uv_1043CDF8[] =
{
    { 85, 21 },
    { 169, 19 },
    { 20, 78 },
    { 235, 74 },
    { 19, 177 },
    { 234, 173 },
    { 84, 235 },
    { 168, 233 }
};

static struct MESH mesh_1043CE18[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1043CDE4, 0, NULL, NULL, uv_1043CDF8, 0 }
};

static struct MATERIAL mat_1043CDD0[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000006,
        0xA400,
        0x21,
        0x94
    }
};

struct ATTACH attach_1043CEF8 =
{
    vec3_1043CE38,
    vec3_1043CE98,
    ARRAYSIZE(vec3_1043CE38),
    mesh_1043CE18,
    mat_1043CDD0,
    ARRAYSIZE(mesh_1043CE18),
    ARRAYSIZE(mat_1043CDD0),
    { 0.053311f, -0.013685f, 0.001749f },
    0.347587f,
    0
};
