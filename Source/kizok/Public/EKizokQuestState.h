#pragma once
#include "CoreMinimal.h"
#include "EKizokQuestState.generated.h"

UENUM(BlueprintType)
enum class EKizokQuestState : uint8 {
    OrderNotAcceptedState,
    AcceptOrdersState,
    OrderedState,
    ReceivableRewardState,
    ClearState,
};

