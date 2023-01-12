#pragma once
#include "CoreMinimal.h"
#include "AsyncKizokClassAssetLoadCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncKizokClassAssetLoadComplete, UClass*, assetCsset);

