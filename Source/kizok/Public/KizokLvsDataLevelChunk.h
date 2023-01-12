#pragma once
#include "CoreMinimal.h"
#include "KizokLvsDataLevelChunk.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsDataLevelChunk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
public:
    FKizokLvsDataLevelChunk();
};

