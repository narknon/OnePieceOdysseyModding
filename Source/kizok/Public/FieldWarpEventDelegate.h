#pragma once
#include "CoreMinimal.h"
#include "FieldWarpInfo.h"
#include "FieldWarpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFieldWarpEvent, FFieldWarpInfo, warpInfo);

