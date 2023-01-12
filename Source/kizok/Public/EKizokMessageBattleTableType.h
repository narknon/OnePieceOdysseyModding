#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageBattleTableType.generated.h"

UENUM(BlueprintType)
enum class EKizokMessageBattleTableType : uint8 {
    ScenarioBattleTalk,
    ScenarioBattleTalkAction,
    BattleTalk,
    BattleTalkAction,
    BattleTalkControll,
    BattleCommonTalkAction,
    Num,
    EachRegionNum = 0x2,
    EKizokMessageBattleTableType_MAX = 0x7,
};

