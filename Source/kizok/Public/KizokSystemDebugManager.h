#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSystemDebugManager.generated.h"

class UKizokSystemDebugPrintLog;
class UKizokMemoryChecker;

UCLASS(Blueprintable)
class KIZOK_API UKizokSystemDebugManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemDebugPrintLog* DebugPrintLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMemoryChecker* MemoryChecker;
    
public:
    UKizokSystemDebugManager();
};

