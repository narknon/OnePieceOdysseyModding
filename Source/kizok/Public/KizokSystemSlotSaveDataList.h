#pragma once
#include "CoreMinimal.h"
#include "KizokSystemSlotSaveData.h"
#include "KizokSystemSlotSaveDataList.generated.h"

USTRUCT(BlueprintType)
struct FKizokSystemSlotSaveDataList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSystemSlotSaveData SlotData[20];
    
    KIZOK_API FKizokSystemSlotSaveDataList();
};

