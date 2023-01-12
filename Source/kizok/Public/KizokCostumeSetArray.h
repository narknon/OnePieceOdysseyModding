#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokCostumeSetArray.generated.h"

USTRUCT(BlueprintType)
struct FKizokCostumeSetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> SkeletalMeshArray;
    
    KIZOK_API FKizokCostumeSetArray();
};

