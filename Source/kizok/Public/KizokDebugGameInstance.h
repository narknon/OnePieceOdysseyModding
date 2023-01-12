#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "KizokDebugGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UKizokDebugGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UKizokDebugGameInstance();
};

