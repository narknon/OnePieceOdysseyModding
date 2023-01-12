#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "KizokSaveObject.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSaveObject : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SaveData;
    
public:
    UKizokSaveObject();
};

