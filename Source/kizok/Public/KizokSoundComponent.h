#pragma once
#include "CoreMinimal.h"
#include "KizokSEComponent.h"
#include "KizokSoundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokSoundComponent : public UKizokSEComponent {
    GENERATED_BODY()
public:
    UKizokSoundComponent();
};

