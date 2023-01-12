#pragma once
#include "CoreMinimal.h"
#include "EItemKind.h"
#include "KizokItemActorHideIconDelegate.h"
#include "KizokItemActorVisibleIconDelegate.h"
#include "KizokItemActorObtainDelegate.h"
#include "GameFramework/Actor.h"
#include "KizokItemActor.generated.h"

class USphereComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AKizokItemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorVisibleIcon OnVisibleIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorHideIcon OnHideIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemActorObtain OnObtain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RegistCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RootCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemKind ItemKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPhysics;
    
public:
    AKizokItemActor();
private:
    UFUNCTION(BlueprintCallable)
    void SetItemID(FName Num);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightOffset(float Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGetItem() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetItemID() const;
    
};

