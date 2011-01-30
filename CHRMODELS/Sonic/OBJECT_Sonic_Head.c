#include "../../Structs.h"

extern struct ATTACH ATTACH_SONIC_HEAD;
extern struct OBJECT obj_10565C34;

struct OBJECT OBJECT_Sonic_Head =
{
    ObjectFlags_NoScale,    &ATTACH_SONIC_HEAD,
    { 0.096738f, 0.176359f, 0.0f },
    { 0, 0, 21 },
    { 1.0f, 1.0f, 1.0f },
    &obj_10565C34,
    NULL
};
