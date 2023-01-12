#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokTimeManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokTimeManager : public UObject {
    GENERATED_BODY()
public:
    UKizokTimeManager();
    UFUNCTION(BlueprintCallable)
    static void SetTime(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTime();
    
    UFUNCTION(BlueprintCallable)
    static void AddTime(int32 Time);
    
};

