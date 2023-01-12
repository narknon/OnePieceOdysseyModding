#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "KizokPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class KIZOK_API AKizokPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AKizokPlayerCameraManager();
};

