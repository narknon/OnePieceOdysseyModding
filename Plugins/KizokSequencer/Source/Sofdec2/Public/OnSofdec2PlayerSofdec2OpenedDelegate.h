#pragma once
#include "CoreMinimal.h"
#include "OnSofdec2PlayerSofdec2OpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSofdec2PlayerSofdec2Opened, const FString&, OpenedUrl);

