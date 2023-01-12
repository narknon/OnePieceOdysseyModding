#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "Camera/CameraShake.h"
#include "Camera/CameraShake.h"
#include "KizokCameraShakeParam.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokCameraShakeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FROscillator ShakeRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOscillator ShakeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator ShakeFov;
    
    FKizokCameraShakeParam();
};

