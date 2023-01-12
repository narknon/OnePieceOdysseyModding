#pragma once
#include "CoreMinimal.h"
#include "CHARACTER_SPAWN_TYPES.h"
#include "GameFramework/Actor.h"
#include "KizokBattleSpawnPosition.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleSpawnPosition : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CHARACTER_SPAWN_TYPES Type;
    
    AKizokBattleSpawnPosition();
};

