#pragma once
#include "CoreMinimal.h"
#include "FieldOptimizeConfigData.h"
#include "FieldOptimizePLConfigData.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FFieldOptimizePLConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldOptimizeConfigData BaseConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFieldOptimizeConfigData> AreaConfigs;
    
    FFieldOptimizePLConfigData();
};

