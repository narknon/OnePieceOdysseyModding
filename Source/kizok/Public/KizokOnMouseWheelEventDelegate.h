#pragma once
#include "CoreMinimal.h"
#include "KizokOnMouseWheelEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokOnMouseWheelEvent, float, InWheelDelta);

