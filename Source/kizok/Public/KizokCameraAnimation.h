#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "KizokCameraAnimation.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokCameraAnimation : public ACameraActor {
    GENERATED_BODY()
public:
    AKizokCameraAnimation();
};

