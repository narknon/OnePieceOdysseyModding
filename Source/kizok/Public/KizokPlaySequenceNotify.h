#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokPlaySequenceNotify.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokPlaySequenceNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* BigSequence;
    
    UKizokPlaySequenceNotify();
};

