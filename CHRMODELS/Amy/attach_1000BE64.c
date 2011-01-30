#include "../../Structs.h"

static struct Vector3 vec3_1000BBD8[] =
{
    { 0.660843f, 0.088778f, 0.54016f },
    { 0.660859f, 0.081056f, -0.806436f },
    { -0.017819f, -0.210139f, 0.474974f },
    { -0.052669f, -0.239415f, -0.694473f },
    { 0.661481f, -1.369601f, 0.377836f },
    { 0.661017f, -1.394135f, -0.515509f },
    { -0.014544f, -0.991551f, 0.476589f },
    { -0.049907f, -1.044367f, -0.648062f },
    { 0.660848f, -1.5505f, -0.082261f },
    { 0.661747f, -0.901217f, 0.551645f },
    { 0.661763f, -0.964801f, -0.738109f },
    { -0.282967f, -1.117744f, -0.077589f },
    { -0.22473f, -1.056883f, 0.288011f },
    { -0.215805f, -1.092643f, -0.416806f },
    { 0.331911f, -0.926274f, 0.578283f },
    { 0.268777f, -1.418628f, 0.407566f },
    { 0.262959f, -1.445229f, -0.535155f },
    { 0.323176f, -0.987522f, -0.766241f },
    { 0.207683f, -1.614159f, -0.077782f },
    { -0.060692f, -1.324452f, 0.359428f },
    { -0.134873f, -1.486449f, -0.073834f },
    { -0.083856f, -1.339264f, -0.496891f },
    { -0.330507f, -0.369779f, -0.072477f },
    { -0.276354f, -0.328395f, 0.251913f },
    { -0.27162f, -0.337649f, -0.393493f },
    { 0.326394f, -0.065461f, -0.821789f },
    { 0.332236f, -0.0523f, 0.565669f }
};

static struct Vector3 vec3_1000BD20[] =
{
    { 0.819327f, 0.008526f, 0.573264f },
    { 0.809651f, -0.035499f, -0.585837f },
    { -0.423106f, 0.006407f, 0.906058f },
    { -0.516221f, -0.051063f, -0.854932f },
    { 0.677594f, -0.510287f, 0.529597f },
    { 0.680407f, -0.546025f, -0.488776f },
    { -0.444131f, -0.130936f, 0.886343f },
    { -0.528954f, -0.208666f, -0.822597f },
    { 0.687618f, -0.726021f, 0.008603f },
    { 0.702555f, -0.114824f, 0.702304f },
    { 0.699408f, -0.187946f, -0.689569f },
    { -0.973395f, -0.229002f, -0.007745f },
    { -0.857315f, -0.183258f, 0.48107f },
    { -0.899632f, -0.192388f, -0.39198f },
    { -0.074931f, -0.152367f, 0.985479f },
    { -0.072489f, -0.694405f, 0.715924f },
    { -0.076954f, -0.749717f, -0.657269f },
    { -0.079062f, -0.249806f, -0.965063f },
    { -0.11525f, -0.993231f, 0.014512f },
    { -0.533462f, -0.54755f, 0.644676f },
    { -0.666064f, -0.745681f, 0.017852f },
    { -0.575925f, -0.575538f, -0.580574f },
    { -0.998031f, -0.062481f, -0.005586f },
    { -0.853153f, -0.031216f, 0.520725f },
    { -0.907435f, -0.050605f, -0.417134f },
    { -0.062568f, -0.059693f, -0.996254f },
    { -0.050848f, 0.014432f, 0.998602f }
};

static short unsigned int strips_1000BA08[] =
{
    3,
    17, 10, 5,
    3,
    14, 9, 0,
    10 | 0x8000,
    24, 22, 11, 12, 20, 19, 18, 15, 8, 4,
    7 | 0x8000,
    10, 1, 17, 25, 7, 3, 24,
    9 | 0x8000,
    24, 11, 13, 20, 21, 18, 16, 8, 5,
    8,
    23, 12, 6, 19, 14, 15, 9, 4,
    6,
    0, 26, 14, 2, 6, 23,
    7,
    5, 16, 17, 21, 7, 13, 24,
    3,
    12, 23, 22
};

static struct UV uv_1000BAA0[] =
{
    { 211, 171 },
    { 211, 187 },
    { 251, 187 },
    { 211, 171 },
    { 211, 187 },
    { 131, 187 },
    { 129, 21 },
    { 129, 41 },
    { 161, 41 },
    { 169, 63 },
    { 185, 41 },
    { 189, 65 },
    { 204, 41 },
    { 212, 69 },
    { 246, 41 },
    { 247, 71 },
    { 211, 187 },
    { 131, 187 },
    { 211, 171 },
    { 143, 171 },
    { 219, 151 },
    { 155, 151 },
    { 163, 135 },
    { 129, 21 },
    { 161, 41 },
    { 169, 20 },
    { 185, 41 },
    { 189, 15 },
    { 204, 41 },
    { 212, 13 },
    { 246, 41 },
    { 247, 11 },
    { 163, 135 },
    { 223, 139 },
    { 219, 151 },
    { 247, 151 },
    { 211, 171 },
    { 251, 167 },
    { 211, 187 },
    { 251, 187 },
    { 131, 187 },
    { 143, 171 },
    { 211, 171 },
    { 155, 151 },
    { 219, 151 },
    { 163, 135 },
    { 251, 187 },
    { 251, 167 },
    { 211, 171 },
    { 247, 151 },
    { 219, 151 },
    { 223, 139 },
    { 163, 135 },
    { 169, 63 },
    { 129, 61 },
    { 129, 41 }
};

static short unsigned int strips_1000BA8C[] =
{
    7,
    8, 5, 4, 10, 9, 1, 0
};

static struct UV uv_1000BB80[] =
{
    { 254, 127 },
    { 254, 70 },
    { 255, 183 },
    { 127, 35 },
    { 127, 219 },
    { 0, 0 },
    { 0, 255 }
};

static struct MESH mesh_1000BB9C[] =
{
    { 1 | MeshPolyType_StripsB, 9, strips_1000BA08, 0, NULL, NULL, uv_1000BAA0, 0 },
    { 2 | MeshPolyType_StripsB, 1, strips_1000BA8C, 0, NULL, NULL, uv_1000BB80, 0 }
};

static struct MATERIAL mat_1000B9C8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000000,
        0x2400,
        0x08,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000014,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000011,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000BE64 =
{
    vec3_1000BBD8,
    vec3_1000BD20,
    ARRAYSIZE(vec3_1000BBD8),
    mesh_1000BB9C,
    mat_1000B9C8,
    ARRAYSIZE(mesh_1000BB9C),
    ARRAYSIZE(mat_1000B9C8),
    { 0.165628f, -0.76269f, -0.121753f },
    1.078681f,
    0
};
