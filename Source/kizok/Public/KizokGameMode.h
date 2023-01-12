#pragma once
#include "CoreMinimal.h"
#include "BATTLE_RESULT.h"
#include "PLAYER_ID.h"
#include "EKizokAreaTelopMode.h"
#include "EKizokLoadingMode.h"
#include "UpdatePartyAndSkillByEpisodeIdDelegate.h"
#include "OnBattleResultDelegate.h"
#include "OnNPCTalkFlagDelegate.h"
#include "EndCSMessageDelegateDelegate.h"
#include "EndBattleCSDelegateDelegate.h"
#include "GameOverFromBattleDelegateDelegate.h"
#include "EndBattleDelegateDelegate.h"
#include "PreEndBattleDelegateDelegate.h"
#include "PreBattleToFieldDelegateDelegate.h"
#include "StartBattleShowCaptureDelegateDelegate.h"
#include "StartBattleDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameMode.h"
#include "KizokGameMode.generated.h"

class UKizokUserWidget;
class UKizokAutoSaveWidget;
class UKizokAreaTelopWidget;
class AKizokNewBattleMode;
class AKizokBattleSituationManager;
class UKizokChapterTitleWidget;
class AKizokCaptureRoom;
class AKizokCSSkipManager;
class UKizokCSCaption;
class UKizokConversationWidget;
class UKizokDialogMenu;
class UKizokDestinationWidget;
class UKizokFadeWidget;
class UKizokFaceIconManager;
class AKizokEffectParticle2;
class AKizokFieldPlayerManager;
class AKizokFieldNPCEnemyCharacter;
class AKizokFieldMessageManager;
class UKizokFieldManager;
class UKizokKeyAssignWidget;
class UKizokItemTelopListWidget;
class UKizokHelpMenu;
class UKizokGroupTalkOperator;
class UKizokLogTelopWidget;
class UKizokLoadingWidget;
class UKizokMiniMapWidget;
class UKizokMessageWindowManager;
class UKizokMessageControl;
class UKizokRoomTelopWidget;
class UKizokRegionTelopWidget;
class UKizokQuestInfoFrameWidget;
class UKizokSimpleHelpWidget;
class AKizokTextureFolder;
class UKizokTalkWindow;
class UKizokTitleManager;
class AKizokWidgetInputManager;

UCLASS(Blueprintable, NonTransient)
class KIZOK_API AKizokGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartBattleDelegate OnStartBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartBattleShowCaptureDelegate OnStartBattleShowCaptureDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreBattleToFieldDelegate OnPreBattleToFieldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreEndBattleDelegate OnPreEndBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleDelegate OnEndBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverFromBattleDelegate OnGameOverFromBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleCSDelegate OnEndBattleCSDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleResult OnBattleResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePartyAndSkillByEpisodeId OnUpdatePartyAndSkillByEpisodeId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndCSMessageDelegate EndCSMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCTalkFlag OnNPCTalkFlag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* ConcEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMessageWindowManager* m_MessageWindowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokFieldMessageManager* m_FieldMessageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokFieldPlayerManager* FieldPlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokWidgetInputManager* WidgetInputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTalkWindow* TalkWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokFadeWidget* FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokConversationWidget* ConversationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokItemTelopListWidget* ItemTelopListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMessageControl* m_MessageControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokGroupTalkOperator* m_GroupTalkOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMiniMapWidget* MiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokLoadingWidget* LoadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokLoadingWidget* NowLoadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokAutoSaveWidget* AutoSaveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDestinationWidget* DestinationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokChapterTitleWidget* ChapterTitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokRegionTelopWidget* RegionTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokAreaTelopWidget* AreaTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokRoomTelopWidget* RoomTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokLogTelopWidget* LogTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokKeyAssignWidget* KeyAssignWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokQuestInfoFrameWidget* QuestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSimpleHelpWidget* SimpleHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokUserWidget* AutoRunWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokCSCaption* CSCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokCSSkipManager* CSSkipManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDialogMenu* DialogWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFieldManager* FieldManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFaceIconManager* FaceIconManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokCaptureRoom* CaptureRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokTitleManager* TitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokTextureFolder* TextureFolder;
    
public:
    AKizokGameMode();
    UFUNCTION(BlueprintCallable)
    void UpdateLatestDestination();
    
    UFUNCTION(BlueprintCallable)
    void TriggerCaptureFrame();
    
    UFUNCTION(BlueprintCallable)
    void SubInventry(FName InId, uint8 InNum);
    
    UFUNCTION(BlueprintCallable)
    void StartEventCamera(const FString& CameraID);
    
    UFUNCTION(BlueprintCallable)
    void ShowRoomTelop();
    
    UFUNCTION(BlueprintCallable)
    void ShowRegionTelop();
    
    UFUNCTION(BlueprintCallable)
    void ShowMiniMap(bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    void ShowLogTelop();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingWidget(EKizokLoadingMode InLoadingMode, bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    void ShowKeyAssign();
    
    UFUNCTION(BlueprintCallable)
    UKizokDialogMenu* ShowDecisionDialogWindowFromTextId(const FName& InUITextId, bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    UKizokUserWidget* ShowChapterTitle(uint8 InChapterNo);
    
    UFUNCTION(BlueprintCallable)
    void ShowCapturedMaskUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowAutoSaveWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowAreaTelop(EKizokAreaTelopMode InMode, FName InTextId);
    
    UFUNCTION(BlueprintCallable)
    void ShowAccessoryEquipMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetTextureFolder(AKizokTextureFolder* InTextureFolder);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingProgressParam(float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFillableKizunaValue();
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(const FString& Name, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void PlayEncountAnim(FName Party, FName mapID);
    
    UFUNCTION(BlueprintCallable)
    void OpenSimpleHelp(FName InHelpId);
    
    UFUNCTION(BlueprintCallable)
    UKizokHelpMenu* OpenHelpMenu(FName InHelpId);
    
    UFUNCTION(BlueprintCallable)
    bool IsShowMiniMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowLoadingWidget() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsShowDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessComposedAccessory(uint8 InNum) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaySound(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void HideRoomTelop();
    
    UFUNCTION(BlueprintCallable)
    void HideRegionTelop();
    
    UFUNCTION(BlueprintCallable)
    void HideMiniMap(bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    void HideLogTelop();
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingWidget(bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    void HideKeyAssign();
    
    UFUNCTION(BlueprintCallable)
    void HideDestination();
    
    UFUNCTION(BlueprintCallable)
    void HideChapterTitle();
    
    UFUNCTION(BlueprintCallable)
    void HideCapturedMaskUI();
    
    UFUNCTION(BlueprintCallable)
    void HideAreaTelop();
    
    UFUNCTION(BlueprintCallable)
    bool HasCapturedFrame();
    
    UFUNCTION(BlueprintCallable)
    bool HasBeenShownCaptureScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokTextureFolder* GetTextureFolder() const;
    
    UFUNCTION(BlueprintCallable)
    UKizokTalkWindow* GetTalkWindow();
    
    UFUNCTION(BlueprintCallable)
    FText GetRoomName(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokFieldPlayerManager* GetFieldPlayerMgr();
    
    UFUNCTION(BlueprintCallable)
    AKizokFieldMessageManager* GetFieldMessageManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokFadeWidget* GetFadeWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokFaceIconManager* GetFaceIconManager();
    
    UFUNCTION(BlueprintCallable)
    AKizokCSSkipManager* GetCSSkipManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokCaptureRoom* GetCaptureRoom() const;
    
    UFUNCTION(BlueprintCallable)
    AKizokBattleSituationManager* GetBattleSituationManager();
    
    UFUNCTION(BlueprintCallable)
    BATTLE_RESULT GetBattleResult();
    
    UFUNCTION(BlueprintCallable)
    AKizokNewBattleMode* GetBattleMode();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRegionTelop();
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDialogWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyCSSkipManager();
    
    UFUNCTION(BlueprintCallable)
    void DestroyChapterTitle();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAreaTelop();
    
    UFUNCTION(BlueprintCallable)
    AKizokCSSkipManager* CreateCSSkipManager();
    
    UFUNCTION(BlueprintCallable)
    void CloseSimpleHelp();
    
    UFUNCTION(BlueprintCallable)
    void CloseCSCaption();
    
    UFUNCTION(BlueprintCallable)
    void BeginBattle(FName PartyID, FName BattleMap, TMap<PLAYER_ID, int32> GuestInParam, TArray<FName> KizunaArtsID, AKizokFieldNPCEnemyCharacter* EnemyActor);
    
    UFUNCTION(BlueprintCallable)
    void AddQuestInfo(FName InQuestId);
    
    UFUNCTION(BlueprintCallable)
    void AddInventry(FName InId, uint8 InNum);
    
};

