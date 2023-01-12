#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotifyDisplayName;
    
public:
    UKizokAnimNotify();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetNotifyDisplayName(const FString& NewName) const;
    
};

