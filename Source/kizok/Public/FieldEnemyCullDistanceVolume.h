#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "FieldEnemyCullDistanceVolume.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AFieldEnemyCullDistanceVolume : public ATriggerBox {
    GENERATED_BODY()
public:
    AFieldEnemyCullDistanceVolume();
};

