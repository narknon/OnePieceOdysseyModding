#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EnlightenProbeSetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnlightenProbeSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEnlightenProbeSetComponent();
};

