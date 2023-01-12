#pragma once
#include "CoreMinimal.h"
#include "KizokPartyMoneyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokPartyMoneyEvent, int32, InValue);

