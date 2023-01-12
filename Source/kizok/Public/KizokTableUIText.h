#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UI_TEXT_TYPE.h"
#include "KizokTableUIText.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableUIText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UI_TEXT_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsChangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Color;
    
    KIZOK_API FKizokTableUIText();
};

