#pragma once
#include "CoreMinimal.h"
#include "EKizokSettingMenuResetButtonMode.h"
#include "KizokButtonWidget.h"
#include "KizokSettingMenuResetButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuResetButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokSettingMenuResetButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetResetButtonMode(EKizokSettingMenuResetButtonMode InButtonMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokSettingMenuResetButtonMode GetResetButtonMode() const;
    
};

