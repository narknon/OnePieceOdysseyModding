#pragma once
#include "CoreMinimal.h"
#include "QuestProgress.generated.h"

USTRUCT(BlueprintType)
struct FQuestProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Seqs;
    
    KIZOK_API FQuestProgress();
};

