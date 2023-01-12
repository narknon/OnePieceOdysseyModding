#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "KizokGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class KIZOK_API UKizokGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UKizokGameEngine();
};

