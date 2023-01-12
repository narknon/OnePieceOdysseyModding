#pragma once
#include "CoreMinimal.h"
#include "BtlMenuTurn.h"
#include "BtlMenuStatusBase.generated.h"

class UKizokBattleCharaBase;

USTRUCT(BlueprintType)
struct FBtlMenuStatusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuTurn TurnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleCharaBase* CharaBase;
    
    KIZOK_API FBtlMenuStatusBase();
};

