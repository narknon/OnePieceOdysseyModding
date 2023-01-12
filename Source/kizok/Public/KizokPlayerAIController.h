#pragma once
#include "CoreMinimal.h"
#include "KizokAIController.h"
#include "KizokPlayerAIController.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokPlayerAIController : public AKizokAIController {
    GENERATED_BODY()
public:
    AKizokPlayerAIController();
};

