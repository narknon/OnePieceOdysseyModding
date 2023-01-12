#pragma once
#include "CoreMinimal.h"
#include "KizokAtomComponentBase.h"
#include "KizokMapAtomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokMapAtomComponent : public UKizokAtomComponentBase {
    GENERATED_BODY()
public:
    UKizokMapAtomComponent();
};

