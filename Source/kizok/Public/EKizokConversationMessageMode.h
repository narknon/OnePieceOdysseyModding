#pragma once
#include "CoreMinimal.h"
#include "EKizokConversationMessageMode.generated.h"

UENUM(BlueprintType)
enum class EKizokConversationMessageMode : uint8 {
    FieldMessageMode,
    BattleTalkMode,
    BountyQuestMode,
};

