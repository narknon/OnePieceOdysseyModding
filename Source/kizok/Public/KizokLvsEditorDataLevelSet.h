#pragma once
#include "CoreMinimal.h"
#include "KizokLvsEditorDataLevelChunk.h"
#include "KizokLvsEditorDataLevelSet.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsEditorDataLevelSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokLvsEditorDataLevelChunk> LevelChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> GroundLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllAsGround;
    
    FKizokLvsEditorDataLevelSet();
};

