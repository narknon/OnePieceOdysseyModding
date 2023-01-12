#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "KizokSkyDummyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokSkyDummyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UKizokSkyDummyComponent();
};

