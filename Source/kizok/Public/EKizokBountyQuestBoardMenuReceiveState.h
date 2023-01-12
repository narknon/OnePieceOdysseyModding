#pragma once
#include "CoreMinimal.h"
#include "EKizokBountyQuestBoardMenuReceiveState.generated.h"

UENUM(BlueprintType)
enum class EKizokBountyQuestBoardMenuReceiveState : uint8 {
    RewardMoney,
    Brokerage,
    Over,
    Final,
};

