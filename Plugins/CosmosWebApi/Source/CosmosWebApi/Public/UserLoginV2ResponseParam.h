#pragma once
#include "CoreMinimal.h"
#include "UserData.h"
#include "UserLoginV2ResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserLoginV2ResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserData UserInfo;
    
    COSMOSWEBAPI_API FUserLoginV2ResponseParam();
};

