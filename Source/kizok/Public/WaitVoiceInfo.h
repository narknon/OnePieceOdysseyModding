#pragma once
#include "CoreMinimal.h"
#include "WaitVoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FWaitVoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PatternNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceID;
    
    KIZOK_API FWaitVoiceInfo();
};

