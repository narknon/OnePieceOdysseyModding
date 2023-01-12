#pragma once
#include "CoreMinimal.h"
#include "BattleSubCmd.generated.h"

USTRUCT(BlueprintType)
struct FBattleSubCmd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassPtr;
    
    KIZOK_API FBattleSubCmd();
};

