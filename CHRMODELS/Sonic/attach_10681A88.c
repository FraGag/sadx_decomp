#include "../../Structs.h"

static struct Vector3 vec3_106819C8[] =
{
    { 0.941171f, -0.051724f, 0.430575f },
    { 0.946263f, -0.507308f, -0.09827f },
    { -0.017694f, -0.051724f, 0.41224f },
    { 0.055307f, -0.490099f, -0.106673f },
    { 0.956534f, 0.491326f, 0.02102f },
    { 0.963645f, 0.036233f, -0.537979f },
    { -0.002332f, 0.491326f, 0.002685f },
    { 0.076663f, 0.022469f, -0.53747f }
};

static struct Vector3 vec3_10681A28[] =
{
    { -0.024768f, -0.103814f, 0.994288f },
    { -0.008001f, -0.995601f, -0.093349f },
    { -0.024681f, -0.08413f, 0.996149f },
    { -0.008929f, -0.998736f, -0.049457f },
    { -0.002117f, 0.993852f, 0.110698f },
    { 0.015316f, 0.102981f, -0.994565f },
    { -0.002852f, 0.988813f, 0.149136f },
    { 0.015325f, 0.108138f, -0.994018f }
};

static short unsigned int strips_10681990[] =
{
    10,
    7, 1, 3, 0, 2, 4, 6, 5, 7, 1
};

static struct MESH mesh_106819A8[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10681990, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10681A88 =
{
    vec3_106819C8,
    vec3_10681A28,
    ARRAYSIZE(vec3_106819C8),
    mesh_106819A8,
    mat_106804E8,
    ARRAYSIZE(mesh_106819A8),
    ARRAYSIZE(mat_106804E8),
    { 0.470043f, 0.006634f, -0.017387f },
    0.829958f,
    0
};
