#pragma once
#include "CoreMinimal.h"
#include "AEF_TYPE.generated.h"

UENUM(BlueprintType)
enum class AEF_TYPE : uint8 {
    AEF_HPRECOVER,
    AEF_BUF,
    AEF_DEB,
    AEF_AILMENT,
    AEF_AILMENT_LOOP,
    AEF_SELECT_LOOP,
    AEF_TARGET_LOOP,
    AEF_DAMAGE,
    AEF_CRITICAL,
    AEF_BUF_LOOP,
    AEF_DEB_LOOP,
    AEF_MAX UMETA(Hidden),
};

