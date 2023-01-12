#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "KizokFieldEncountBoxComponentEncountDelegate.h"
#include "Components/BoxComponent.h"
#include "KizokFieldEncountBoxComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokFieldEncountBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckObstacle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldEncountBoxComponentEncount OnEncount;
    
    UKizokFieldEncountBoxComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

