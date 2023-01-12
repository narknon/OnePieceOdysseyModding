#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LostFieldPlayerDelegate.h"
#include "FindFieldPlayerEverDelegate.h"
#include "FindFieldPlayerDelegate.h"
#include "Components/SphereComponent.h"
#include "KizokFindFieldPlayerComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokFindFieldPlayerComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindFieldPlayer FindFieldPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindFieldPlayerEver FindFieldPlayerEver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLostFieldPlayer LostFieldPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FindAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelAngle;
    
public:
    UKizokFindFieldPlayerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OutArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void InArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

