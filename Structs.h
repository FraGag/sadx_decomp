#pragma once

#ifdef __cplusplus
#define NULL 0
#else /* __cplusplus */
#define NULL ((void *)0)
#endif /* __cplusplus */
#define ARRAYSIZE(X) (sizeof(X)/sizeof(X[0]))

enum ObjectFlags
{
    ObjectFlags_None = 0,
    ObjectFlags_NoTranslate = 1,
    ObjectFlags_NoRotate = 2,
    ObjectFlags_NoScale = 4,
    ObjectFlags_NoDraw = 8,
    ObjectFlags_NoChildren = 0x10,
    ObjectFlags_UseZYXRotation = 0x20,
    ObjectFlags_NoAnimate = 0x40,
    ObjectFlags_80 = 0x80
};

enum MeshPolyType
{
    MeshPolyType_Triangles = 0,
    MeshPolyType_Quads = 0x4000,
    MeshPolyType_StripsA = 0x8000,
    MeshPolyType_StripsB = 0xC000
};

enum AnimHead2Flags
{
    AnimHead2Flags_None = 0,
    AnimHead2Flags_HasPosition = 1,
    AnimHead2Flags_HasRotation = 2,
    AnimHead2Flags_HasScale = 4,
    AnimHead2Flags_08 = 8,
    AnimHead2Flags_HasVertex = 0x10,
    AnimHead2Flags_HasNormal = 0x20 /* not sure if it's actually that */
};

struct Vector3
{
    float X;
    float Y;
    float Z;
};

struct Rotation3
{
    int X;
    int Y;
    int Z;
};

struct PolyNormal
{
    float Unknown1;
    float Unknown2;
};

struct UV
{
    short int U;
    short int V;
};

struct MESH
{
    short unsigned int MatNumAndPolyType;
    short unsigned int Poly_total;
    short unsigned int *Poly;
    int PAttr; /* unused, always 0 */
    struct PolyNormal *PNormal;
    unsigned int *VColor;
    struct UV *UV;
    int Null;
};

struct MATERIAL
{
    unsigned int Diffuse; /* 0xAARRGGBB */
    unsigned int Specular; /* 0xAARRGGBB */
    float field_8;
    unsigned int TexID;
    unsigned short field_10;
    unsigned char Flags;
    unsigned char EndOfMat;
};

struct ATTACH
{
    struct Vector3 *Vertices;
    struct Vector3 *Normals;
    unsigned int Vertices_total;
    struct MESH *Meshes;
    struct MATERIAL *Materials;
    short unsigned int Meshes_total;
    short unsigned int Materials_total;
    struct Vector3 Center;
    float Radius;
    int Null;
};

struct OBJECT
{
    unsigned int Flags;
    struct ATTACH *Attach;
    struct Vector3 Position;
    struct Rotation3 Rotation;
    struct Vector3 Scale;
    struct OBJECT *Child;
    struct OBJECT *Sibling;
};

struct Vector3AnimData
{
    int FrameNum;
    struct Vector3 Vector;
};

struct Rotation3AnimData
{
    int FrameNum;
    struct Rotation3 Rotation;
};

struct OffsetAnimData
{
    int FrameNum;
    void *Pointer;
};

struct Vector3ArrayAnimData
{
    int FrameNum;
    struct Vector3 *Vectors;
};

struct AnimFrame_PosRot
{
    struct Vector3AnimData *Positions;
    struct Rotation3AnimData *Rotations;
    unsigned int PositionCount;
    unsigned int RotationCount;
};

struct AnimFrame_PosRotScale
{
    struct Vector3AnimData *Positions;
    struct Rotation3AnimData *Rotations;
    struct Vector3AnimData *Scales;
    unsigned int PositionCount;
    unsigned int RotationCount;
    unsigned int ScaleCount;
};

struct AnimFrame_VertNrm
{
    struct Vector3ArrayAnimData *Vertices;
    struct Vector3ArrayAnimData *Normals;
    unsigned int VerticesCount;
    unsigned int NormalsCount;
};

#if 0
struct LandTable
{
    WORD COLCount;
    WORD AnimCount;
    DWORD Unknown_0;
    DWORD Unknown_1;
    DWORD COL;
    DWORD AnimData;
    DWORD TexName;
    DWORD TexList;
    DWORD Unknown_4;
    DWORD Unknown_5;
};

struct COL
{
    struct Vector3 Center;
    DWORD Radius;
    DWORD Padding[2];
    DWORD Object;
    DWORD field_1C;
    DWORD Flags;
};

struct GeoAnimData
{
    DWORD field_0;
    DWORD field_4;
    DWORD field_8;
    DWORD Model;
    DWORD Animation;
    DWORD field_14;
};
#endif

struct AnimHead2
{
    void *FrameData; /* either AnimFrame_PosRot, AnimFrame_PosRotScale or AnimFrame_VertUnk */
    unsigned int FrameCount;
    short unsigned int Flags;
    short unsigned int field_A; /* number of bits set in Flags? */
};

struct AnimHead
{
    struct OBJECT *Model;
    struct AnimHead2 *Head2;
};

#if 0
struct TexListEntry
{
    DWORD TexName;
    DWORD Unknown;
    DWORD RAMAddr;
};

struct TexListHead
{
    struct TexListEntry *Texlist;
    unsigned int Count;
};
#endif
