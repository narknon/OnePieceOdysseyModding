#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sofdec2Source.generated.h"

UCLASS(Blueprintable)
class SOFDEC2_API USofdec2Source : public UObject {
    GENERATED_BODY()
public:
    USofdec2Source();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
};

