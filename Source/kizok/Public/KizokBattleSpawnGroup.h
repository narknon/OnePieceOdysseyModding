#pragma once
#include "CoreMinimal.h"
#include "BC_SPAWN_GROUP.h"
#include "GameFramework/Actor.h"
#include "KizokBattleSpawnGroup.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleSpawnGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    BC_SPAWN_GROUP Type;
    
    AKizokBattleSpawnGroup();
};

