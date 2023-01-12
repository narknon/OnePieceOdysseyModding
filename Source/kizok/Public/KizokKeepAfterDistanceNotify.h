#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokKeepAfterDistanceNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokKeepAfterDistanceNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UKizokKeepAfterDistanceNotify();
};

