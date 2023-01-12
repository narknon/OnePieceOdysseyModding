#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokSettingMenuTab.generated.h"

class UKizokButtonWidget;
class UKizokSettingMenu;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuTab : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSettingMenu* SettingMenu;
    
public:
    UKizokSettingMenuTab();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocus(const UKizokButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokSettingMenu* GetSettingMenu() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ButtonFocus(const UKizokButtonWidget* InButtonWidget);
    
};

