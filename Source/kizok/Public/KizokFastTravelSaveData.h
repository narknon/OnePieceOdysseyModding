#pragma once
#include "CoreMinimal.h"
#include "KizokFastTravelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokFastTravelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[127];
    
    KIZOK_API FKizokFastTravelSaveData();
};

