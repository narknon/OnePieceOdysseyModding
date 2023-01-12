#pragma once
#include "CoreMinimal.h"
#include "KizokBaseCharacterStatus.h"
#include "KizokPlayerStatus.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokPlayerStatus : public FKizokBaseCharacterStatus {
    GENERATED_BODY()
public:
    FKizokPlayerStatus();
};

