#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WIDGET_COLOR_TYPE.h"
#include "KizokTableWidgetColor.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableWidgetColor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WIDGET_COLOR_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Color;
    
    KIZOK_API FKizokTableWidgetColor();
};

