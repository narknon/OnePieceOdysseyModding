#pragma once
#include "CoreMinimal.h"
#include "KizokItemActorBaseFoundDelegate.h"
#include "KizokItemActorBaseObtainDelegate.h"
#include "KizokItemActorBaseNoInteractDelegate.h"
#include "KizokItemActorBaseInteractDelegate.h"
#include "ObtainItemInfo.h"
#include "GameFramework/Actor.h"
#include "KizokItemActorBase.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokItemActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorBaseInteract OnInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorBaseNoInteract OnNoInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorBaseObtain OnObtain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorBaseFound OnFound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustIconObstacleOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObtainItemInfo> ObtainItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ItemID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysicsBefInBattle;
    
public:
    AKizokItemActorBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInteract();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartBattleShowCapture();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegistRevivalTime(float RevivalTime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteract();
    
private:
    UFUNCTION(BlueprintCallable)
    void PreBattleToField();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevival();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverPossessMaxItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverPossessMaxAcce();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractRegistered() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USphereComponent* GetCollisionForOverlap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableInteract();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteract();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckObtainItem();
    
};

