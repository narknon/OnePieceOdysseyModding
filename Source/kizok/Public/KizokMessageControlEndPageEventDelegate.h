#pragma once
#include "CoreMinimal.h"
#include "KizokMessageControlEndPageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokMessageControlEndPageEvent, FName, EventId, FName, Param);

