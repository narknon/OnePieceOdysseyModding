#pragma once
#include "CoreMinimal.h"
#include "EnlightenSerializedData.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EnlightenAtlasBase -FallbackName=EnlightenAtlasBase
#include "EnlightenAtlas.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UEnlightenAtlasBase : public UObject
{
    GENERATED_BODY()
public:
};


UCLASS(Blueprintable, MinimalAPI)
class UEnlightenAtlas : public UEnlightenAtlasBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ChartsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnlightenSerializedData SerializedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LodDistanceFactor;
    
    UEnlightenAtlas();
};

