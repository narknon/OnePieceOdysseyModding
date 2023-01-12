#pragma once
#include "CoreMinimal.h"
#include "EUNIQUE_ITEMVOICE_ID.generated.h"

UENUM(BlueprintType)
enum class EUNIQUE_ITEMVOICE_ID : uint8 {
    EIVI_UNDEFINED,
    EIVI_HEAL_StoZ,
    EIVI_HEAL_StoN,
    EIVI_HEAL_StoR,
    EIVI_HEAL_ZtoS,
    EIVI_COOKED_StoN,
    EIVI_COOKED_StoR,
    EIVI_MAX UMETA(Hidden),
};

