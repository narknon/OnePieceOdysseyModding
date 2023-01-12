#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "KizokActorBase.generated.h"

class AActor;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UKizokPhysMtrlBaseComponent;
class UKizokSkeletalMeshComponent;
class UKizokSoundComponent;
class UBlendSpace1D;
class UAnimationAsset;
class UAnimSequence;

UCLASS(Blueprintable)
class KIZOK_API AKizokActorBase : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_pCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSoundComponent* m_pSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokPhysMtrlBaseComponent* m_pPhysicalMaterialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullSpeedDownZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPushAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WalkableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_pStartAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCorrectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* BlendSpace;
    
    AKizokActorBase();
    UFUNCTION(BlueprintCallable)
    void SetPlayTime(float Frame, int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float Rate, int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationAsset(UAnimationAsset* Asset, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHitCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimationEnd(int32 slot) const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    FString GetBlendSpaceName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetAnimationRotSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 GetAnimationMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimationCurrentTime(int32 slot);
    
};

