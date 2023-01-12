#pragma once
#include "CoreMinimal.h"
#include "KizokMessageOtherParam.h"
#include "KizokMessageControlOtherParamEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokMessageControlOtherParamEvent, FKizokMessageOtherParam, OtherParam);

