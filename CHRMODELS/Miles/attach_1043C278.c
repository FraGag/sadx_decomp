#include "../../Structs.h"

static struct Vector3 vec3_1043C0F8[] =
{
    { 0.094245f, -0.60762f, -0.197564f },
    { 0.175536f, -0.578274f, 0.368466f },
    { 0.092573f, 0.663875f, -0.210599f },
    { 0.173924f, 0.646114f, 0.355894f },
    { 0.399813f, -0.483254f, -0.186972f },
    { 0.472434f, -0.448655f, 0.227831f },
    { 0.398568f, 0.494955f, -0.196603f },
    { 0.469435f, 0.449768f, 0.228473f },
    { 0.787132f, -0.30972f, 0.055062f },
    { 0.834054f, -0.286757f, 0.322516f },
    { 0.784357f, 0.255861f, 0.045356f },
    { 0.831301f, 0.224427f, 0.32327f },
    { 0.019613f, 0.516914f, 0.276592f },
    { 0.021185f, -0.494077f, 0.289263f },
    { -0.044653f, 0.582698f, -0.119719f },
    { -0.043032f, -0.558545f, -0.106865f }
};

static struct Vector3 vec3_1043C1B8[] =
{
    { -0.183706f, -0.74226f, -0.644439f },
    { 0.028804f, -0.679094f, 0.733486f },
    { -0.181787f, 0.75881f, -0.625428f },
    { 0.031246f, 0.714544f, 0.698892f },
    { 0.416463f, -0.581891f, -0.698543f },
    { 0.411231f, -0.69757f, 0.586758f },
    { 0.48188f, 0.529891f, -0.697859f },
    { 0.514358f, 0.62968f, 0.582184f },
    { 0.772674f, -0.473217f, -0.423131f },
    { 0.635727f, -0.413896f, 0.651569f },
    { 0.801989f, 0.413332f, -0.431242f },
    { 0.649799f, 0.369274f, 0.664378f },
    { -0.593316f, 0.441405f, 0.673155f },
    { -0.519295f, -0.537686f, 0.664249f },
    { -0.746199f, 0.523749f, -0.410942f },
    { -0.649952f, -0.646473f, -0.399543f }
};

static short unsigned int strips_1043BFF0[] =
{
    4,
    4, 6, 8, 10,
    4,
    7, 5, 11, 9,
    4,
    13, 15, 0, 2,
    20,
    12, 13, 1, 0, 4, 2, 6, 7, 10, 11, 8, 9, 4, 5, 1, 7, 3, 2, 14, 15,
    4,
    1, 3, 12, 14
};

static struct UV uv_1043C048[] =
{
    { 3, 195 },
    { 123, 195 },
    { 3, 251 },
    { 123, 251 },
    { 123, 195 },
    { 3, 195 },
    { 123, 251 },
    { 3, 251 },
    { 3, 131 },
    { 3, 131 },
    { 3, 151 },
    { 123, 151 },
    { 123, 131 },
    { 3, 131 },
    { 3, 151 },
    { 3, 151 },
    { 3, 195 },
    { 123, 151 },
    { 123, 195 },
    { 123, 195 },
    { 123, 251 },
    { 123, 251 },
    { 3, 251 },
    { 3, 251 },
    { 3, 195 },
    { 3, 195 },
    { 3, 151 },
    { 123, 195 },
    { 123, 151 },
    { 123, 151 },
    { 123, 131 },
    { 3, 131 },
    { 3, 151 },
    { 123, 151 },
    { 123, 131 },
    { 123, 131 }
};

static struct MESH mesh_1043C0D8[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1043BFF0, 0, NULL, NULL, uv_1043C048, 0 }
};

static struct MATERIAL mat_1043BFD8[] =
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

struct ATTACH attach_1043C278 =
{
    vec3_1043C0F8,
    vec3_1043C1B8,
    ARRAYSIZE(vec3_1043C0F8),
    mesh_1043C0D8,
    mat_1043BFD8,
    ARRAYSIZE(mesh_1043C0D8),
    ARRAYSIZE(mat_1043BFD8),
    { 0.3947f, 0.028128f, 0.078933f },
    0.865102f,
    0
};
