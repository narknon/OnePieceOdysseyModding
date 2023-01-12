#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokMemoryChecker.generated.h"

UCLASS(Blueprintable, Config=Game)
class KIZOK_API UKizokMemoryChecker : public UObject {
    GENERATED_BODY()
public:
    UKizokMemoryChecker();
};

