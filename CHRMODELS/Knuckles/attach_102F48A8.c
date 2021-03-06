#include "../../Structs.h"

static struct Vector3 vec3_102F47E8[] =
{
    { 0.810067f, 0.013832f, -0.416144f },
    { 0.850166f, -0.365272f, -0.066432f },
    { -0.120088f, -0.07367f, -0.408172f },
    { -0.076543f, -0.481905f, -0.014775f },
    { 0.791706f, 0.391717f, -0.066311f },
    { 0.831601f, 0.012609f, 0.277879f },
    { -0.139496f, 0.333299f, -0.014648f },
    { -0.096535f, -0.074965f, 0.373336f }
};

static struct Vector3 vec3_102F4848[] =
{
    { -0.017962f, 0.008002f, -0.999807f },
    { 0.133529f, -0.990973f, -0.011976f },
    { -0.016724f, -0.006595f, -0.999838f },
    { 0.134998f, -0.990784f, 0.011073f },
    { -0.053674f, 0.998538f, -0.006376f },
    { 0.092122f, 0.013062f, 0.995662f },
    { -0.052589f, 0.998476f, 0.016716f },
    { 0.093623f, -0.001412f, 0.995607f }
};

static short unsigned int strips_102F478C[] =
{
    10,
    2, 1, 3, 5, 7, 4, 6, 0, 2, 1
};

static struct UV uv_102F47A4[] =
{
    { 63, 211 },
    { 123, 171 },
    { 123, 211 },
    { 183, 171 },
    { 183, 211 },
    { 123, 171 },
    { 123, 211 },
    { 63, 171 },
    { 63, 211 },
    { 123, 171 }
};

static struct MESH mesh_102F47CC[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_102F478C, 0, NULL, NULL, uv_102F47A4, 0 }
};

static struct MATERIAL mat_102F4778[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_102F48A8 =
{
    vec3_102F47E8,
    vec3_102F4848,
    ARRAYSIZE(vec3_102F47E8),
    mesh_102F47CC,
    mat_102F4778,
    ARRAYSIZE(mesh_102F47CC),
    ARRAYSIZE(mat_102F4778),
    { 0.355335f, -0.045094f, -0.021404f },
    0.751511f,
    0
};
