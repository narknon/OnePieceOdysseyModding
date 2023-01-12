#pragma once
#include "CoreMinimal.h"
#include "BATTLE_RESULT.h"
#include "OnBattleResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleResult, BATTLE_RESULT, Result);

