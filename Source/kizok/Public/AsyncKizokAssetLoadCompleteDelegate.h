#pragma once
#include "CoreMinimal.h"
#include "AsyncKizokAssetLoadCompleteDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncKizokAssetLoadComplete, UObject*, Asset);

