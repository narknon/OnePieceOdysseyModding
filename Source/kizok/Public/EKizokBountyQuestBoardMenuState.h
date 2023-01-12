#pragma once
#include "CoreMinimal.h"
#include "EKizokBountyQuestBoardMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokBountyQuestBoardMenuState : uint8 {
    SelectQuestState,
    CheckOrdersState,
    ReceivingProductionState,
    CheckReceiveRewardState,
    ReceiveRewardAfterState,
};

