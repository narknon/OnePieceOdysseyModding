#pragma once
#include "CoreMinimal.h"
#include "KizokOnSkipMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokOnSkipMessageEvent, const FName&, InLabelId);

