#pragma once
#include "CoreMinimal.h"
#include "KizokAreaSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokAreaSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[127];
    
    KIZOK_API FKizokAreaSaveData();
};

