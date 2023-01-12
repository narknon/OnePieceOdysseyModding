#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokCrashActor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokCrashActor : public AActor {
    GENERATED_BODY()
public:
    AKizokCrashActor();
    UFUNCTION(BlueprintCallable)
    void Crash();
    
};

