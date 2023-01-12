#pragma once
#include "CoreMinimal.h"
#include "PlaySequenceParamsBase4Item.h"
#include "PlaySequenceParams4Item.generated.h"

USTRUCT(BlueprintType)
struct FPlaySequenceParams4Item {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaySequenceParamsBase4Item SeqForGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaySequenceParamsBase4Item SeqForAll;
    
    KIZOK_API FPlaySequenceParams4Item();
};

