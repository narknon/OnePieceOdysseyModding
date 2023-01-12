#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokAccessoryManager.generated.h"

UCLASS(Blueprintable)
class UKizokAccessoryManager : public UObject {
    GENERATED_BODY()
public:
    UKizokAccessoryManager();
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetFluctuationAccessories();
    
    UFUNCTION(BlueprintCallable)
    void ClearFluctuationAccessories();
    
};

