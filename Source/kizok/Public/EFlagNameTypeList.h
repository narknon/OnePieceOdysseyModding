#pragma once
#include "CoreMinimal.h"
#include "EFlagNameTypeList.generated.h"

UENUM(BlueprintType)
enum class EFlagNameTypeList : uint8 {
    KIZOK_FLAGNAMETYPE_BOOL,
    KIZOK_FLAGNAMETYPE_INT,
    KIZOK_FLAGNAMETYPE_FLOAT,
    KIZOK_FLAGNAMETYPE_VECTOR,
    KIZOK_FLAGNAMETYPE_ROTATOR,
    KIZOK_FLAGNAMETYPE_STRING,
    KIZOK_FLAGNAMETYPE_MAX UMETA(Hidden),
};

