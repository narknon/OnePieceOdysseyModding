#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KizokFindObjectComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokFindObjectComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UKizokFindObjectComponentBase();
};

