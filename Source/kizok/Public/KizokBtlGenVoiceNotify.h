#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokBtlGenVoiceNotify.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokBtlGenVoiceNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Voice;
    
    UKizokBtlGenVoiceNotify();
};

