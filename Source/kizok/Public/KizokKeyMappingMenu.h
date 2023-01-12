#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokKeyMappingMode.h"
#include "KizokUserWidget.h"
#include "KizokKeyMappingMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UKizokKeyMappingSelectMenu;
class UKizokTextBlock;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokKeyMappingMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> KeyMappingButtonWidgetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> KeyMappingCategoryWidgetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> KeyMappingDataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DPadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KeyboardCategoryTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MouseCategoryTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GamepadCategoryTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ErrorSettingTextIdList;
    
public:
    UKizokKeyMappingMenu();
private:
    UFUNCTION(BlueprintCallable)
    void SetupFocusText(UKizokTextBlock* InTextBlock, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShow(bool bInIsShow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupSwitchButtonGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupSelectButtonGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectSwitchWidgetParam(UKizokButtonWidget* InButtonWidget, const FName& InTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectKeyMappingParam(UKizokButtonWidget* InButtonWidget, const FName& InTextId, const FSoftObjectPath& InIconTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectCategoryParam(UKizokUserWidget* InWidget, const FName& InTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputInvalidKey(const FName& InNextTextId, const FName& InErrorTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearButtonGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeWaitAnimation(UKizokButtonWidget* InButtonWidget, bool bInIsWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocus(const UKizokButtonWidget* InButtonWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitch(int32 InButtonIndex) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDestroyWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokKeyMappingSelectMenu* GetKeyMappingSelectMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokKeyMappingMode GetKeyMappingMode() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateKeyMappingList(UScrollBox* InScrollBox, UKizokButtonWidget* InUniqueButtonWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void ButtonFocus(const UKizokButtonWidget* InButtonWidget);
    
};

