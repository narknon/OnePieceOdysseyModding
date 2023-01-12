#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "KizokProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UKizokProjectileMovementComponent();
};

