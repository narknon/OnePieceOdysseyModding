#pragma once
#include "CoreMinimal.h"
#include "KizokPartyMoneyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokPartyMoneyDelegate, int32, InValue);

