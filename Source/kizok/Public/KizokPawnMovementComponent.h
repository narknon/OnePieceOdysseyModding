#pragma once
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "KizokPawnMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokPawnMovementComponent : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UKizokPawnMovementComponent();
};

