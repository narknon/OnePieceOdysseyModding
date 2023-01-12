#pragma once
#include "CoreMinimal.h"
#include "FoculAptureCurves.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct KIZOK_API FFoculAptureCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* d2focul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* d2aperture;
    
    FFoculAptureCurves();
};

