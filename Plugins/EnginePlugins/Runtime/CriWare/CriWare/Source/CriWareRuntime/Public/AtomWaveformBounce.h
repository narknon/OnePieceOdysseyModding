#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomWaveformBounce.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomWaveformBounce : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomWaveformBounce();
private:
    UFUNCTION(BlueprintCallable)
    static void StopBounce();
    
    UFUNCTION(BlueprintCallable)
    static bool StartBounce(const FString& FilePath, int32 NumChannels);
    
};

