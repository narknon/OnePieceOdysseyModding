#pragma once
#include "CoreMinimal.h"
#include "KizokMessageControlBeginPageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokMessageControlBeginPageEvent, FName, EventId, FName, Param);

