#pragma once
#include "CoreMinimal.h"
#include "KizokAccessoryShapeWidgetList.generated.h"

class UKizokAccessoryShapeWidget;

USTRUCT(BlueprintType)
struct FKizokAccessoryShapeWidgetList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokAccessoryShapeWidget*> WidgetList;
    
    KIZOK_API FKizokAccessoryShapeWidgetList();
};

