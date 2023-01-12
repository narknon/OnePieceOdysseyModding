#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "KizokFieldEncountComponentEncountDelegate.h"
#include "Components/SphereComponent.h"
#include "KizokFieldEncountComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokFieldEncountComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckObstacle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldEncountComponentEncount OnEncount;
    
    UKizokFieldEncountComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

