#pragma once
#include "CoreMinimal.h"
#include "KizokCameraActor.h"
#include "KizokDebugCameraActor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokDebugCameraActor : public AKizokCameraActor {
    GENERATED_BODY()
public:
    AKizokDebugCameraActor();
};

