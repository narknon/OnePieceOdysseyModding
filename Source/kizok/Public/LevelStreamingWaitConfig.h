#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingWaitConfig.generated.h"

USTRUCT(BlueprintType)
struct FLevelStreamingWaitConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDelay;
    
public:
    KIZOK_API FLevelStreamingWaitConfig();
};

