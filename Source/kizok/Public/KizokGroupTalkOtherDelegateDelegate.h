#pragma once
#include "CoreMinimal.h"
#include "KizokGroupTalkOtherDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKizokGroupTalkOtherDelegate, FName, EventId, FName, Params);

