#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokGameSettingFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokGameSettingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKizokGameSettingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetNearClip(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGamma();
    
};

