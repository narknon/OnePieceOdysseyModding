#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokLog.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokLog : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteLog;
    
public:
    UKizokLog();
};

