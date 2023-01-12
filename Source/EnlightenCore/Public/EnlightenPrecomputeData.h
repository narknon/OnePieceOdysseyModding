#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEnlightenPrecomputeDataVersion.h"
#include "UObject/Object.h"
#include "EnlightenPrecomputeData.generated.h"

class UEnlightenUVBufferCollection;
class UEnlightenSystem;
class UEnlightenProbeSet;
class UEnlightenCubemap;
class UEnlightenAtlas;

UCLASS(Blueprintable, MinimalAPI)
class UEnlightenPrecomputeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnlightenSystem*> Systems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnlightenProbeSet*> VolumeProbeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnlightenProbeSet*> GeneratedProbeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnlightenCubemap*> Cubemaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastPrecomputed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SolutionSignature;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnlightenPrecomputeDataVersion PrecomputeDataVersion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnlightenUVBufferCollection* UVBufferCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnlightenAtlas* SystemAtlas;
    
public:
    UEnlightenPrecomputeData();
};

