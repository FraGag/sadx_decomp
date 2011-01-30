#include "../../Structs.h"

static struct Vector3 vec3_10682528[] =
{
    { 1.083594f, -0.677012f, -0.618465f },
    { 1.069992f, -0.704796f, 0.590889f },
    { 0.088396f, -0.622141f, -0.361731f },
    { 0.220157f, -0.639491f, 0.539144f },
    { 1.036653f, 0.765397f, -0.511385f },
    { 1.056368f, 0.635373f, 0.612607f },
    { 0.070913f, 0.673637f, -0.288826f },
    { 0.165903f, 0.592031f, 0.541556f },
    { 0.508787f, -0.654452f, -0.740592f },
    { 0.510409f, 0.732128f, -0.67373f }
};

static struct Vector3 vec3_106825A0[] =
{
    { 0.115558f, -0.740521f, -0.662024f },
    { -0.109232f, -0.720911f, 0.684365f },
    { -0.757809f, -0.585007f, -0.288951f },
    { -0.562441f, -0.581789f, 0.587522f },
    { 0.108381f, 0.834431f, -0.54035f },
    { -0.091858f, 0.648591f, 0.755574f },
    { -0.759542f, 0.60866f, -0.229412f },
    { -0.58794f, 0.524128f, 0.61613f },
    { -0.206118f, -0.603849f, -0.769988f },
    { -0.214797f, 0.648467f, -0.73031f }
};

static short unsigned int strips_106824D8[] =
{
    3,
    9, 4, 8,
    13,
    4, 0, 8, 2, 9, 6, 4, 7, 5, 3, 1, 2, 0,
    4,
    6, 2, 7, 3
};

static struct MESH mesh_10682508[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_106824D8, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10682618 =
{
    vec3_10682528,
    vec3_106825A0,
    ARRAYSIZE(vec3_10682528),
    mesh_10682508,
    mat_106804E8,
    ARRAYSIZE(mesh_10682508),
    ARRAYSIZE(mat_106804E8),
    { 0.577253f, 0.030301f, -0.063992f },
    1.002395f,
    0
};
