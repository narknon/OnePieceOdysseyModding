#pragma once
#include "CoreMinimal.h"
#include "KizokBeginGroundLogDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokBeginGroundLogDelegate, FName, InGroundLogId);

