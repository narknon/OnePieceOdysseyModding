#pragma once
#include "CoreMinimal.h"
#include "KizokCommonMenuOnFocusButtonEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokCommonMenuOnFocusButtonEvent, int32, InFocusIndex);

