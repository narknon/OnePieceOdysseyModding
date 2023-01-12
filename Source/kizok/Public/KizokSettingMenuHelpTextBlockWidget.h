#pragma once
#include "CoreMinimal.h"
#include "KizokButtonWidget.h"
#include "KizokSettingMenuHelpTextBlockWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuHelpTextBlockWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokSettingMenuHelpTextBlockWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTextIndex() const;
    
};

