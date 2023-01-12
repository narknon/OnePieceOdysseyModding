#pragma once
#include "CoreMinimal.h"
#include "eSeqFlag.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokFlagNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokFlagNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<eSeqFlag> NotifyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMotionStop;
    
public:
    UKizokFlagNotify();
};

