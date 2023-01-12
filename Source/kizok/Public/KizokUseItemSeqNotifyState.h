#pragma once
#include "CoreMinimal.h"
#include "SortTargetParam.h"
#include "PlaySequenceParams4Item.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokUseItemSeqNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokUseItemSeqNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortTargetParam SortTargetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaySequenceParams4Item PlaySequenceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSetDirWhenDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BigDistance;
    
public:
    UKizokUseItemSeqNotifyState();
};

