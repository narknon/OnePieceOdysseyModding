#pragma once
#include "CoreMinimal.h"
#include "KizokLvsDataLevelSet.h"
#include "Engine/DataAsset.h"
#include "KizokLvsDatabaseForGame.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokLvsDatabaseForGame : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokLvsDataLevelSet> LevelSetMap;
    
public:
    UKizokLvsDatabaseForGame();
};

