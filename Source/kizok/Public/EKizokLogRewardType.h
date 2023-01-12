#pragma once
#include "CoreMinimal.h"
#include "EKizokLogRewardType.generated.h"

UENUM(BlueprintType)
enum class EKizokLogRewardType : uint8 {
    Text,
    TextAndItem,
    Item,
    GroundLog,
    Num,
};

