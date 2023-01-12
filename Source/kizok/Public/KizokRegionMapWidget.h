#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokRegionMapWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokRegionMapWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokRegionMapWidget();
private:
    UFUNCTION(BlueprintCallable)
    void RegisterWidget(UCanvasPanel* InNamePlate, UKizokUserWidget* InMarkerWidget, UKizokUserWidget* InTargetWidget, UKizokUserWidget* InSameAreaWidget);
    
};

