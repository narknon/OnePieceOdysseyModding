#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokSlowNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokSlowNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowRate;
    
    UKizokSlowNotifyState();
};

