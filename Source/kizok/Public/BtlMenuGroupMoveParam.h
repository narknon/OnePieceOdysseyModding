#pragma once
#include "CoreMinimal.h"
#include "BtlMenuGroupPos.h"
#include "BtlMenuGroupMoveParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlMenuGroupMoveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuGroupPos CurParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuGroupPos NextParam;
    
    KIZOK_API FBtlMenuGroupMoveParam();
};

