#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageBattleSoundType.generated.h"

UENUM(BlueprintType)
enum class EKizokMessageBattleSoundType : uint8 {
    ScenarioBattleTalk,
    BattleTalk,
    Num,
    EachRegionNum = 0x1,
    EKizokMessageBattleSoundType_MAX = 0x3,
};

