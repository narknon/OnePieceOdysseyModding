#pragma once
#include "CoreMinimal.h"
#include "EBattleSubCmdType.h"
#include "EBtlMesWindowDispState.h"
#include "BattleTacticsCmd.generated.h"

USTRUCT(BlueprintType)
struct FBattleTacticsCmd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSubCmdType CommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMesWindowDispState DefaultChoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    KIZOK_API FBattleTacticsCmd();
};

