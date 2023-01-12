#pragma once
#include "CoreMinimal.h"
#include "KizokTravelData.h"
#include "PLAYER_ID.h"
#include "ERestrictionType.h"
#include "OnPlayerChangedDelegate.h"
#include "OnFieldPlayerEndInitDelegate.h"
#include "OnFieldPlayerDamageDelegate.h"
#include "RestrictionTimeTask.h"
#include "PlayerInfo.h"
#include "PlayerClass.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KizokFieldPlayerManager.generated.h"

class APawn;
class AKizokAIController;
class APlayerController;
class UKizokFieldPlayerTexturePreloader;

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldPlayerManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFieldPlayerTexturePreloader* PlayerTexturePreloader;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFieldPlayerDamage OnFieldPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallHeightBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallFixedRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddFallRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotFallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFieldPlayerEndInit OnFieldPlayerEndInit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerChanged OnPlayerChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerClass> m_PlayerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerInfo> m_Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistDest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistWallKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistWallClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistNormalNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistShopNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistIronDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconViewDistBridgeBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseCameraPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseCameraYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseCameraPitchMaxTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseCameraYawMaxTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRestrictionTimeTask> m_RestTimeTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbRailCameraTransitionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultAutoCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultResetCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetCameraSpeed;
    
public:
    AKizokFieldPlayerManager();
    UFUNCTION(BlueprintCallable)
    void SetEnableDitherPlayer(bool bEnable, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDitherFade(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldMotionBlur();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraArmRotationSpeedRot(FRotator rot, FRotator Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraArmRotationSpeed(FRotator rot, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraArmRotation(FRotator rot, float Time);
    
    UFUNCTION(BlueprintCallable)
    void Restriction(bool flag, ERestrictionType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetFieldMotionBlur();
    
    UFUNCTION(BlueprintCallable)
    void RequestDamage(PLAYER_ID ID, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void OutChopperVol();
    
    UFUNCTION(BlueprintCallable)
    void OutChangeChopperVol();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFastTravel(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyKeyRep();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyKeyPre();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestriction(ERestrictionType Type) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerAnyClimbing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayable();
    
    UFUNCTION(BlueprintCallable)
    bool IsNowCharaChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInChopperVol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInChangeChopperVol() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentPlayerLadder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlPlayer(PLAYER_ID Type) const;
    
    UFUNCTION(BlueprintCallable)
    void InChopperVol();
    
    UFUNCTION(BlueprintCallable)
    void InChangeChopperVol();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoControlTime() const;
    
    UFUNCTION(BlueprintCallable)
    APawn* GetCurrentPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PLAYER_ID GetControlPlayerType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeControlPlayer(PLAYER_ID Type, FVector Pos, FRotator rot, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void AllOnRestriction();
    
    UFUNCTION(BlueprintCallable)
    void AllOffRestriction();
    
};

