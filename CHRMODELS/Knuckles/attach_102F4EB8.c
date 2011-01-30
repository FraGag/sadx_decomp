#include "../../Structs.h"

static struct Vector3 vec3_102F4D08[] =
{
    { 2.188004f, 0.245838f, 0.895663f },
    { 2.137717f, 0.259498f, -0.823985f },
    { 0.582684f, 0.203346f, 0.540849f },
    { 0.549814f, 0.212269f, -0.582497f },
    { 2.136492f, 2.059065f, 0.911569f },
    { 2.086204f, 2.072761f, -0.808078f },
    { 0.272277f, 2.009573f, 0.511494f },
    { 0.241648f, 2.017886f, -0.535136f },
    { 2.116575f, 2.659891f, 0.656925f },
    { 2.079802f, 2.669845f, -0.596708f },
    { 2.08996f, 2.874455f, 0.067105f },
    { 0.908485f, 2.726659f, 0.085165f },
    { 1.333497f, 0.221994f, 0.84656f },
    { 1.152909f, 2.031622f, 0.852278f },
    { 1.056999f, 2.510181f, 0.685697f },
    { 1.019954f, 2.520202f, -0.57648f },
    { 1.106349f, 2.044246f, -0.735293f },
    { 1.285341f, 0.235031f, -0.795337f }
};

static struct Vector3 vec3_102F4DE0[] =
{
    { 0.69636f, 0.013488f, 0.717566f },
    { 0.676235f, 0.02567f, -0.736239f },
    { -0.78975f, -0.125965f, 0.600357f },
    { -0.767186f, -0.114381f, -0.631143f },
    { 0.652318f, 0.165837f, 0.73958f },
    { 0.634431f, 0.146305f, -0.759008f },
    { -0.825249f, 0.248588f, 0.507118f },
    { -0.803612f, 0.267892f, -0.531452f },
    { 0.593759f, 0.607133f, 0.528053f },
    { 0.559532f, 0.60683f, -0.564519f },
    { 0.576307f, 0.817219f, 0.004767f },
    { -0.410005f, 0.911211f, 0.039883f },
    { -0.208588f, -0.028726f, 0.977582f },
    { -0.205621f, 0.150227f, 0.967032f },
    { -0.281717f, 0.655992f, 0.700222f },
    { -0.268053f, 0.683791f, -0.678658f },
    { -0.150591f, 0.151343f, -0.976943f },
    { -0.148669f, -0.004449f, -0.988877f }
};

static short unsigned int strips_102F4BD8[] =
{
    6,
    7, 11, 15, 9, 16, 5,
    4,
    8, 10, 11, 9,
    7 | 0x8000,
    1, 0, 5, 4, 9, 8, 10,
    3,
    16, 7, 15,
    4,
    4, 14, 13, 6,
    11,
    4, 8, 14, 11, 6, 7, 3, 16, 17, 5, 1,
    7 | 0x8000,
    4, 0, 13, 12, 6, 2, 3
};

static struct UV uv_102F4C40[] =
{
    { 163, 131 },
    { 183, 175 },
    { 171, 183 },
    { 175, 251 },
    { 159, 187 },
    { 159, 251 },
    { 175, 251 },
    { 187, 251 },
    { 183, 175 },
    { 175, 251 },
    { 76, 124 },
    { 83, 2 },
    { 150, 124 },
    { 153, 2 },
    { 178, 108 },
    { 178, 18 },
    { 188, 60 },
    { 159, 187 },
    { 163, 131 },
    { 171, 183 },
    { 159, 251 },
    { 171, 183 },
    { 159, 187 },
    { 163, 131 },
    { 159, 251 },
    { 175, 251 },
    { 171, 183 },
    { 183, 175 },
    { 163, 131 },
    { 163, 131 },
    { 71, 147 },
    { 159, 187 },
    { 71, 195 },
    { 159, 251 },
    { 71, 251 },
    { 159, 251 },
    { 71, 251 },
    { 159, 187 },
    { 71, 195 },
    { 163, 131 },
    { 71, 147 },
    { 71, 147 }
};

static struct MESH mesh_102F4CE8[] =
{
    { 0 | MeshPolyType_StripsB, 7, strips_102F4BD8, 0, NULL, NULL, uv_102F4C40, 0 }
};

static struct MATERIAL mat_102F4BC0[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000C,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_102F4EB8 =
{
    vec3_102F4D08,
    vec3_102F4DE0,
    ARRAYSIZE(vec3_102F4D08),
    mesh_102F4CE8,
    mat_102F4BC0,
    ARRAYSIZE(mesh_102F4CE8),
    ARRAYSIZE(mat_102F4BC0),
    { 1.214826f, 1.538901f, 0.043792f },
    1.832238f,
    0
};