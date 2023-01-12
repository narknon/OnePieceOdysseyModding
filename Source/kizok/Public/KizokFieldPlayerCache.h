#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PLAYER_ID.h"
#include "UObject/Object.h"
#include "KizokFieldPlayerCache.generated.h"

class AKizokAIController;
class AKizokFieldPlayerBase;

UCLASS(Blueprintable)
class KIZOK_API UKizokFieldPlayerCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, TSubclassOf<AKizokFieldPlayerBase>> PlayerClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, TSoftClassPtr<AKizokFieldPlayerBase>> PlayerBPList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AKizokAIController> PlayerAIController;
    
public:
    UKizokFieldPlayerCache();
};

