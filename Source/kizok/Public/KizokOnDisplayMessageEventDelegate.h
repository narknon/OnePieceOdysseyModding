#pragma once
#include "CoreMinimal.h"
#include "KizokOnDisplayMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKizokOnDisplayMessageEvent, const FName&, InLabelId, float, InMessageTime);

