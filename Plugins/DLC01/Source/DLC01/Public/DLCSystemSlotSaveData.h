#pragma once
#include "CoreMinimal.h"
#include "DLCSystemSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDLCSystemSlotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[7];
    
    DLC01_API FDLCSystemSlotSaveData();
};

