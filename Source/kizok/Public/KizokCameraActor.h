#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "KizokCameraActor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AKizokCameraActor();
};

