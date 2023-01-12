#pragma once
#include "CoreMinimal.h"
#include "FieldOptimizePLConfigData.h"
#include "Engine/DataAsset.h"
#include "FieldOptimizeConfigDatabase.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UFieldOptimizeConfigDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFieldOptimizePLConfigData> PLConfigs;
    
public:
    UFieldOptimizeConfigDatabase();
};

