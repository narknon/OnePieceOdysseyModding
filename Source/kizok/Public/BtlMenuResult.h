#pragma once
#include "CoreMinimal.h"
#include "BtlResultItemInfo.h"
#include "BtlResultLevelUpInfo.h"
#include "BtlMenuResult.generated.h"

USTRUCT(BlueprintType)
struct FBtlMenuResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Money;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Exp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BaseExp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BonusExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultItemInfo> DropList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultLevelUpInfo> LevelUpList;
    
    KIZOK_API FBtlMenuResult();
};

