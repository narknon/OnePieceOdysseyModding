#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSingleton.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSingleton : public UObject {
    GENERATED_BODY()
public:
    UKizokSingleton();
};

