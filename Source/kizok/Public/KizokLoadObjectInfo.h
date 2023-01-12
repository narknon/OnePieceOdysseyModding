#pragma once
#include "CoreMinimal.h"
#include "KizokLoadObjectInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLoadObjectInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
public:
    FKizokLoadObjectInfo();
};

