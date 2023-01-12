#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EKizokCraftMenuState.h"
#include "KizokCraftData.h"
#include "KizokUserWidget.h"
#include "KizokCraftMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UVerticalBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCraftMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CraftRecipeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> CraftItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CraftItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> MaterialItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CreateNoteTitleIcon;
    
    UKizokCraftMenu();
    UFUNCTION(BlueprintCallable)
    void SetScrollBoxInputFromNowState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaterialWidget(UKizokUserWidget* Widget, const FKizokCraftData& CraftData);
    
    UFUNCTION(BlueprintCallable)
    void SetCraftMenuInputEnable(bool InputEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAllCraftWidgetData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float InCurrentOffset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCursorVisibility(UKizokButtonWidget* InWiget, ESlateVisibility InCursorLVisibility, ESlateVisibility InCursorRVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaterialItemOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistCraftItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeCraftMenuEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeKitchen(UScrollBox* InScrollBox, UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFactory(UScrollBox* InScrollBox, UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetNoteTitleIconImage(uint8 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCraftData GetMaterialNoteData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetMaterialIconImage(uint8 Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOver(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNotMake(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCraftData GetCraftNoteData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokCraftMenuState GetCraftMenuState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCraftMenuInputEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCraftItemIconImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCraftData GetCraftData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMaterialItemNoteWidget(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void CreateCraftItemNoteWidget(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void ClearCraftNoteScrollBoxs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeItemInfo(const FText& ItemInfo, const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocus(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeCraftWidgetAnim(UKizokButtonWidget* Widget, bool IsFocus, bool IsUp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCraftMenuState(EKizokCraftMenuState MenuState);
    
    UFUNCTION(BlueprintCallable)
    void ApplyItemData();
    
};

