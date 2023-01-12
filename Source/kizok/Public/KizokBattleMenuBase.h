#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlMenuGruopType.h"
#include "KizokUserWidget.h"
#include "KizokBattleMenuBase.generated.h"

class UImage;
class UPanelWidget;
class UKizokMenuBattleMain;
class UKizokTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleMenuBase : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMain* ParentBattleMenu;
    
public:
    UKizokBattleMenuBase();
protected:
    UFUNCTION(BlueprintCallable)
    void StartDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetOperate(bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetKizokTextBlock(UKizokTextBlock* TextBlock, FName TextId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBattleParentWidget(UKizokMenuBattleMain* BattleMainWidget);
    
    UFUNCTION(BlueprintCallable)
    void ReRegisterButtonFromPanelWidget(UPanelWidget* InPanelWidget, int32 ButtonGroupId, int32 InNum, int32 InFocusIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromPanelWidgetAsList(UPanelWidget* InPanelWidget, UKizokUserWidget* InCursorWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAnimGroupID(uint8 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimGroupColor(EBtlMenuGruopType GroupType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrategyCmd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedInAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void MainMenuSetInputEnable(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool IsValidWidgetAnimation(const UWidgetAnimation* InWidgetAnimation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidSoftObjectPath(const FSoftObjectPath& InObjectPath);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidMainMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDispBattleRapid();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsDispTutorialMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitWBP();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTutorialPhaseID();
    
    UFUNCTION(BlueprintCallable)
    void EndDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadButtonGuide(UImage* InImage, const FName& InButtonGuideId);
    
};

