#pragma once
#include "CoreMinimal.h"
#include "KizokLvsEditorDataLevelChunk.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsEditorDataLevelChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> Levels;
    
    FKizokLvsEditorDataLevelChunk();
};

