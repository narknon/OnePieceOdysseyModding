#pragma once
#include "CoreMinimal.h"
#include "KizokNonPlayerCharaBase.h"
#include "KizokEnemyBase.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokEnemyBase : public AKizokNonPlayerCharaBase {
    GENERATED_BODY()
public:
    AKizokEnemyBase();
};

