#include "../../Structs.h"

extern struct OBJECT obj_102E237C;

struct OBJECT OBJECT_Knuckles_Model =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoDraw,    NULL,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &obj_102E237C,
    NULL
};
