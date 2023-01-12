#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "KizokSnipeTargetBase.h"
#include "KizokSnipeTargetFruit.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;
class USkeletalMeshComponent;
class USphereComponent;
class AKizokEffectParticle2;
class AKizokGimmickSnipeTargetTree;

UCLASS(Blueprintable)
class KIZOK_API AKizokSnipeTargetFruit : public AKizokSnipeTargetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* sklMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HitVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokGimmickSnipeTargetTree* ownerTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* actionTargetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* hitEffect;
    
public:
    AKizokSnipeTargetFruit();
    UFUNCTION(BlueprintCallable)
    void ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActionAreaVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

