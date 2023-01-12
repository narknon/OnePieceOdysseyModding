#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnimationType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimationType : uint8 {
    Wait,
    Wait2,
    Wait3,
    Walk,
    Run,
    TreasureOpen,
    DoorOpen,
    Fall,
    Landed,
    Jump1Ed,
    Jump1In,
    Jump1Lp,
    Jump2In,
    Rocket1In,
    Rocket1Move,
    Rocket1Ed,
    Rocket1Shoot,
    Rocket1HandGrab,
    PachincoWaitStart,
    PachincoWaitLoop,
    PachincoWaitEnd,
    PachincoWaitTurnUp,
    PachincoWaitTurnDown,
    PachincoWaitTurnLeft,
    PachincoWaitTurnRight,
    PachincoAttackIn,
    PachincoAttackLoop,
    PachincoAttackShoot,
    PachincoAttackTurnUp,
    PachincoAttackTurnDown,
    PachincoAttackTurnLeft,
    PachincoAttackTurnRight,
};

