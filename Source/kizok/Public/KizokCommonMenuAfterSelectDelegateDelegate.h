#pragma once
#include "CoreMinimal.h"
#include "KizokCommonMenuAfterSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokCommonMenuAfterSelectDelegate, int32, InChoiceNo);

