#pragma once
#include "CoreMinimal.h"
#include "EBattleMainCmdType.h"
#include "BattleMainCmd.generated.h"

USTRUCT(BlueprintType)
struct FBattleMainCmd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleMainCmdType CommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    KIZOK_API FBattleMainCmd();
};

