#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FieldOptimizeConfigData.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FFieldOptimizeConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnloadLevelImmediatelyOnWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelStreamingComponentsRegistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelStreamingComponentsUnregistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnregisterComponentsTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelStreamingActorsUpdateTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitLevelRenderAssetsProcessComponentsForVisibleOnPlayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector DistFieldMinimumAtlasSize;
    
    FFieldOptimizeConfigData();
};

