#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokGroundLogMovieTableRow.generated.h"

class UManaTexture;
class UMaterial;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokGroundLogMovieTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaTexture> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> Material;
    
    FKizokGroundLogMovieTableRow();
};

