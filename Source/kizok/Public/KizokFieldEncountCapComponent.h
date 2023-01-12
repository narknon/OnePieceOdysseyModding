#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "KizokFieldEncountCapComponentEncountDelegate.h"
#include "Components/CapsuleComponent.h"
#include "KizokFieldEncountCapComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokFieldEncountCapComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckObstacle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldEncountCapComponentEncount OnEncount;
    
    UKizokFieldEncountCapComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

