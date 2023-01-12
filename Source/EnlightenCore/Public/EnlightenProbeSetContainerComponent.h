#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EnlightenProbeSetContainerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnlightenProbeSetContainerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEnlightenProbeSetContainerComponent();
};

