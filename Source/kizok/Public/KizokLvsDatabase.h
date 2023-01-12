#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokLvsDatabase.generated.h"

class UKizokLvsDatabaseForGame;
class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokLvsDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> LvsInfoTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKizokLvsDatabaseForGame> Output;
    
public:
    UKizokLvsDatabase();
};

