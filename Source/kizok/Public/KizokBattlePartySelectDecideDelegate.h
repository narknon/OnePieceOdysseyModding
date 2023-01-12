#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokBattlePartySelectDecideDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokBattlePartySelectDecide, PLAYER_ID, playerID, const FString&, selectPlayerName);

