#pragma once
#include "CoreMinimal.h"
#include "KizokLvsJobResult.h"
#include "KizokLvsJobResultDynamicMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKizokLvsJobResultDynamicMulticastDelegate, FKizokLvsJobResult, Result);

