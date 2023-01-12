#pragma once
#include "CoreMinimal.h"
#include "KizokBtlItemTabText.generated.h"

USTRUCT(BlueprintType)
struct FKizokBtlItemTabText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UITextListIndex;
    
    KIZOK_API FKizokBtlItemTabText();
};

