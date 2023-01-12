#pragma once
#include "CoreMinimal.h"
#include "KizokBeginGroundLogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokBeginGroundLogEvent, FName, InGroundLogId);

