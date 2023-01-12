#include "KizokGameMode.h"

class UKizokUserWidget;
class AKizokNewBattleMode;
class AKizokBattleSituationManager;
class AKizokCaptureRoom;
class AKizokCSSkipManager;
class UKizokDialogMenu;
class UKizokFadeWidget;
class UKizokFaceIconManager;
class AKizokFieldPlayerManager;
class AKizokFieldNPCEnemyCharacter;
class AKizokFieldMessageManager;
class UKizokHelpMenu;
class AKizokTextureFolder;
class UKizokTalkWindow;

void AKizokGameMode::UpdateLatestDestination() {
}

void AKizokGameMode::TriggerCaptureFrame() {
}

void AKizokGameMode::SubInventry(FName InId, uint8 InNum) {
}

void AKizokGameMode::StartEventCamera(const FString& CameraID) {
}

void AKizokGameMode::ShowRoomTelop() {
}

void AKizokGameMode::ShowRegionTelop() {
}

void AKizokGameMode::ShowMiniMap(bool bInInstant) {
}

void AKizokGameMode::ShowLogTelop() {
}

void AKizokGameMode::ShowLoadingWidget(EKizokLoadingMode InLoadingMode, bool bInInstant) {
}

void AKizokGameMode::ShowKeyAssign() {
}

UKizokDialogMenu* AKizokGameMode::ShowDecisionDialogWindowFromTextId(const FName& InUITextId, bool bInPaused) {
    return NULL;
}

UKizokUserWidget* AKizokGameMode::ShowChapterTitle(uint8 InChapterNo) {
    return NULL;
}

void AKizokGameMode::ShowCapturedMaskUI() {
}

void AKizokGameMode::ShowAutoSaveWidget() {
}

void AKizokGameMode::ShowAreaTelop(EKizokAreaTelopMode InMode, FName InTextId) {
}

void AKizokGameMode::ShowAccessoryEquipMenu() {
}

void AKizokGameMode::SetTextureFolder(AKizokTextureFolder* InTextureFolder) {
}

void AKizokGameMode::SetLoadingProgressParam(float InParam) {
}

void AKizokGameMode::SetForceFillableKizunaValue() {
}

int32 AKizokGameMode::PlaySound(const FString& Name, FVector Pos) {
    return 0;
}

void AKizokGameMode::PlayEncountAnim(FName Party, FName mapID) {
}

void AKizokGameMode::OpenSimpleHelp(FName InHelpId) {
}

UKizokHelpMenu* AKizokGameMode::OpenHelpMenu(FName InHelpId) {
    return NULL;
}

bool AKizokGameMode::IsShowMiniMap() {
    return false;
}

bool AKizokGameMode::IsShowLoadingWidget() const {
    return false;
}

bool AKizokGameMode::IsShowDestination() {
    return false;
}

bool AKizokGameMode::IsPossessComposedAccessory(uint8 InNum) const {
    return false;
}

bool AKizokGameMode::IsPlaySound(int32 ID) {
    return false;
}

void AKizokGameMode::HideRoomTelop() {
}

void AKizokGameMode::HideRegionTelop() {
}

void AKizokGameMode::HideMiniMap(bool bInInstant) {
}

void AKizokGameMode::HideLogTelop() {
}

void AKizokGameMode::HideLoadingWidget(bool bInInstant) {
}

void AKizokGameMode::HideKeyAssign() {
}

void AKizokGameMode::HideDestination() {
}

void AKizokGameMode::HideChapterTitle() {
}

void AKizokGameMode::HideCapturedMaskUI() {
}

void AKizokGameMode::HideAreaTelop() {
}

bool AKizokGameMode::HasCapturedFrame() {
    return false;
}

bool AKizokGameMode::HasBeenShownCaptureScreen() {
    return false;
}

AKizokTextureFolder* AKizokGameMode::GetTextureFolder() const {
    return NULL;
}

UKizokTalkWindow* AKizokGameMode::GetTalkWindow() {
    return NULL;
}

FText AKizokGameMode::GetRoomName(FName ID) {
    return FText::GetEmpty();
}

AKizokFieldPlayerManager* AKizokGameMode::GetFieldPlayerMgr() {
    return NULL;
}

AKizokFieldMessageManager* AKizokGameMode::GetFieldMessageManager() {
    return NULL;
}

UKizokFadeWidget* AKizokGameMode::GetFadeWidget() {
    return NULL;
}

UKizokFaceIconManager* AKizokGameMode::GetFaceIconManager() {
    return NULL;
}

AKizokCSSkipManager* AKizokGameMode::GetCSSkipManager() {
    return NULL;
}

AKizokCaptureRoom* AKizokGameMode::GetCaptureRoom() const {
    return NULL;
}

AKizokBattleSituationManager* AKizokGameMode::GetBattleSituationManager() {
    return NULL;
}

BATTLE_RESULT AKizokGameMode::GetBattleResult() {
    return BATTLE_RESULT::RESULT_NONE;
}

AKizokNewBattleMode* AKizokGameMode::GetBattleMode() {
    return NULL;
}

void AKizokGameMode::DestroyRegionTelop() {
}

void AKizokGameMode::DestroyMainMenu() {
}

void AKizokGameMode::DestroyDialogWindow() {
}

void AKizokGameMode::DestroyCSSkipManager() {
}

void AKizokGameMode::DestroyChapterTitle() {
}

void AKizokGameMode::DestroyAreaTelop() {
}

AKizokCSSkipManager* AKizokGameMode::CreateCSSkipManager() {
    return NULL;
}

void AKizokGameMode::CloseSimpleHelp() {
}

void AKizokGameMode::CloseCSCaption() {
}

void AKizokGameMode::BeginBattle(FName PartyID, FName BattleMap, TMap<PLAYER_ID, int32> GuestInParam, TArray<FName> KizunaArtsID, AKizokFieldNPCEnemyCharacter* EnemyActor) {
}

void AKizokGameMode::AddQuestInfo(FName InQuestId) {
}

void AKizokGameMode::AddInventry(FName InId, uint8 InNum) {
}

AKizokGameMode::AKizokGameMode() {
    this->ConcEff = NULL;
    this->m_MessageWindowManager = NULL;
    this->m_FieldMessageManager = NULL;
    this->FieldPlayerManager = NULL;
    this->WidgetInputManager = NULL;
    this->TalkWindow = NULL;
    this->FadeWidget = NULL;
    this->ConversationWidget = NULL;
    this->ItemTelopListWidget = NULL;
    this->m_MessageControl = NULL;
    this->m_GroupTalkOperator = NULL;
    this->MiniMap = NULL;
    this->LoadingWidget = NULL;
    this->NowLoadingWidget = NULL;
    this->AutoSaveWidget = NULL;
    this->DestinationWidget = NULL;
    this->ChapterTitleWidget = NULL;
    this->RegionTelopWidget = NULL;
    this->AreaTelopWidget = NULL;
    this->RoomTelopWidget = NULL;
    this->LogTelopWidget = NULL;
    this->KeyAssignWidget = NULL;
    this->QuestInfo = NULL;
    this->SimpleHelp = NULL;
    this->AutoRunWidget = NULL;
    this->CSCaption = NULL;
    this->CSSkipManager = NULL;
    this->DialogWindow = NULL;
    this->FieldManager = NULL;
    this->FaceIconManager = NULL;
    this->CaptureRoom = NULL;
    this->TitleManager = NULL;
    this->TextureFolder = NULL;
}

