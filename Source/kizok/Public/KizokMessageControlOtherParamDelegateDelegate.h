#pragma once
#include "CoreMinimal.h"
#include "KizokMessageOtherParam.h"
#include "KizokMessageControlOtherParamDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokMessageControlOtherParamDelegate, FKizokMessageOtherParam, OtherParam);

