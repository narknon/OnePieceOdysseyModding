#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokUserWidgetMouseScrollAssist.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokUserWidgetMouseScrollAssist : public UObject {
    GENERATED_BODY()
public:
    UKizokUserWidgetMouseScrollAssist();
    UFUNCTION(BlueprintCallable)
    void ScrollToMouseWheelOrScrollBar(float CurrentOffset);
    
};

