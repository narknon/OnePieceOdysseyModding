#pragma once
#include "CoreMinimal.h"
#include "KizokDemoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokDemoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[127];
    
    KIZOK_API FKizokDemoSaveData();
};

