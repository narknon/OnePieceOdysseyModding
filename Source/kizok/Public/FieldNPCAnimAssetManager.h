#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FieldNPCAnimAssetManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UFieldNPCAnimAssetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Assets;
    
public:
    UFieldNPCAnimAssetManager();
};

