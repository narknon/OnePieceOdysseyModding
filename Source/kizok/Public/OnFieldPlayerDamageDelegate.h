#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "OnFieldPlayerDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFieldPlayerDamage, PLAYER_ID, ID, float, Damage);

