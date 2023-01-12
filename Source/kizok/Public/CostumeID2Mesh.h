#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CostumeID2Mesh.generated.h"

USTRUCT(BlueprintType)
struct FCostumeID2Mesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> CosIdMeshMap;
    
    KIZOK_API FCostumeID2Mesh();
};

