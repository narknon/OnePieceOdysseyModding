#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyHitExplosionDelegate.h"
#include "EnemyHitPachinkoDelegate.h"
#include "EnemyContactPlayerDelegate.h"
#include "EnemyFindPlayerDelegate.h"
#include "KizokAttachWeaponParam.h"
#include "UObject/NoExportTypes.h"
#include "KizokEnemyBase.h"
#include "KizokFieldEnemyBase.generated.h"

class UPrimitiveComponent;
class AActor;
class USplineComponent;
class UPawnMovementComponent;
class USphereComponent;
class AKizokGimmickNPCMoveMarker;
class ANPCMoveMarkerInfo;
class UTexture2D;

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldEnemyBase : public AKizokEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowContactDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitVolumeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FindViewingAngle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyFindPlayer EnemyFindPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyContactPlayer EnemyContactPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowChaseRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CursorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokAttachWeaponParam> AttachWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebornTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyPartyID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitPachinko EnemyHitPachinko;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitExplosion EnemyHitExplosion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pHitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InteractTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokGimmickNPCMoveMarker* Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPCMoveMarkerInfo* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponAnimationName;
    
public:
    AKizokFieldEnemyBase();
    UFUNCTION(BlueprintCallable)
    void TurnOffGroundCorrection();
    
    UFUNCTION(BlueprintCallable)
    void StartEncount();
    
    UFUNCTION(BlueprintCallable)
    void StartBattle();
    
    UFUNCTION(BlueprintCallable)
    void SetRunMode(bool IsRun);
    
    UFUNCTION(BlueprintCallable)
    void SetHitVolumeOffset(FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldEnemyAttachWeaponsArray(TArray<FKizokAttachWeaponParam> AttachWeaponParamArray);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFieldEnemyAttachWeaponByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFieldEnemyAttachWeaponByBPName(const FString& BPName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFieldEnemyAttachWeaponAll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsRunMode();
    
    UFUNCTION(BlueprintCallable)
    float GetWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetRunSpeed();
    
    UFUNCTION(BlueprintCallable)
    FVector GetHitVolumeOffset();
    
    UFUNCTION(BlueprintCallable)
    FString GetFieldEnemyWeaponAnimName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKizokAttachWeaponParam> GetFieldEnemyAttachWeaponsArray();
    
    UFUNCTION(BlueprintCallable)
    void EndBattle();
    
    UFUNCTION(BlueprintCallable)
    void AddFieldEnemyAttachWeapon(FKizokAttachWeaponParam AttachWeaponParam);
    
};

