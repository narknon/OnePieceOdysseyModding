#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokBtlAtkVoiceNotify.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokBtlAtkVoiceNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NonCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Critical;
    
    UKizokBtlAtkVoiceNotify();
};

