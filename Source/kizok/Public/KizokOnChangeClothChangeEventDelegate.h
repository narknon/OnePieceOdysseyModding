#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokOnChangeClothChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokOnChangeClothChangeEvent, PLAYER_ID, InPlayerId, uint8, InCostumeId);

