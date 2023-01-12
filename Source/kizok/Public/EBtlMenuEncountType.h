#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuEncountType.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuEncountType : uint8 {
    Normal,
    NavalFlag,
    BaroqueWorks,
    FrankyFamily,
    CipherPol,
    DonquixotePirates,
    Cavendish,
    BlackbeardPirates,
    WhitebeardPirates,
    MaxNum,
    None,
};

