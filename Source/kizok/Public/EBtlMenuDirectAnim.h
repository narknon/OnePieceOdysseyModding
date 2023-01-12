#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuDirectAnim.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuDirectAnim : uint8 {
    TurnStart,
    TurnSkip,
    PreCmdAcion,
    PartyChange,
    CharaDead,
    TurnGaugePackQueue,
    GroupMove,
    KickOut,
    KizunaGaugeUp,
    SpGaugeRecover,
    MaxNum,
    None,
};

