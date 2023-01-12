#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KizokFieldPlayerFPSTargetPosSetter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokFieldPlayerFPSTargetPosSetter : public UActorComponent {
    GENERATED_BODY()
public:
    UKizokFieldPlayerFPSTargetPosSetter();
};

