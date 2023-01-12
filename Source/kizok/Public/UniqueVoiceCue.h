#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UniqueVoiceCue.generated.h"

USTRUCT(BlueprintType)
struct FUniqueVoiceCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath voicePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    KIZOK_API FUniqueVoiceCue();
};

