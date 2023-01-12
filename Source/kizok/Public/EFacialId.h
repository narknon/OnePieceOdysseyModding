#pragma once
#include "CoreMinimal.h"
#include "EFacialId.generated.h"

UENUM(BlueprintType)
enum class EFacialId : uint8 {
    None,
    Blink,
    Normal,
    Bt_Normal1,
    Bt_Normal2,
    Bt_Attack1,
    Bt_Attack2,
    Bt_Damage1,
    Bt_Damage2,
    Bt_Down,
    Bt_Sleep,
    Bt_Win,
    Ac_Unique1,
    Ac_Unique2,
    Ac_Unique3,
    Ac_Unique4,
    Ac_Unique5,
    Cs_Basic1,
    Cs_Basic2,
    Cs_Basic3,
    Cs_Basic4,
    Cs_Basic5,
    Cs_Unique1,
    Cs_Unique2,
    Cs_Unique3,
    Cs_Unique4,
    Cs_Unique5,
    Cs_Unique6,
    Cs_Unique7,
    Cs_Unique8,
    Cs_Unique9,
    Cs_Unique10,
    Eye_up,
    Eye_down,
    Eye_right,
    Eye_left,
    Corner_Up,
    Corner_Down,
    Mouth_A,
    Mouth_I,
    Mouth_U,
    Mouth_E,
    Mouth_O,
    Mouth_Sh,
    Mouth_Bmp,
    Mouth_add,
};
