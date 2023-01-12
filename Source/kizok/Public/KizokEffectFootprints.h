#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "KizokEffectFootprints.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokEffectFootprints : public UDecalComponent {
    GENERATED_BODY()
public:
    UKizokEffectFootprints();
};

