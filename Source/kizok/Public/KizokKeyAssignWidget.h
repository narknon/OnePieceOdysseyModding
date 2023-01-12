#pragma once
#include "CoreMinimal.h"
#include "EKizokKeyAssignMode.h"
#include "KizokKeyAssignData.h"
#include "KeyAssignTargetList.h"
#include "KizokUserWidget.h"
#include "KizokKeyAssignWidget.generated.h"

class UKizokButtonGuideWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokKeyAssignWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokKeyAssignData> KeyAssignDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKizokKeyAssignMode, FKeyAssignTargetList> KeyAssignTargetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox;
    
public:
    UKizokKeyAssignWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SetupKeyAssign();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitButtonGuide(UKizokUserWidget* InUserWidget, const FKizokKeyAssignData& InKeyAssignData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButtonGuide(UKizokUserWidget* InUserWidget, bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeKeyAssignDisp();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableChangeButton() const;
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGuideWidget(UKizokButtonGuideWidget* InButtonGuideWidget, FName InButtonGuideId);
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGuideListFromVerticalBox(UVerticalBox* InVerticalBox);
    
};

