#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSystemDebugPrintLog.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSystemDebugPrintLog : public UObject {
    GENERATED_BODY()
public:
    UKizokSystemDebugPrintLog();
    UFUNCTION(BlueprintCallable)
    static void PrintLogCallstack();
    
};

