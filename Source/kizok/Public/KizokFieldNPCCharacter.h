#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PLAYER_ID.h"
#include "OnNPCInteractAreaPlayerWithinDelegate.h"
#include "OnNPCInteractAreaPlayerEndDelegate.h"
#include "OnNPCInteractAreaPlayerBeginDelegate.h"
#include "OnNPCInteractDelegate.h"
#include "OnNPCInteractOkEndDelegate.h"
#include "OnNPCInteractOkBeginDelegate.h"
#include "OnNPCIconViewEndDelegate.h"
#include "OnNPCIconViewBeginDelegate.h"
#include "FieldNPCWeaponParam.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "KizokFieldNPCCharacter.generated.h"

class UKizokPhysMtrlBaseComponent;
class UKizokSoundComponent;
class UMaterialInstance;
class UBlendSpace1D;
class UAnimationAsset;
class UAnimMontage;
class UAnimSequence;
class UCurveFloat;

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldNPCCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCIconViewBegin OnNPCIconViewBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCIconViewEnd OnNPCIconViewEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteractOkBegin OnNPCInteractOkBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteractOkEnd OnNPCInteractOkEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteract OnNPCInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteractAreaPlayerBegin OnNPCInteractAreaPlayerBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteractAreaPlayerEnd OnNPCInteractAreaPlayerEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCInteractAreaPlayerWithin OnNPCInteractAreaPlayerWithin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SectionMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSoundComponent* m_pSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokPhysMtrlBaseComponent* m_pPhysicalMaterialComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendSpaceMoveRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetUROEnableOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldNPCWeaponParam> AttachWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractPossibleOntheWayTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInIconRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIKEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutSceneCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstance*> HideStrawHatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPorhibitDither;
    
    AKizokFieldNPCCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void UninitializeAnimation();
    
    UFUNCTION(BlueprintCallable)
    void TrySetUpUpdateRateOptimization(bool bIsWalk);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAndActivity(bool visible, bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperFacial(const FName& A, const FName& B, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetTone(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAnimation(UAnimSequence* Anim);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayTime(float Frame, int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(int32 slot, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerFacial(const FName& A, const FName& B, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    bool SetLookAtTag(const FName& Tag, float Goal, float Time, bool isBody);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtPosition(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAt(const FVector& Pos, float Goal, float Time, bool isBody);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractOnTheWayTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractOffset(FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractDistance(float dist);
    
    UFUNCTION(BlueprintCallable)
    void SetIconDistance(float dist);
    
    UFUNCTION(BlueprintCallable)
    bool SetFitGround();
    
    UFUNCTION(BlueprintCallable)
    void SetFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    bool SetEyeLookAtTarget(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeLookAtPosition(const FVector& TargetPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetEyelidAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeBlinkInterval(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetExpressionBlendRate(float Rate, bool bCurve1, bool bCurve2, bool bCurve3, bool bCurve4, bool bCurve5, bool bCurve6, bool bCurve7, bool bCurve8, bool bCurve9, bool bCurve10);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSecondaryAnimInitMultiframe();
    
    UFUNCTION(BlueprintCallable)
    void SetEmotion(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicsSimulationExecuteCount(int32 ExecuteCount);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicsBlendRate(float Rate, bool bCurve1, bool bCurve2, bool bCurve3, bool bCurve4, bool bCurve5, bool bCurve6, bool bCurve7, bool bCurve8, bool bCurve9, bool bCurve10);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherFade(float Goal, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetBSPlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendUpperFacial(const FName& A, const FName& B, float AWeight, float BWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceAlpha(float Goal, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpace(UBlendSpace1D* bs);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendRatio(int32 slot, float Ratio);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendLowerFacial(const FName& A, const FName& B, float AWeight, float BWeight);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlendAnimation(const FName& Name, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAnimation(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void ResetLookAt(float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetFacial();
    
    UFUNCTION(BlueprintCallable)
    void ResetEyeLookAt();
    
    UFUNCTION(BlueprintCallable)
    void ResetEyeBlinkInterval();
    
    UFUNCTION(BlueprintCallable)
    void ResetExpressionBlendRate();
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicsBlendRate();
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamics(ETeleportType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetBlendRatio();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetDynamicsForNPCSpanwer();
    
    UFUNCTION(BlueprintCallable)
    void ReInitializeAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReflectIKFlag();
    
    UFUNCTION(BlueprintCallable)
    void PlayLipSync(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlayBlendSpace(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMontageSection(const FName& Section, float BlendInTime, float BlendOutTime, float PlayRate, float Position, bool IsDynamicsReset);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationAsset(UAnimationAsset* Asset, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimation(const FName& Name, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerChanged(PLAYER_ID ID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractRegistered() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimEnd(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    void HideStrawHat(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void HideLogPose(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void HideGlassBead(bool bHide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveDestroyRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetStartAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayRate(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    float GetMoveSpeedRate();
    
    UFUNCTION(BlueprintCallable)
    FVector GetInteractPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBSPlayRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpace1D* GetBlendSpace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFieldNPCWeaponParam> GetAttachWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetAnimationRotValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 GetAnimationMoveValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimationCurrentTime(int32 slot);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationAsset* GetAnimAsset(const FName& Name);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceDitherFade(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableExpression();
    
    UFUNCTION(BlueprintCallable)
    void EnableDynamics();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableExpression();
    
    UFUNCTION(BlueprintCallable)
    void DisableDynamics();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRequest(bool IsFade);
    
    UFUNCTION(BlueprintCallable)
    void CompletedSpawn();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLODBounds();
    
};

