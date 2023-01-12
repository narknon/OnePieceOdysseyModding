#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokDevDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class KIZOK_API UKizokDevDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UObject>> DataObjects;
    
public:
    UKizokDevDatabase();
};

