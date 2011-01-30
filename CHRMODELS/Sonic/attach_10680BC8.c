#include "../../Structs.h"

static struct Vector3 vec3_10680B08[] =
{
    { 1.485138f, -0.781226f, 1.102731f },
    { 1.485139f, -0.781226f, -1.051293f },
    { -0.03207f, -1.358089f, 1.052523f },
    { -0.032054f, -1.358089f, -1.041719f },
    { 1.491081f, 1.645029f, 1.102731f },
    { 1.491083f, 1.645029f, -1.051293f },
    { -0.326499f, 1.277651f, 1.070005f },
    { -0.326487f, 1.277651f, -1.045454f }
};

static struct Vector3 vec3_10680B68[] =
{
    { 1.485138f, -0.781226f, 1.102731f },
    { 1.485139f, -0.781226f, -1.051293f },
    { -0.03207f, -1.358089f, 1.052523f },
    { -0.032054f, -1.358089f, -1.041719f },
    { 1.491081f, 1.645029f, 1.102731f },
    { 1.491083f, 1.645029f, -1.051293f },
    { -0.326499f, 1.277651f, 1.070005f },
    { -0.326487f, 1.277651f, -1.045454f }
};

static short unsigned int strips_10680AC4[] =
{
    8 | 0x8000,
    3, 1, 7, 5, 6, 4, 2, 0,
    4,
    7, 3, 6, 2,
    4,
    1, 5, 0, 4
};

static struct MESH mesh_10680AEC[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_10680AC4, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10680BC8 =
{
    vec3_10680B08,
    vec3_10680B68,
    ARRAYSIZE(vec3_10680B08),
    mesh_10680AEC,
    mat_106804E8,
    ARRAYSIZE(mesh_10680AEC),
    ARRAYSIZE(mat_106804E8),
    { 0.582292f, 0.14347f, 0.025719f },
    1.847687f,
    0
};
