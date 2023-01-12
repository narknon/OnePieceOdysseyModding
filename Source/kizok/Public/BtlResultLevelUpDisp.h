#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "BtlResultLevelUpStatus.h"
#include "BtlResultLevelUpDisp.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultLevelUpDisp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID playerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultLevelUpStatus OldStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultLevelUpStatus DiffStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultLevelUpStatus NewStatus;
    
    KIZOK_API FBtlResultLevelUpDisp();
};

