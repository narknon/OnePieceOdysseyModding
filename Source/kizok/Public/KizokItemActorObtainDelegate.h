#pragma once
#include "CoreMinimal.h"
#include "KizokItemActorObtainDelegate.generated.h"

class AKizokItemActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKizokItemActorObtain, AKizokItemActor*, Item, bool, isObtain);

