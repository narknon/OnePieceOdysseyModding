#pragma once
#include "CoreMinimal.h"
#include "KizokTpsBulletBase.h"
#include "KizokTpsBulletNormal.generated.h"

class USceneComponent;
class USphereComponent;
class AKizokEffectParticle2;
class UKizokProjectileMovementComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokTpsBulletNormal : public AKizokTpsBulletBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokProjectileMovementComponent* projectileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* bulletEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* attackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    AKizokTpsBulletNormal();
};

