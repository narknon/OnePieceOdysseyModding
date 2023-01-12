#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EKizokAccessoryMagnificationType.h"
#include "EKizokAccessoryComposeMenuState.h"
#include "EKizokAccessoryComposeMenuSelectConsumeNext.h"
#include "KizokAccessoryComposeMenuData.h"
#include "KizokUserWidget.h"
#include "KizokAccessoryComposeMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryComposeMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> ThumbnailList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AbilityIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokButtonWidget> AccessoryButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> AccessoryButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComposeSRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComposeHSRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NamedComposeSRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NamedComposeHSRate;
    
public:
    UKizokAccessoryComposeMenu();
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EKizokAccessoryComposeMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessoryDataInitialized(int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessoryButtonGroupIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    EKizokAccessoryComposeMenuSelectConsumeNext SelectConsumeAccessory();
    
    UFUNCTION(BlueprintCallable)
    bool SelectBaseAccessory();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAccessoryWidget();
    
    UFUNCTION(BlueprintCallable)
    bool PossibleAddParam(int32 InDataIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSortText();
    
public:
    UFUNCTION(BlueprintCallable)
    EKizokAccessoryMagnificationType LotteryMagnificationType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetThumbnail(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokAccessoryComposeMenuState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSortStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokAccessoryMagnificationType GetMagnificationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConsumeAccessoryIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseAccessoryIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccessoryDataNum() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokAccessoryComposeMenuData GetAccessoryData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAbilityIconTexture() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateShortageAccessoryWidget(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void ComposeAccessoryAfter();
    
    UFUNCTION(BlueprintCallable)
    void ComposeAccessory();
    
    UFUNCTION(BlueprintCallable)
    void CancelConsumeAccessory();
    
    UFUNCTION(BlueprintCallable)
    void CancelCheck();
    
};

