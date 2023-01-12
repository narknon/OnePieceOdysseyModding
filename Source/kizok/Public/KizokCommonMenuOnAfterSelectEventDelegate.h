#pragma once
#include "CoreMinimal.h"
#include "KizokCommonMenuOnAfterSelectEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokCommonMenuOnAfterSelectEvent, int32, InChoiceNo);

