#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryResetMenuState.h"
#include "EKizokAccessoryResetMenuSelect.h"
#include "KizokAccessoryResetMenuData.h"
#include "KizokUserWidget.h"
#include "KizokAccessoryResetMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UVerticalBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryResetMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetCostCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> ThumbnailList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NormalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NormalIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AbilityIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> AccessoryButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> AccessoryButtonWidgetList;
    
public:
    UKizokAccessoryResetMenu();
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EKizokAccessoryResetMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetParamButtonGroupInputEnable(bool bInInputEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessoryButtonGroupInputEnable(bool bInInputEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SelectResetParam();
    
    UFUNCTION(BlueprintCallable)
    EKizokAccessoryResetMenuSelect SelectResetAccessory();
    
    UFUNCTION(BlueprintCallable)
    void ResetAccessoryAfter();
    
    UFUNCTION(BlueprintCallable)
    void ResetAccessory();
    
    UFUNCTION(BlueprintCallable)
    void RegisterParamButtonGroup(const UVerticalBox* InVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAccessoryWidget();
    
    UFUNCTION(BlueprintCallable)
    void PrepareSelectResetParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotSelectableAccessoryParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetThumbnailTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokAccessoryResetMenuState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSortStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParamButtonGroupFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetNormalIconTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccessoryDataNum() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokAccessoryResetMenuData GetAccessoryData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccessoryButtonDroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAbilityIconTexture() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateAccessoryListWidget(UScrollBox* InScrollBox);
    
};

