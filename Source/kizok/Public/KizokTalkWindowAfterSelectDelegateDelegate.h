#pragma once
#include "CoreMinimal.h"
#include "KizokTalkWindowAfterSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKizokTalkWindowAfterSelectDelegate, int32, InChoiceNo);

