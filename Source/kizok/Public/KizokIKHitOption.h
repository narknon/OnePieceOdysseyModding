#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokIKHitOption.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokIKHitOption : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> IgnorePathCheckMeshSet;
    
public:
    UKizokIKHitOption();
};

