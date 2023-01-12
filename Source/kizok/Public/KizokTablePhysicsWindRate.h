#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTablePhysicsWindRate.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FKizokTablePhysicsWindRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindRate;
    
    KIZOK_API FKizokTablePhysicsWindRate();
};

