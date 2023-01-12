#pragma once
#include "CoreMinimal.h"
#include "eSoundFlag.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokSoundFlagNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokSoundFlagNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<eSoundFlag> SoundFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UKizokSoundFlagNotify();
};

