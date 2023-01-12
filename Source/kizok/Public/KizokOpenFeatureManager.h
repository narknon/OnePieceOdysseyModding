#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokOpenFeatureManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokOpenFeatureManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> OpenFeatureTable;
    
public:
    UKizokOpenFeatureManager();
};

