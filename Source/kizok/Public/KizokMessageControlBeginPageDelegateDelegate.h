#pragma once
#include "CoreMinimal.h"
#include "KizokMessageControlBeginPageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKizokMessageControlBeginPageDelegate, FName, EventId, FName, Param);

