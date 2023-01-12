#pragma once
#include "CoreMinimal.h"
#include "BtlGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtlGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Uids;
    
    KIZOK_API FBtlGroupInfo();
};

