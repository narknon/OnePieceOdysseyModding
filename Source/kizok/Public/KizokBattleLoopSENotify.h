#pragma once
#include "CoreMinimal.h"
#include "ELoopSENotifyAction.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokBattleLoopSENotify.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokBattleLoopSENotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoopSENotifyAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* LoopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* PostSE;
    
    UKizokBattleLoopSENotify();
};

