#include "../../Structs.h"

static struct Vector3 vec3_1001CF98[] =
{
    { -4.28471f, -0.179695f, -0.088676f },
    { -4.268779f, -0.177129f, 0.534315f },
    { -5.24701f, -0.240825f, -0.131504f },
    { -5.233947f, -0.237116f, 0.690727f },
    { -4.259548f, 0.442988f, -0.091885f },
    { -4.243616f, 0.445555f, 0.531106f },
    { -5.213796f, 0.581117f, -0.13574f },
    { -5.200733f, 0.584827f, 0.686492f },
    { -1.878269f, -0.097377f, 0.092511f },
    { -1.862936f, 0.052855f, 0.241538f },
    { -4.298222f, -0.020039f, 0.245556f },
    { -4.287558f, 0.150732f, 0.415658f },
    { -1.87798f, 0.051781f, -0.058058f },
    { -1.862647f, 0.202013f, 0.090968f },
    { -4.297933f, 0.149459f, 0.074455f },
    { -4.287268f, 0.32023f, 0.244556f },
    { -1.992393f, -0.200645f, -0.168193f },
    { -1.967769f, -0.20002f, 0.330383f },
    { -1.966929f, 0.297818f, -0.170729f },
    { -1.942306f, 0.298443f, 0.327847f },
    { 0.453549f, -0.154546f, -0.190981f },
    { 0.487679f, 0.130223f, 0.08823f },
    { 0.473337f, -0.153721f, 0.089675f },
    { 0.467891f, 0.129398f, -0.192426f }
};

static struct Vector3 vec3_1001D0B8[] =
{
    { 0.585499f, -0.574177f, -0.572286f },
    { 0.629992f, -0.573127f, 0.524057f },
    { 0.075884f, -0.718287f, -0.691597f },
    { 0.15725f, -0.69137f, 0.705181f },
    { 0.629937f, 0.518969f, -0.577798f },
    { 0.674641f, 0.525606f, 0.518264f },
    { 0.133819f, 0.702576f, -0.698913f },
    { 0.213304f, 0.68354f, 0.69805f },
    { -0.031956f, -0.999488f, -0.001697f },
    { 0.071911f, 0.007089f, 0.997386f },
    { -0.030647f, -0.999352f, 0.018891f },
    { 0.07184f, 0.005298f, 0.997402f },
    { -0.054554f, 0.00307f, -0.998506f },
    { 0.048121f, 0.998782f, -0.010953f },
    { -0.05463f, 0.001173f, -0.998506f },
    { 0.049438f, 0.998728f, 0.009929f },
    { -0.606389f, -0.568857f, -0.555601f },
    { -0.546007f, -0.566324f, 0.617377f },
    { -0.560029f, 0.6077f, -0.563088f },
    { -0.499576f, 0.609252f, 0.615821f },
    { 0.541392f, -0.589208f, -0.599773f },
    { 0.655608f, 0.543142f, 0.524571f },
    { 0.612887f, -0.585133f, 0.531026f },
    { 0.58618f, 0.542894f, -0.601381f }
};

static short unsigned int strips_1001CE18[] =
{
    4,
    3, 2, 1, 0,
    4,
    7, 3, 5, 1,
    4,
    6, 7, 4, 5,
    4,
    2, 6, 0, 4,
    4,
    1, 0, 5, 4,
    4,
    18, 23, 16, 20,
    10,
    13, 11, 9, 10, 8, 14, 12, 15, 13, 11,
    4,
    22, 20, 21, 23,
    4,
    19, 18, 17, 16,
    4,
    16, 20, 17, 22,
    4,
    17, 22, 19, 21,
    4,
    19, 21, 18, 23
};

static struct UV uv_1001CEA0[] =
{
    { 123, 131 },
    { 3, 131 },
    { 123, 243 },
    { 3, 243 },
    { 123, 131 },
    { 3, 131 },
    { 123, 243 },
    { 3, 243 },
    { 123, 131 },
    { 3, 131 },
    { 123, 243 },
    { 3, 243 },
    { 123, 131 },
    { 3, 131 },
    { 123, 243 },
    { 3, 243 },
    { 123, 251 },
    { 3, 251 },
    { 123, 243 },
    { 3, 243 },
    { 123, 243 },
    { 123, 131 },
    { 3, 243 },
    { 3, 131 },
    { 251, 251 },
    { 191, 131 },
    { 191, 251 },
    { 131, 131 },
    { 131, 251 },
    { 191, 131 },
    { 191, 251 },
    { 251, 131 },
    { 251, 251 },
    { 191, 131 },
    { 107, 131 },
    { 20, 131 },
    { 107, 131 },
    { 19, 131 },
    { 123, 247 },
    { 3, 247 },
    { 123, 251 },
    { 3, 251 },
    { 123, 243 },
    { 123, 131 },
    { 3, 243 },
    { 3, 131 },
    { 123, 243 },
    { 123, 131 },
    { 3, 243 },
    { 3, 131 },
    { 123, 243 },
    { 123, 131 },
    { 3, 243 },
    { 3, 131 }
};

static struct MESH mesh_1001CF78[] =
{
    { 0 | MeshPolyType_StripsB, 12, strips_1001CE18, 0, NULL, NULL, uv_1001CEA0, 0 }
};

static struct MATERIAL mat_1001CE00[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000012,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1001D1D8 =
{
    vec3_1001CF98,
    vec3_1001D0B8,
    ARRAYSIZE(vec3_1001CF98),
    mesh_1001CF78,
    mat_1001CE00,
    ARRAYSIZE(mesh_1001CF78),
    ARRAYSIZE(mat_1001CE00),
    { -2.379665f, 0.172001f, 0.249151f },
    2.947652f,
    0
};
