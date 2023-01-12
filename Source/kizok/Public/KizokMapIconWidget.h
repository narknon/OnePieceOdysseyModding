#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokMapIconWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMapIconWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokMapIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconTexture(UTexture2D* InIconTexture);
    
};

