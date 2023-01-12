#pragma once
#include "CoreMinimal.h"
#include "KizokMessageControlEndPageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKizokMessageControlEndPageDelegate, FName, EventId, FName, Param);

