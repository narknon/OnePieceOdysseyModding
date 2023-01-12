#pragma once
#include "CoreMinimal.h"
#include "KizokBattleStartCameraParam.h"
#include "KizokBattleResultCameraParam.h"
#include "KizokCameraShakeParam.h"
#include "Camera/CameraActor.h"
#include "KizokBattleCameraActor2.generated.h"

class UKizokCameraShake;

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleCameraActor2 : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattleStartCameraParam BattleStartCameraParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattleResultCameraParam BattleResultCameraParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCameraShake* CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokCameraShakeParam DamageShakeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokCameraShakeParam BlowDamageShakeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokCameraShakeParam CriticalShakeParam;
    
    AKizokBattleCameraActor2();
};

