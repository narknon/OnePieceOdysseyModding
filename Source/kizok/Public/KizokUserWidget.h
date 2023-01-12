#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokAsyncLoadTextureInfo.h"
#include "EKizokWidgetPriority.h"
#include "EKizokWidgetCommonSE.h"
#include "Components/SlateWrapperTypes.h"
#include "EKizokWidgetInput.h"
#include "KizokOnDestroyWidgetEventDelegate.h"
#include "Blueprint/UserWidget.h"
#include "KizokUserWidget.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UImage;
class UPanelWidget;
class UScrollBox;
class UKizokSEComponent;
class UKizokWidgetManager;
class UKizokUserWidgetMouseScrollAssist;
class UHorizontalBox;
class UWidgetAnimation;
class UVerticalBox;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnDestroyWidgetEvent OnDestroy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokWidgetManager* WidgetManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKizokUserWidgetMouseScrollAssist*> ScrollAssistList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokAsyncLoadTextureInfo> AsyncLoadInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSEComponent* SoundComponent;
    
public:
    UKizokUserWidget();
    UFUNCTION(BlueprintCallable)
    void StopSound(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void StartWidgetOperate();
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldRender(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSound(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAsyncLoadInfoTarget(UImage* InImage);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RegisterScrollBoxForScrollOnly(UScrollBox* InScrollBox, float InScrollLength, bool bInRightStick);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterNoButtonScrollBoxForScrollOnly(UScrollBox* InScrollBox, float InScrollInsideSize, float InScrollLength);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromVerticalBox(const UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromScrollBoxAndUniqueButton(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UKizokButtonWidget* InUniqueButtonWidget, int32 InFocusIndex, bool IsAddUniqueButtonFirst);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromPanelWidget(UPanelWidget* InPanelWidget, int32 InNum, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromHorizontalBox(const UHorizontalBox* InHorizontalBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 PlayVoice(FName CueName);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySE(FName CueName);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayJingle(FName CueName);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayCommonSE(EKizokWidgetCommonSE InWidgetCommonSE);
    
    UFUNCTION(BlueprintCallable)
    void PauseSound(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidgetParts();
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EKizokWidgetPriority InPriority, bool bInPaused);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSort();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputMouseLeave(UKizokButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnInputMouseEnter(UKizokButtonWidget* InButtonWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonSelectNotSelectable(const UKizokButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonSelect(const UKizokButtonWidget* InButtonWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInputEnable();
    
    UFUNCTION(BlueprintCallable)
    UKizokSEComponent* GetSoundComponent();
    
    UFUNCTION(BlueprintCallable)
    void EndWidgetOperate();
    
    UFUNCTION(BlueprintCallable)
    void DestroyWidget();
    
    UFUNCTION(BlueprintCallable)
    static bool ContainsAnimation(UUserWidget* Widget, UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAsyncLoadInfoList();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 AsyncLoadTextureToMaterial(const FSoftObjectPath& InObjectPath, UMaterialInstanceDynamic* InMaterial, FName InParameterName, UImage* InImage, ESlateVisibility InVisibleType);
    
    UFUNCTION(BlueprintCallable)
    int32 AsyncLoadTextureToImage(const FSoftObjectPath& InObjectPath, UImage* InImage, bool bInMatchSize, bool bInVisibleLoaded, ESlateVisibility InVisibleType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddWidgetToScrollBox(int32 Index, UKizokButtonWidget* InWidget);
    
};

