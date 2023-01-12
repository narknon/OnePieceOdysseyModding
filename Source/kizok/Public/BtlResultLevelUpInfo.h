#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "BtlResultLevelUpInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultLevelUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID playerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewLevel;
    
    KIZOK_API FBtlResultLevelUpInfo();
};

