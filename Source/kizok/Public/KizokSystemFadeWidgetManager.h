#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KizokSystemFadeWidgetManager.generated.h"

UCLASS(Blueprintable)
class UKizokSystemFadeWidgetManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UKizokSystemFadeWidgetManager();
};

