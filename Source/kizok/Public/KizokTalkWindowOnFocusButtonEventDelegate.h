#pragma once
#include "CoreMinimal.h"
#include "KizokTalkWindowOnFocusButtonEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokTalkWindowOnFocusButtonEvent, int32, InFocusIndex);

