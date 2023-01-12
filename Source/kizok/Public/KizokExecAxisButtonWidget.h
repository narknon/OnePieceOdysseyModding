#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KizokExecActionButtonWidgetBase.h"
#include "KizokExecAxisButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokExecAxisButtonWidget : public UKizokExecActionButtonWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisValue;
    
public:
    UKizokExecAxisButtonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckDecisionMouseButton(const FKey& InEffectingButton);
    
};

