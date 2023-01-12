#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FieldLevelStreamingWaitSequence.generated.h"

UCLASS(Blueprintable)
class UFieldLevelStreamingWaitSequence : public UObject {
    GENERATED_BODY()
public:
    UFieldLevelStreamingWaitSequence();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteShowLoadingAnim();
    
};

