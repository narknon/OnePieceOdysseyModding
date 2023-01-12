#pragma once
#include "CoreMinimal.h"
#include "FieldPlayerActionChengeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFieldPlayerActionChenge, uint16, actionRno);

