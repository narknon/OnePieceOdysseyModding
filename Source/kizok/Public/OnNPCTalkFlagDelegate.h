#pragma once
#include "CoreMinimal.h"
#include "OnNPCTalkFlagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNPCTalkFlag, const FString&, flag);

