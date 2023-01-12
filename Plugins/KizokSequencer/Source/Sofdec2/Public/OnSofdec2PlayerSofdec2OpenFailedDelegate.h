#pragma once
#include "CoreMinimal.h"
#include "OnSofdec2PlayerSofdec2OpenFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSofdec2PlayerSofdec2OpenFailed, const FString&, FailedUrl);

