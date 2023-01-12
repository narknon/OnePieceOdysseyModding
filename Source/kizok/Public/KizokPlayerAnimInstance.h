#pragma once
#include "CoreMinimal.h"
#include "EPlayerFieldActionType.h"
#include "EPlayerAnimationType.h"
#include "KizokBaseAnimInstance.h"
#include "KizokPlayerAnimInstance.generated.h"

class AKizokBaseCharacter;

UCLASS(Blueprintable, NonTransient)
class KIZOK_API UKizokPlayerAnimInstance : public UKizokBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokBaseCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAnimationType FieldAnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimePlaying;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fladActPacAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fladActPacAimYaw;
    
public:
    UKizokPlayerAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WalkToWaitConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WalkToRunConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WalkToRocket1In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WalkToJump1In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToWalkConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToTreasureConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToRunConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToRocket1In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToPacIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToJump1In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToDoorSingleBConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToDoorSingleAConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_WaitToDoorDoubleConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_RunToWalkConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_RunToWaitConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_RunToRocket1In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_RunToJump2In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1ShootToRocket1HandGrab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1MoveToRocket1Ed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1InToWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1InToRocket1Shoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1HandGrabToRocket1Move();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1EdToWalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1EdToWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Rocket1EdToRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacInToAimWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacEndToWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacAimWaitToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacAimWaitToAimTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacAimTriggerToAimShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacAimTriggerInToLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_PacAimShootToAimWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_MoveToFallConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_LandedToWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_JumpLpToJumpEd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_JumpEdToWalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_JumpEdToWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_JumpEdToRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Jump2InToJumpLp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_Jump1InToJumpLp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_FallToWaitConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_FallToLandedConduit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeTrans_Fld_ActToWaitConduit();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetPacAimYaw();
    
    UFUNCTION(BlueprintCallable)
    float GetPacAimPitch();
    
    UFUNCTION(BlueprintCallable)
    EPlayerFieldActionType GetFieldActionType();
    
};

