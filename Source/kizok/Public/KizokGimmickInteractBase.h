#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnGimmickInteractDelegate.h"
#include "OnGimmickInteractImpossibleDelegate.h"
#include "OnGimmickInteractPossibleDelegate.h"
#include "OnGimmickIconViewEndDelegate.h"
#include "OnGimmickIconViewBeginDelegate.h"
#include "KizokGimmickBase.h"
#include "KizokGimmickInteractBase.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;
class USphereComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokGimmickInteractBase : public AKizokGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGimmickIconViewBegin OnGimmickIconViewBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGimmickIconViewEnd OnGimmickIconViewEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGimmickInteractPossible OnGimmickIntertactPossible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGimmickInteractImpossible OnGimmickInteractImpossible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGimmickInteract OnGimmickInteract;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* IconVisibleArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractPossibleOntheWayTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAngleLimitFromPlayer;
    
public:
    AKizokGimmickInteractBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInteract();
    
    UFUNCTION(BlueprintCallable)
    void UnregistToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractOnTheWayTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RegistToPlayer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnIconAreaOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnIconAreaInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIconViewArea() const;
    
    UFUNCTION(BlueprintCallable)
    void Interact();
    
    UFUNCTION(BlueprintCallable)
    void EnableInteract();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteract();
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract();
    
};

