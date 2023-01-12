#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EnlightenSystemContainerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnlightenSystemContainerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEnlightenSystemContainerComponent();
};

