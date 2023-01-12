#pragma once
#include "CoreMinimal.h"
#include "BtlSituationText.generated.h"

USTRUCT(BlueprintType)
struct FBtlSituationText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InsertTextList;
    
    KIZOK_API FBtlSituationText();
};

