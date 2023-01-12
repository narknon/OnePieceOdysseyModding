#pragma once
#include "CoreMinimal.h"
#include "KizokButtonWidget.h"
#include "KizokSettingMenuSelectableButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuSelectableButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName optionNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemList;
    
public:
    UKizokSettingMenuSelectableButtonWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelectable(bool IsAdd);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLockItem(bool IsLock);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanAdd() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSelectableIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOptionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemText(uint8 InIndex) const;
    
};

