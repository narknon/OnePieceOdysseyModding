#pragma once
#include "CoreMinimal.h"
#include "OnReceiveDelegate2.generated.h"

class UNetMessage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceive, UNetMessage*, Data);

