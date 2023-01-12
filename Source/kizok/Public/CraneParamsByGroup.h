#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ByP.h"
#include "CraneParamsByGroup.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FCraneParamsByGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FByP byPParam[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeCamPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmLenCurve;
    
    KIZOK_API FCraneParamsByGroup();
};

