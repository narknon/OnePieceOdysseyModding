#pragma once
#include "CoreMinimal.h"
#include "EKizokQuestInfoConditionType.generated.h"

UENUM(BlueprintType)
enum class EKizokQuestInfoConditionType : uint8 {
    Normal,
    Item,
    Enemy,
};

