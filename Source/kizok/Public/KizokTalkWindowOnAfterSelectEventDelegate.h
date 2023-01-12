#pragma once
#include "CoreMinimal.h"
#include "KizokTalkWindowOnAfterSelectEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokTalkWindowOnAfterSelectEvent, int32, InChoiceNo);

