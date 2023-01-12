#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokEquipMenuState.h"
#include "KizokAccessoryDispStatus.h"
#include "KizokAccessoryDispData.h"
#include "KizokAccessoryShapeBlockNum.h"
#include "KizokAccessoryShapeWidgetList.h"
#include "UObject/NoExportTypes.h"
#include "KizokMainMenuPage.h"
#include "KizokAccessoryEquipMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokAccessoryShapeWidget;
class UKizokAccessoryEquipBoardWidget;
class UImage;
class UScrollBox;
class UCanvasPanel;
class UVerticalBox;
class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryEquipMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> FlagTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> ThumbnailList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NormalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> AccessoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AccessoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> ButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NormalIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AbilityIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> AbilityWidgetClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatusScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UKizokAccessoryShapeWidget>> ShapePartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokAccessoryShapeBlockNum> ShapeBlockNumList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ShapeClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UKizokAccessoryShapeWidget*> ShapeWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FKizokAccessoryShapeWidgetList> NoEquipShapeWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokUserWidget*> AbilityWidgetList;
    
public:
    UKizokAccessoryEquipMenu();
private:
    UFUNCTION(BlueprintCallable)
    int32 SortAccessoryList();
    
    UFUNCTION(BlueprintCallable)
    void ShowSelectPlayerStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupBoardWidget(UKizokAccessoryEquipBoardWidget* InBoardWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void RotateFocusAccessory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquipFocusAccessory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterStatusScrollBoxInfo(UScrollBox* InScrollBox);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterCharaIconMaterial(UMaterialInstanceDynamic* InMaterial, FName InParameterName, UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAccessoryListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UKizokButtonWidget* InUniqueButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAccessoryBoard(UCanvasPanel* InBoard, int32 InSquareWidthNum, int32 InSquareHeightNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterAbilityWidget(UKizokUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateDetailAccessory(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectWidgetTooBig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectRemoveOverlapAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectRemoveEquipAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectEquipedAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateAccessory(bool bInRotate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectBeforeState(const FKizokAccessoryDispStatus& InBeforeStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectAfterState(const FKizokAccessoryDispStatus& InBeforeStatus, const FKizokAccessoryDispStatus& InAfterStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectAbilityWidgetParam(UKizokUserWidget* InWidget, const FText& InAbilityName, int32 InBeforeParameterValue, int32 InAfterParameterValue, bool bInPercentage, bool bInNecessaryClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMoveAccessorySE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayChangeScreenSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotRotateAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailureAutoEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecEquipAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBoardColor(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelRemoveOverlapAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelRemoveEquipAccessory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBootAccessoryStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBootAccessoryList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBootAccessoryEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBootAccessoryAuto();
    
private:
    UFUNCTION(BlueprintCallable)
    void MouseWheelOnBoard(float InWheelDelta);
    
    UFUNCTION(BlueprintCallable)
    void MouseMovedOnBoard(FVector2D InScreenSpacePosition);
    
    UFUNCTION(BlueprintCallable)
    void MouseEnterOnBoard(UKizokButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetThumbnail(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortModeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSelectPlayerAccessoryReleaseState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetNormalIconTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokEquipMenuState GetEquipMenuState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAutoEquipText(FName InUITextId) const;
    
    UFUNCTION(BlueprintCallable)
    FKizokAccessoryDispData GetAccessoryData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAbilityIconTexture() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCharaChange();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateAbilityWidget(UVerticalBox* InVerticalBox);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeEquipMenuState(EKizokEquipMenuState InEquipMenuState);
    
    UFUNCTION(BlueprintCallable)
    void CancelEquipState();
    
};

