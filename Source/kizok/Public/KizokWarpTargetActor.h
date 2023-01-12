#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "KizokWarpTargetActor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokWarpTargetActor : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    AKizokWarpTargetActor();
};

