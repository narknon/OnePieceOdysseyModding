#pragma once
#include "CoreMinimal.h"
#include "eSoundFlag.generated.h"

UENUM(BlueprintType)
enum eSoundFlag {
    Walk,
    Run,
    LandingWeak,
    LandingStrong,
    DownWeak,
    DownStrong,
    Kneeled,
    Ladder,
    SoundFlagTableLast,
    Attack,
    LandingProgram,
    DownProgram,
    Wall,
};

