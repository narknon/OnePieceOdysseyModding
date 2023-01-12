#pragma once
#include "CoreMinimal.h"
#include "eSeqFlag.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokFlagNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokFlagNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<eSeqFlag> NotifyType;
    
    UKizokFlagNotifyState();
};

