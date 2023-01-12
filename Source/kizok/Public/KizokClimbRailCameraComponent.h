#pragma once
#include "CoreMinimal.h"
#include "KizokRailCameraComponent.h"
#include "KizokClimbRailCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokClimbRailCameraComponent : public UKizokRailCameraComponent {
    GENERATED_BODY()
public:
    UKizokClimbRailCameraComponent();
};

