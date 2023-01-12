#pragma once
#include "CoreMinimal.h"
#include "EKizokBountyQuestState.generated.h"

UENUM(BlueprintType)
enum class EKizokBountyQuestState : uint8 {
    OrderNotAcceptedState,
    AcceptOrdersState,
    OrderedState,
    ReceivableRewardState,
    ClearState,
};

