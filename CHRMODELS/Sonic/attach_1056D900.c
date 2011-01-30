#include "../../Structs.h"

static struct Vector3 vec3_1056D780[] =
{
    { 0.425819f, -0.726055f, 0.076871f },
    { -0.028601f, -0.697837f, -0.246363f },
    { 0.41597f, 0.508176f, 0.112601f },
    { -0.03807f, 0.490668f, -0.211946f },
    { 0.52131f, -0.598823f, -0.135566f },
    { 0.194977f, -0.564937f, -0.388309f },
    { 0.513405f, 0.350718f, -0.108286f },
    { 0.178409f, 0.307029f, -0.364696f },
    { 0.510587f, -0.417084f, -0.706846f },
    { 0.300218f, -0.394597f, -0.869915f },
    { 0.508564f, 0.131868f, -0.686895f },
    { 0.289897f, 0.101492f, -0.855336f },
    { -0.053864f, 0.363821f, -0.131127f },
    { -0.04793f, -0.617546f, -0.160747f },
    { 0.311964f, -0.682635f, 0.175981f },
    { 0.304073f, 0.425164f, 0.208656f }
};

static struct Vector3 vec3_1056D840[] =
{
    { 0.518104f, -0.765027f, 0.382494f },
    { -0.541231f, -0.72832f, -0.420261f },
    { 0.470103f, 0.77682f, 0.418991f },
    { -0.545657f, 0.757931f, -0.357491f },
    { 0.834902f, -0.547931f, -0.052062f },
    { -0.316364f, -0.684166f, -0.657138f },
    { 0.850388f, 0.519382f, -0.084161f },
    { -0.294778f, 0.636367f, -0.712841f },
    { 0.739981f, -0.494244f, -0.456237f },
    { -0.27746f, -0.428783f, -0.859745f },
    { 0.740486f, 0.495146f, -0.454436f },
    { -0.296427f, 0.425741f, -0.854913f },
    { -0.938197f, 0.338687f, 0.071257f },
    { -0.885324f, -0.464882f, 0.009331f },
    { 0.209712f, -0.60913f, 0.764841f },
    { 0.155691f, 0.448818f, 0.879956f }
};

static short unsigned int strips_1056D678[] =
{
    4,
    6, 4, 10, 8,
    4,
    5, 7, 9, 11,
    4,
    12, 15, 2, 0,
    4,
    3, 1, 13, 14,
    20,
    15, 14, 0, 1, 5, 3, 7, 6, 11, 10, 9, 8, 5, 4, 0, 6, 2, 3, 12, 13
};

static struct UV uv_1056D6D0[] =
{
    { 241, 126 },
    { 13, 126 },
    { 225, 252 },
    { 29, 252 },
    { 13, 126 },
    { 241, 126 },
    { 29, 252 },
    { 225, 252 },
    { 251, 3 },
    { 251, 3 },
    { 250, 47 },
    { 4, 47 },
    { 250, 47 },
    { 4, 47 },
    { 3, 3 },
    { 3, 3 },
    { 251, 3 },
    { 3, 3 },
    { 4, 47 },
    { 4, 47 },
    { 13, 126 },
    { 250, 47 },
    { 241, 126 },
    { 241, 126 },
    { 225, 252 },
    { 225, 252 },
    { 29, 252 },
    { 29, 252 },
    { 13, 126 },
    { 13, 126 },
    { 4, 47 },
    { 241, 126 },
    { 250, 47 },
    { 250, 47 },
    { 251, 3 },
    { 3, 3 }
};

static struct MESH mesh_1056D760[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1056D678, 0, NULL, NULL, uv_1056D6D0, 0 }
};

static struct MATERIAL mat_1056D660[] =
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

struct ATTACH attach_1056D900 =
{
    vec3_1056D780,
    vec3_1056D840,
    ARRAYSIZE(vec3_1056D780),
    mesh_1056D760,
    mat_1056D660,
    ARRAYSIZE(mesh_1056D760),
    ARRAYSIZE(mat_1056D660),
    { 0.233723f, -0.10894f, -0.330629f },
    0.839391f,
    0
};