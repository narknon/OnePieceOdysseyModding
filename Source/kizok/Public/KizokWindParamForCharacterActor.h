#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KizokWindParamForCharacterActor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokWindParamForCharacterActor : public AActor {
    GENERATED_BODY()
public:
    AKizokWindParamForCharacterActor();
    UFUNCTION(BlueprintCallable)
    void SetWindPower(float WindPow);
    
    UFUNCTION(BlueprintCallable)
    void SetWindDirection(FVector WindDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWindDirection() const;
    
};

