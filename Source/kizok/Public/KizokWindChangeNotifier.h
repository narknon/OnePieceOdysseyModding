#pragma once
#include "CoreMinimal.h"
#include "OnWindChangeNotifyEventDelegate.h"
#include "GameFramework/Actor.h"
#include "KizokWindChangeNotifier.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokWindChangeNotifier : public AActor {
    GENERATED_BODY()
public:
    AKizokWindChangeNotifier();
    UFUNCTION(BlueprintCallable)
    void SetWindChangeEvent(FOnWindChangeNotifyEvent Event);
    
};

