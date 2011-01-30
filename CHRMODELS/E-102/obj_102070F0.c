#include "../../Structs.h"

extern struct ATTACH attach_102070C4;
extern struct OBJECT obj_10206D3C;
extern struct OBJECT obj_102068F0;

struct OBJECT obj_102070F0 =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale,    &attach_102070C4,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10206D3C,
    &obj_102068F0
};
