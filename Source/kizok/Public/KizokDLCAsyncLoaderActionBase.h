#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KizokDLCAsyncLoaderActionBase.generated.h"

UCLASS(Blueprintable)
class UKizokDLCAsyncLoaderActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UKizokDLCAsyncLoaderActionBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAsyncLoadComplete();
    
};

