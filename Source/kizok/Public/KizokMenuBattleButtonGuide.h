#pragma once
#include "CoreMinimal.h"
#include "EBtlMainMesWindow.h"
#include "BtlButtonGuide.h"
#include "BtlButtonCmdWindow.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleButtonGuide.generated.h"

class UKizokButtonWidget;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleButtonGuide : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlButtonGuide> ButtonGuideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlButtonCmdWindow> GuideTypeList;
    
public:
    UKizokMenuBattleButtonGuide();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonGuide(EBtlMainMesWindow Seq);
    
protected:
    UFUNCTION(BlueprintCallable)
    FBtlButtonCmdWindow GetMesWindowInfo(const EBtlMainMesWindow MessageType);
    
    UFUNCTION(BlueprintCallable)
    void CreateMesButtonGuide(int32 CreateNum, UGridPanel* GridPanel);
    
};

