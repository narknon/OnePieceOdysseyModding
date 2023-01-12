#pragma once
#include "CoreMinimal.h"
#include "KizokOnMultiSkipMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokOnMultiSkipMessageEvent, const FName&, InLabelId);

