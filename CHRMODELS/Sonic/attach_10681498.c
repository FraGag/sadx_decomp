#include "../../Structs.h"

static struct Vector3 vec3_106813D8[] =
{
    { 1.498988f, -0.795068f, -1.199662f },
    { 1.498991f, -0.795068f, 1.051293f },
    { -0.073623f, -1.316559f, -0.958982f },
    { -0.073608f, -1.316559f, 1.097109f },
    { 1.477254f, 1.575789f, -1.199662f },
    { 1.477257f, 1.575789f, 1.051293f },
    { -0.298811f, 1.30432f, -0.986922f },
    { -0.298799f, 1.30432f, 1.161288f }
};

static struct Vector3 vec3_10681438[] =
{
    { 0.571631f, -0.004271f, -0.8205f },
    { 0.668912f, -0.001525f, 0.74334f },
    { -0.799552f, -0.068803f, -0.596643f },
    { -0.746111f, -0.074144f, 0.66168f },
    { 0.49319f, 0.619162f, -0.611066f },
    { 0.549058f, 0.62637f, 0.553351f },
    { -0.678916f, 0.501519f, -0.536239f },
    { -0.618808f, 0.499433f, 0.606336f }
};

static short unsigned int strips_1068139C[] =
{
    4,
    6, 7, 4, 5,
    10 | 0x8000,
    1, 4, 0, 6, 2, 7, 3, 5, 1, 4
};

static struct MESH mesh_106813BC[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1068139C, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10681498 =
{
    vec3_106813D8,
    vec3_10681438,
    ARRAYSIZE(vec3_106813D8),
    mesh_106813BC,
    mat_106804E8,
    ARRAYSIZE(mesh_106813BC),
    ARRAYSIZE(mat_106804E8),
    { 0.60009f, 0.129615f, -0.019187f },
    1.866612f,
    0
};
