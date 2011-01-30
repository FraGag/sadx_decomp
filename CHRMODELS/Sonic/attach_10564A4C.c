#include "../../Structs.h"

static struct Vector3 vec3_105648E0[] =
{
    { 0.456733f, -0.63317f, 0.388415f },
    { 0.490157f, -0.431384f, 0.456287f },
    { 0.261538f, -0.626398f, 0.566868f },
    { 0.290888f, -0.445742f, 0.628315f },
    { -0.099308f, -0.268421f, -0.340145f },
    { -0.074763f, 0.30479f, -0.26928f },
    { -0.625313f, -0.008735f, -0.104925f },
    { -0.421518f, 0.181175f, 0.122698f },
    { -0.142795f, -0.529808f, 0.233363f },
    { 0.142084f, -0.549204f, -0.040838f },
    { -0.086674f, -0.321893f, 0.339814f },
    { 0.217378f, -0.317499f, 0.087272f },
    { -0.02088f, -0.572965f, 0.088791f },
    { -0.384911f, 0.076343f, -0.356314f },
    { -0.270298f, -0.295081f, -0.195001f }
};

static struct Vector3 vec3_10564998[] =
{
    { 0.734875f, -0.676093f, -0.053457f },
    { 0.880176f, 0.414786f, 0.230744f },
    { -0.069253f, -0.725777f, 0.684436f },
    { 0.088855f, 0.334339f, 0.938255f },
    { 0.185365f, -0.395999f, -0.899347f },
    { 0.809863f, 0.511653f, -0.286937f },
    { -0.850138f, -0.525435f, 0.034404f },
    { -0.127851f, 0.320046f, 0.938736f },
    { -0.663028f, -0.680034f, 0.312966f },
    { 0.404039f, -0.639938f, -0.653629f },
    { -0.31025f, 0.360307f, 0.879729f },
    { 0.827154f, 0.527071f, -0.194968f },
    { -0.302021f, -0.92307f, -0.238173f },
    { -0.23984f, -0.233583f, -0.942293f },
    { -0.535064f, -0.686553f, -0.492293f }
};

static short unsigned int strips_10564800[] =
{
    20 | 0x8000,
    5, 13, 4, 14, 12, 8, 2, 10, 3, 1, 2, 0, 12, 9, 4, 11, 5, 10, 7, 6,
    5,
    13, 14, 6, 8, 10,
    5 | 0x8000,
    9, 0, 11, 1, 10
};

static struct UV uv_10564848[] =
{
    { 67, 3 },
    { 3, 3 },
    { 15, 79 },
    { 3, 79 },
    { 3, 139 },
    { 15, 139 },
    { 3, 247 },
    { 51, 139 },
    { 51, 247 },
    { 67, 251 },
    { 3, 247 },
    { 3, 251 },
    { 3, 139 },
    { 15, 139 },
    { 15, 79 },
    { 67, 139 },
    { 67, 3 },
    { 51, 139 },
    { 51, 3 },
    { 15, 3 },
    { 3, 3 },
    { 3, 79 },
    { 15, 3 },
    { 15, 139 },
    { 51, 139 },
    { 15, 139 },
    { 3, 251 },
    { 67, 139 },
    { 67, 251 },
    { 51, 139 }
};

static struct MESH mesh_105648C0[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_10564800, 0, NULL, NULL, uv_10564848, 0 }
};

static struct MATERIAL mat_105647EC[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000005,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10564A4C =
{
    vec3_105648E0,
    vec3_10564998,
    ARRAYSIZE(vec3_105648E0),
    mesh_105648C0,
    mat_105647EC,
    ARRAYSIZE(mesh_105648C0),
    ARRAYSIZE(mat_105647EC),
    { -0.067578f, -0.16419f, 0.136001f },
    0.74336f,
    0
};
