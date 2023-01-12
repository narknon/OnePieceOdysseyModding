#pragma once
#include "CoreMinimal.h"
#include "GimmickTalkNextDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGimmickTalkNext, const FName&, ID, const int32&, Index);

