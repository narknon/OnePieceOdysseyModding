#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokFieldPlayerTexturePreloader.generated.h"

UCLASS(Blueprintable)
class UKizokFieldPlayerTexturePreloader : public UObject {
    GENERATED_BODY()
public:
    UKizokFieldPlayerTexturePreloader();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompletePreLoadCurrentPlayerTextureStreaming();
    
};

