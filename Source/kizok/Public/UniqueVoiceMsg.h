#pragma once
#include "CoreMinimal.h"
#include "UniqueVoiceMsg.generated.h"

USTRUCT(BlueprintType)
struct FUniqueVoiceMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayed;
    
    KIZOK_API FUniqueVoiceMsg();
};

