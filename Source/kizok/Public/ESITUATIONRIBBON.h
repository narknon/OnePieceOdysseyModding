#pragma once
#include "CoreMinimal.h"
#include "ESITUATIONRIBBON.generated.h"

UENUM(BlueprintType)
enum class ESITUATIONRIBBON : uint8 {
    RIBBON_NONE,
    RIBBON_A,
    RIBBON_B,
    RIBBON_C,
    RIBBON_OLD_A,
    NUM,
};

