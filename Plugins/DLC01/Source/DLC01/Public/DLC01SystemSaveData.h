#pragma once
#include "CoreMinimal.h"
#include "DLCSystemSlotSaveData.h"
#include "DLC01SystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDLC01SystemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCSystemSlotSaveData SlotDatas[20];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[828];
    
    DLC01_API FDLC01SystemSaveData();
};

