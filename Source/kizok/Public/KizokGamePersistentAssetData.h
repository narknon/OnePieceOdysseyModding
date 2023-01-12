#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokGamePersistentAssetData.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokGamePersistentAssetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Assets;
    
    UKizokGamePersistentAssetData();
};

