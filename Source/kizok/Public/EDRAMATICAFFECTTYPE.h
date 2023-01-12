#pragma once
#include "CoreMinimal.h"
#include "EDRAMATICAFFECTTYPE.generated.h"

UENUM(BlueprintType)
enum class EDRAMATICAFFECTTYPE : uint8 {
    TYPENONE,
    SOMEONE,
    ALLPLAYERS,
    INGROUPPLAYERS,
    ALLENEMIES,
    INGROUPENEMIES,
    ALLONFIELDS,
    INVALID,
};

