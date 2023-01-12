#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnfightableCrane.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUnfightableCrane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeCamPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCranePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* YawCurve;
    
    KIZOK_API FUnfightableCrane();
};

