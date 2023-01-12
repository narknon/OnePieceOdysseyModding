#pragma once
#include "CoreMinimal.h"
#include "EFPSTargetType.h"
#include "ExclusionFPSTargetComponentDelegate.h"
#include "RegistFPSTargetComponentDelegate.h"
#include "InvalidFPSTargetComponentDelegate.h"
#include "ValidFPSTargetComponentDelegate.h"
#include "Components/SphereComponent.h"
#include "KizokFPSTargetComponent.generated.h"

class AKizokFieldPlayerBase;
class UKizokParticleInstance;
class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokFPSTargetComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvalidDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFPSTargetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValidTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKizokFieldPlayerBase> m_pPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValidFPSTargetComponent OnValid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvalidFPSTargetComponent OnInvalid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegistFPSTargetComponent OnRegist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExclusionFPSTargetComponent OnExclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* pPointEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* pSensorEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokParticleInstance* m_pPointEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokParticleInstance* m_pSensorPointEffect;
    
public:
    UKizokFPSTargetComponent();
    UFUNCTION(BlueprintCallable)
    void OnValidComponent(AKizokFieldPlayerBase* Player);
    
    UFUNCTION(BlueprintCallable)
    void ONTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnInvalidComponent();
    
    UFUNCTION(BlueprintCallable)
    void OFFTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegist() const;
    
};

