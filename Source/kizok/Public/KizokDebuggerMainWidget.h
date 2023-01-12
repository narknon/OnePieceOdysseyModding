#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WidgetDebugCommonDataSet.h"
#include "EWidgetDebugExecType.h"
#include "Blueprint/UserWidget.h"
#include "KizokDebuggerMainWidget.generated.h"

class APlayerController;
class UKizokDebuggerResource;
class UPanelWidget;
class UKizokDebuggerCheckBox;
class UKizokDebuggerTextInput;
class UKizokSubMenuWidget;
class UButton;
class UKizokWidgetDebuggerExecButton;
class UWidgetSwitcher;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokDebuggerMainWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FRequestData, FWidgetDebugCommonDataSet&, dataset);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnClickButton, EWidgetDebugExecType, execType, int32, Param);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnChangedData, FWidgetDebugCommonDataSet&, dataset);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestData m_requestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedData m_onChangedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickButton m_onClickButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerResource> DebuggerResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerResource* m_debuggerResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokSubMenuWidget> SubMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_playerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ExampleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_widgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_sub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokWidgetDebuggerExecButton* m_b;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerCheckBox* m_checkBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerTextInput* m_textInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_enterCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_mainCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_exitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timePast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokSubMenuWidget*> m_subMenu;
    
    UKizokDebuggerMainWidget();
    UFUNCTION(BlueprintCallable)
    void StartCreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnMymainTick(float DeltaSecond);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void EndWidget();
    
    UFUNCTION(BlueprintCallable)
    void BeginWidget();
    
};

