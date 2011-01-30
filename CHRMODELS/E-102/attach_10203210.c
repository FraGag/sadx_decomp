#include "../../Structs.h"

static struct Vector3 vec3_10203060[] =
{
    { 2.007668f, 2.981744f, 1.80781f },
    { -0.155653f, 0.081009f, 0.658413f },
    { 2.085171f, 2.795944f, 2.089718f },
    { -0.078149f, -0.10479f, 0.94032f },
    { 2.285357f, 2.774648f, 1.80781f },
    { 0.122036f, -0.126087f, 0.658413f },
    { 2.007668f, 2.981744f, -1.683318f },
    { -0.155653f, 0.081009f, -0.596413f },
    { 2.085171f, 2.795945f, -1.965226f },
    { -0.078149f, -0.10479f, -0.878321f },
    { 2.285357f, 2.774647f, -1.683318f },
    { 0.122036f, -0.126087f, -0.596413f },
    { 2.01197f, 2.987512f, -1.690806f },
    { 2.01197f, 2.987512f, 1.815297f },
    { 1.971464f, 2.643479f, -1.690806f },
    { 1.971464f, 2.643479f, 1.815297f },
    { 2.289659f, 2.780416f, -1.690806f },
    { 2.289659f, 2.780416f, 1.815297f }
};

static struct Vector3 vec3_10203138[] =
{
    { -0.029916f, 0.99494f, -0.095915f },
    { -0.603835f, 0.639094f, -0.476384f },
    { 0.26368f, 0.35356f, 0.897479f },
    { -0.180983f, -0.242676f, 0.953076f },
    { 0.962153f, 0.255071f, -0.095916f },
    { 0.78476f, -0.396497f, -0.476384f },
    { -0.033208f, 0.994653f, 0.097786f },
    { -0.608429f, 0.633076f, 0.47857f },
    { 0.267756f, 0.359026f, -0.894096f },
    { -0.171979f, -0.230602f, -0.95773f },
    { 0.962818f, 0.251833f, 0.097786f },
    { 0.780302f, -0.402616f, 0.47857f },
    { -0.395306f, 0.918549f, 0.0f },
    { -0.395306f, 0.918549f, 0.0f },
    { -0.597834f, -0.80162f, 0.0f },
    { -0.597834f, -0.80162f, 0.0f },
    { 0.99314f, -0.11693f, 0.0f },
    { 0.99314f, -0.11693f, 0.0f }
};

static short unsigned int tris_10202FD4[] =
{
    2, 4, 0,
    6, 10, 8
};

static short unsigned int quads_10202FE0[] =
{
    3, 5, 2, 4,
    1, 3, 0, 2,
    5, 1, 4, 0,
    8, 10, 9, 11,
    6, 8, 7, 9,
    10, 6, 11, 7,
    14, 16, 15, 17,
    12, 14, 13, 15,
    16, 12, 17, 13
};

static struct MESH mesh_10203028[] =
{
    { 0 | MeshPolyType_Triangles, 2, tris_10202FD4, 0, NULL, NULL, NULL, 0 },
    { 0 | MeshPolyType_Quads, 9, quads_10202FE0, 0, NULL, NULL, NULL, 0 }
};

static struct MATERIAL mat_10202FC0[] =
{
    {
        0xFF7F7F7F,
        0xFFFFFFFF,
        6.0f,
        0x00000000,
        0x0400,
        0x00,
        0x94
    }
};

struct ATTACH attach_10203210 =
{
    vec3_10203060,
    vec3_10203138,
    ARRAYSIZE(vec3_10203060),
    mesh_10203028,
    mat_10202FC0,
    ARRAYSIZE(mesh_10203028),
    ARRAYSIZE(mat_10202FC0),
    { 1.067003f, 1.430713f, 0.062246f },
    2.558053f,
    0
};
