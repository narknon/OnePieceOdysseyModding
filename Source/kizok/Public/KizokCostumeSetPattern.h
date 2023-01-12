#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokCostumeSetArray.h"
#include "KizokCostumeSetPattern.generated.h"

USTRUCT(BlueprintType)
struct FKizokCostumeSetPattern : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FKizokCostumeSetArray> SkeletalMeshMap;
    
    KIZOK_API FKizokCostumeSetPattern();
};

