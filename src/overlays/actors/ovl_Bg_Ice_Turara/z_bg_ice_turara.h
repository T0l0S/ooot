#pragma once
#define Z_BG_ICE_TURARA_H

#include "ultra64.h"
#include "global.h"

struct BgIceTurara;

typedef void (*BgIceTuraraActionFunc)(struct BgIceTurara*, GlobalContext*);

enum BgIceTuraraType {
    /* 0 */ TURARA_STALAGMITE,
    /* 1 */ TURARA_STALACTITE,
    /* 2 */ TURARA_STALACTITE_REGROW
};


struct BgIceTurara {

    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgIceTuraraActionFunc actionFunc;
    /* 0x0168 */ s16 shiverTimer;
    /* 0x016C */ ColliderCylinder collider;
}; 


