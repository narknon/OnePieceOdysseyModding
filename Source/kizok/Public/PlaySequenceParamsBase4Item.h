#pragma once
#include "CoreMinimal.h"
#include "PlaySequenceParamsBase4Item.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPlaySequenceParamsBase4Item {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* BigSequence;
    
    KIZOK_API FPlaySequenceParamsBase4Item();
};

