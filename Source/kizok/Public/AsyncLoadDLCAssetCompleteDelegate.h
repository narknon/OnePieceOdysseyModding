#pragma once
#include "CoreMinimal.h"
#include "AsyncLoadDLCAssetCompleteDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncLoadDLCAssetComplete, UObject*, LoadedAsset, bool, IsReplacementLoadAsset);

