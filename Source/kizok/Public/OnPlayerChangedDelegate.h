#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "OnPlayerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerChanged, PLAYER_ID, ID);

