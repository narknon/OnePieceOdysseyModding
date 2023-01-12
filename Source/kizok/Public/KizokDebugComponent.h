#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "KizokDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokDebugComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UKizokDebugComponent();
};

