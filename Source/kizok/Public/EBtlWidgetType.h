#pragma once
#include "CoreMinimal.h"
#include "EBtlWidgetType.generated.h"

UENUM(BlueprintType)
enum class EBtlWidgetType : uint8 {
    Situation,
    Main,
    Cmd,
    Order,
    Item,
    Skill,
    KiznaGauge,
    Result,
    SubCmd,
    PartySelect,
    Arts,
    MaxNum,
    None,
};

