#pragma once
#include "CoreMinimal.h"
#include "eHMCFUNCS.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokHitMatCurveNotify.generated.h"

class UCurveBase;

UCLASS(Blueprintable, CollapseCategories)
class UKizokHitMatCurveNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveBase* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eHMCFUNCS Function;
    
    UKizokHitMatCurveNotify();
};

