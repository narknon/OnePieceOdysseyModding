#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokDistanceInsureNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokDistanceInsureNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UKizokDistanceInsureNotifyState();
};

