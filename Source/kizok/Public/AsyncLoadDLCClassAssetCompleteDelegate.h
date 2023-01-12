#pragma once
#include "CoreMinimal.h"
#include "AsyncLoadDLCClassAssetCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncLoadDLCClassAssetComplete, UClass*, LoadedAsset, bool, IsReplacementLoadAsset);

