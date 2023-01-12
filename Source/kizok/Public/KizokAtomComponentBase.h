#pragma once
#include "CoreMinimal.h"
#include "AtomComponent.h"
#include "KizokAtomComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokAtomComponentBase : public UAtomComponent {
    GENERATED_BODY()
public:
    UKizokAtomComponentBase();
};

