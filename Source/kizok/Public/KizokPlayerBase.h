#pragma once
#include "CoreMinimal.h"
#include "KizokCharaBase.h"
#include "KizokPlayerBase.generated.h"

class UKizokBattleSpringArmComponent;
class USphereComponent;
class AKizokFieldCameraActor;
class UKizokPlayerInput;

UCLASS(Blueprintable)
class KIZOK_API AKizokPlayerBase : public AKizokCharaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleSpringArmComponent* CameraFieldBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomCameraNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CameraSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAngleSafeReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarAltitude;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokPlayerInput* PlayerInput;
    
public:
    AKizokPlayerBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokFieldCameraActor* GetFieldCamera() const;
    
};

