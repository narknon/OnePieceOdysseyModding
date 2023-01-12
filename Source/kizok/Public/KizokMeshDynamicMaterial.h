#pragma once
#include "CoreMinimal.h"
#include "KizokMeshDynamicMaterial.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FKizokMeshDynamicMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstance*> OriginalMaterials;
    
    KIZOK_API FKizokMeshDynamicMaterial();
};

