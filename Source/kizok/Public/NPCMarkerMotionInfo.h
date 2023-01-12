#pragma once
#include "CoreMinimal.h"
#include "NPCMarkerMotionInfo.generated.h"

USTRUCT(BlueprintType)
struct FNPCMarkerMotionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    KIZOK_API FNPCMarkerMotionInfo();
};

