#pragma once
#include "CoreMinimal.h"
#include "KizokOnMultiDisplayMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokOnMultiDisplayMessageEvent, const FName&, InLabelId, float, InMessageTime);

