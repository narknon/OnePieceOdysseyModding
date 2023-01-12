#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokChangeTargetShowNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokChangeTargetShowNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepDisappeared;
    
    UKizokChangeTargetShowNotifyState();
};

