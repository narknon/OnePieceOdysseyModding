#pragma once
#include "CoreMinimal.h"
#include "UserData.generated.h"

USTRUCT(BlueprintType)
struct FUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 registerStatus;
    
    COSMOSWEBAPI_API FUserData();
};

