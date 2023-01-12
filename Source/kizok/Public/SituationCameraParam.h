#pragma once
#include "CoreMinimal.h"
#include "ESITUATIONCAMERA_ASSIGN.h"
#include "SituationCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FSituationCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESITUATIONCAMERA_ASSIGN CamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TgtUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptUID;
    
    KIZOK_API FSituationCameraParam();
};

