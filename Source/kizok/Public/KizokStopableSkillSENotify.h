#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokStopableSkillSENotify.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokStopableSkillSENotify : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SE;
    
public:
    UKizokStopableSkillSENotify();
};

