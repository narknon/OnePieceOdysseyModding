#pragma once
#include "CoreMinimal.h"
#include "EBattleSubCmdType.generated.h"

UENUM(BlueprintType)
enum class EBattleSubCmdType : uint8 {
    Strategy,
    PartyChange,
    Escape,
    StatusCheck,
    HelpCheck,
    MaxNum,
    None,
};

