#pragma once
#include "CoreMinimal.h"
#include "EKizokSettingMenuOnOffButtonMode.h"
#include "KizokSettingMenuSelectableButtonWidget.h"
#include "KizokSettingMenuOnOffSwitchButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuOnOffSwitchButtonWidget : public UKizokSettingMenuSelectableButtonWidget {
    GENERATED_BODY()
public:
    UKizokSettingMenuOnOffSwitchButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokSettingMenuOnOffButtonMode GetOnOffButtonMode() const;
    
};

