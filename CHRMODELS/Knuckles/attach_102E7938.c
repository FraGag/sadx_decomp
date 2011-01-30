#include "../../Structs.h"

static struct Vector3 vec3_102E7728[] =
{
    { 1.069669f, -0.867442f, 0.54274f },
    { 1.138548f, -0.889752f, -0.5231f },
    { 0.002317f, -0.393691f, 0.095184f },
    { 0.001722f, -0.375131f, -0.33834f },
    { 1.071599f, 0.855635f, 0.514977f },
    { 1.121346f, 0.908571f, -0.545265f },
    { -0.002886f, 0.428506f, 0.079617f },
    { -0.003276f, 0.411299f, -0.329136f },
    { 1.096966f, -0.038644f, 0.818384f },
    { -0.000369f, 0.012139f, 0.281538f },
    { 0.545479f, -0.700777f, 0.373623f },
    { 0.427679f, -0.646708f, -0.588517f },
    { 0.573791f, -0.026997f, 0.593082f },
    { 0.418379f, 0.639723f, -0.593833f },
    { 0.539834f, 0.672106f, 0.358326f },
    { -0.00053f, 0.014932f, -0.4888f },
    { 0.409274f, -0.012102f, -0.747922f },
    { 1.02555f, -0.035516f, -0.756094f },
    { 1.030987f, 1.048088f, -0.039692f },
    { 1.042595f, -1.054827f, -0.025955f },
    { 0.474114f, 0.825477f, -0.146572f },
    { 0.484574f, -0.849278f, -0.129437f }
};

static struct Vector3 vec3_102E7830[] =
{
    { -0.412534f, -0.625608f, 0.662141f },
    { -0.177955f, -0.712887f, -0.678324f },
    { -0.670846f, -0.601689f, 0.433516f },
    { -0.696036f, -0.561042f, -0.448069f },
    { -0.411127f, 0.624045f, 0.664486f },
    { -0.21368f, 0.709295f, -0.671745f },
    { -0.628919f, 0.644147f, 0.435357f },
    { -0.673993f, 0.596242f, -0.436153f },
    { -0.390558f, 0.000407f, 0.920578f },
    { -0.535312f, 0.01853f, 0.844451f },
    { -0.487851f, -0.610139f, 0.624285f },
    { -0.380887f, -0.588649f, -0.713034f },
    { -0.432218f, 0.001539f, 0.901768f },
    { -0.38258f, 0.579941f, -0.719237f },
    { -0.468945f, 0.607528f, 0.641093f },
    { -0.581935f, 0.004627f, -0.813222f },
    { -0.279204f, -0.010712f, -0.960172f },
    { -0.008399f, -0.025625f, -0.999636f },
    { -0.372827f, 0.927357f, 0.031757f },
    { -0.344803f, -0.938673f, -0.001847f },
    { -0.471812f, 0.881528f, -0.017381f },
    { -0.479451f, -0.876941f, -0.033195f }
};

static short unsigned int strips_102E7600[] =
{
    3,
    15, 7, 13,
    3,
    9, 12, 14,
    8 | 0x8000,
    18, 4, 14, 8, 12, 10, 9, 2,
    14 | 0x8000,
    6, 7, 20, 13, 5, 16, 17, 11, 1, 21, 19, 10, 0, 8,
    8,
    13, 16, 15, 11, 3, 21, 2, 10,
    6 | 0x8000,
    5, 18, 20, 14, 6, 9
};

static struct UV uv_102E7660[] =
{
    { 129, 8 },
    { 177, 7 },
    { 205, 64 },
    { 129, 8 },
    { 124, 88 },
    { 209, 83 },
    { 255, 158 },
    { 231, 165 },
    { 209, 83 },
    { 123, 168 },
    { 124, 88 },
    { 42, 84 },
    { 129, 8 },
    { 80, 8 },
    { 179, 8 },
    { 177, 7 },
    { 228, 73 },
    { 205, 64 },
    { 238, 172 },
    { 126, 63 },
    { 123, 157 },
    { 49, 66 },
    { 20, 175 },
    { 24, 74 },
    { 0, 160 },
    { 42, 84 },
    { 22, 164 },
    { 123, 168 },
    { 205, 64 },
    { 126, 63 },
    { 129, 8 },
    { 49, 66 },
    { 82, 8 },
    { 24, 74 },
    { 80, 8 },
    { 42, 84 },
    { 238, 172 },
    { 255, 158 },
    { 228, 73 },
    { 209, 83 },
    { 179, 8 },
    { 129, 8 }
};

static struct MESH mesh_102E7708[] =
{
    { 0 | MeshPolyType_StripsB, 6, strips_102E7600, 0, NULL, NULL, uv_102E7660, 0 }
};

static struct MATERIAL mat_102E75E8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_102E7938 =
{
    vec3_102E7728,
    vec3_102E7830,
    ARRAYSIZE(vec3_102E7728),
    mesh_102E7708,
    mat_102E75E8,
    ARRAYSIZE(mesh_102E7708),
    ARRAYSIZE(mat_102E75E8),
    { 0.567636f, -0.003369f, 0.031145f },
    1.313712f,
    0
};
