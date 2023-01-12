#pragma once
#include "CoreMinimal.h"
#include "MatCurve.generated.h"

class UCurveBase;

USTRUCT(BlueprintType)
struct FMatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveBase* Curve;
    
    KIZOK_API FMatCurve();
};

