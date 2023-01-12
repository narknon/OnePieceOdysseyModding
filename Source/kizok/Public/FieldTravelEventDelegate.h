#pragma once
#include "CoreMinimal.h"
#include "KizokTravelData.h"
#include "FieldTravelEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFieldTravelEvent, FKizokTravelData, travelData);

