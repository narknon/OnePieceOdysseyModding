#pragma once
#include "CoreMinimal.h"
#include "MESSAGE_WINDOW_TYPE.generated.h"

UENUM(BlueprintType)
enum class MESSAGE_WINDOW_TYPE : uint8 {
    NONE,
    TALK,
    CUBE,
    ITEM,
    MESSAGE_WINDOW_MAX UMETA(Hidden),
};

