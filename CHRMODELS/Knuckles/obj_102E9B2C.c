#include "../../Structs.h"

extern struct ATTACH attach_102E9B00;
extern struct OBJECT obj_102E93CC;

struct OBJECT obj_102E9B2C =
{
    ObjectFlags_NoTranslate | ObjectFlags_NoRotate | ObjectFlags_NoScale | ObjectFlags_NoChildren,    &attach_102E9B00,
    { 0.0f, 0.0f, 0.0f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    NULL,
    &obj_102E93CC
};
