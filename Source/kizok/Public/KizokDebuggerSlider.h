#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "KizokDebuggerSlider.generated.h"

class UTextBlock;
class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class UKizokDebuggerSlider : public USlider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_pParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_pTextBlock;
    
public:
    UKizokDebuggerSlider();
    UFUNCTION(BlueprintCallable)
    void CallChangeValue(float Val);
    
};

