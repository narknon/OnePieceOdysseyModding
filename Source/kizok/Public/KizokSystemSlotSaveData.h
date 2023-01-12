#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokSystemSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokSystemSlotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClearData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreateTime;
    
    KIZOK_API FKizokSystemSlotSaveData();
};

