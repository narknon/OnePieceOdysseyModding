#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokEntryLoader.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokEntryLoader : public UObject {
    GENERATED_BODY()
public:
    UKizokEntryLoader();
    UFUNCTION(BlueprintCallable)
    void StartNewGame();
    
};

