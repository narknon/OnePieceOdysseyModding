#pragma once
#include "CoreMinimal.h"
#include "KizokOnMouseOverEventDelegate.generated.h"

class UKizokButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokOnMouseOverEvent, UKizokButtonWidget*, InButtonWidget);

