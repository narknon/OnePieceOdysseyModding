#pragma once
#include "CoreMinimal.h"
#include "KizokLogSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokLogSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[127];
    
    KIZOK_API FKizokLogSaveData();
};

