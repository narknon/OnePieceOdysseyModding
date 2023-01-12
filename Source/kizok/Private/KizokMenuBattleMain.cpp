#include "KizokMenuBattleMain.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokBattleCharaBase;
class UKizokBattleMenuManager;
class UKizokMenuBattleGroupOrder;
class UKizokMenuBattleCmd;
class UKizokMenuBattleArtsSelect;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattlePartyChange;
class UKizokMenuBattleKiznaCharge;
class UKizokMenuBattleItem;
class UKizokMenuBattleSubCmd;
class UKizokMenuBattleSkill;

void UKizokMenuBattleMain::UpdateZOrderFieldIconAll() {
}

void UKizokMenuBattleMain::UpdateVisibleFieldIconAll(int32 visible_group_id) {
}



void UKizokMenuBattleMain::UpdateTurnGauge() {
}

void UKizokMenuBattleMain::UpdateTopOrderCharaParam() {
}


void UKizokMenuBattleMain::UpdateStatusWidgetEnemyIcon() {
}

void UKizokMenuBattleMain::UpdateStatusWBP(int32 Index) {
}



void UKizokMenuBattleMain::UpdateStatusAll() {
}





void UKizokMenuBattleMain::UpdatePowerMapIconAll() {
}





void UKizokMenuBattleMain::UpdateFocusGroup() {
}





void UKizokMenuBattleMain::UpdateAttackTarget() {
}

void UKizokMenuBattleMain::StopWidgetInput() {
}

void UKizokMenuBattleMain::StopSkillFieldIconAnimation() {
}



void UKizokMenuBattleMain::StopPlayerAutoAction() {
}


void UKizokMenuBattleMain::StopFieldIconAnimation() {
}


void UKizokMenuBattleMain::StartTutorialMenu(EBTL_NEW_TUTORIAL_ID tutorialType) {
}









void UKizokMenuBattleMain::SetVisibleSituationMenu(bool bVisible) {
}





void UKizokMenuBattleMain::SetSkillTargetList(FName skill_id, EBtlMenuTargetRange target_type) {
}

void UKizokMenuBattleMain::SetPartyChangeInfo(UKizokMenuBattlePartyChange* party_change_widget) {
}


void UKizokMenuBattleMain::SetItemTargetList(FName item_id, UKizokMenuBattleItem* item_widget) {
}

EBtlMenuTargetRange UKizokMenuBattleMain::SetItemTarget(FName ItemId, UKizokMenuBattleItem* Widget) {
    return EBtlMenuTargetRange::BMTR_Self;
}



void UKizokMenuBattleMain::SetHeaderText(const FName header_text) {
}



void UKizokMenuBattleMain::SetEnemyGroupNo(int32 no) {
}

void UKizokMenuBattleMain::SetDirectionAnimType(EBtlMenuDirectAnim AnimType) {
}

void UKizokMenuBattleMain::SetCurrentAttackTarget() {
}

void UKizokMenuBattleMain::SetCameraLock(bool is_lock) {
}


void UKizokMenuBattleMain::SetArtsTargetList(FName ArtsId, EBtlMenuTargetRange TargetRange) {
}




void UKizokMenuBattleMain::ResultOpenWidget() {
}

void UKizokMenuBattleMain::ReStartWidgetInput() {
}


void UKizokMenuBattleMain::ReflectChangeActionPlayer() {
}

void UKizokMenuBattleMain::PlayVoiceAttackDisableEnemy(EBtlMenuSystemMesType InMessageType) {
}
















void UKizokMenuBattleMain::OpenSkillWindow() {
}

void UKizokMenuBattleMain::OpenKiznaChargeWindow() {
}

void UKizokMenuBattleMain::OpenItemWindow() {
}

void UKizokMenuBattleMain::OpenArtsWindow() {
}





void UKizokMenuBattleMain::OnFinishedDirectionAnimation(EBtlMenuDirectAnim AnimType) {
}




void UKizokMenuBattleMain::NotifyCameraMove() {
}

bool UKizokMenuBattleMain::IsVisibleGroupChangeCursor() {
    return false;
}

bool UKizokMenuBattleMain::IsViewFocusTarget() {
    return false;
}

bool UKizokMenuBattleMain::IsTargetRangeSameGroupOnly() {
    return false;
}

bool UKizokMenuBattleMain::IsTargetRangeEnemy() {
    return false;
}


bool UKizokMenuBattleMain::IsSelectableTacticsPartyChange() const {
    return false;
}

bool UKizokMenuBattleMain::IsSelectableTacticsEscape() const {
    return false;
}


bool UKizokMenuBattleMain::IsEnableRapidBattle() {
    return false;
}


bool UKizokMenuBattleMain::IsCurDirectAnimNone() {
    return false;
}

bool UKizokMenuBattleMain::IsCurCorpsPlayerSide() {
    return false;
}

bool UKizokMenuBattleMain::IsBlowAttack() {
    return false;
}

bool UKizokMenuBattleMain::IsAttackTargetTypeSingle() {
    return false;
}

bool UKizokMenuBattleMain::IsAttackTargetRangeAll() {
    return false;
}

EBtlMenuSystemMesType UKizokMenuBattleMain::IsAttackableEnemy() {
    return EBtlMenuSystemMesType::UnselectablePartyChangeCmd;
}


bool UKizokMenuBattleMain::IsAnyExistPlayerStatusEffect() {
    return false;
}

bool UKizokMenuBattleMain::IsActionableStateCurrentPlayer() {
    return false;
}



void UKizokMenuBattleMain::InitMenu() {
}

void UKizokMenuBattleMain::InitMainAttackCmd() {
}




TArray<FText> UKizokMenuBattleMain::GetViewTargeNametList() {
    return TArray<FText>();
}

int32 UKizokMenuBattleMain::GetTurnNum() const {
    return 0;
}

FSoftObjectPath UKizokMenuBattleMain::GetTargetRangeImagePath(EBtlMenuTargetRange TargetRange) {
    return FSoftObjectPath{};
}

void UKizokMenuBattleMain::GetTargetIconList(TArray<FBtlMenuGroupPos>& List) {
}

TArray<UKizokBattleCharaBase*> UKizokMenuBattleMain::GetTargetCharaList() {
    return TArray<UKizokBattleCharaBase*>();
}

FSoftObjectPath UKizokMenuBattleMain::GetStatusIconPath(EBtlMenuStatusIconType Type) {
    return FSoftObjectPath{};
}

TArray<FBtlMenuStatus> UKizokMenuBattleMain::GetStatusDispList() {
    return TArray<FBtlMenuStatus>();
}

FBtlMenuStatus UKizokMenuBattleMain::GetStatusDispIcon(int32 Index) {
    return FBtlMenuStatus{};
}

FSoftObjectPath UKizokMenuBattleMain::GetPlayerIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType) {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattleMain::GetPlayerFacePath(PLAYER_ID playerID) {
    return FSoftObjectPath{};
}

FName UKizokMenuBattleMain::GetHeaderText() const {
    return NAME_None;
}

FText UKizokMenuBattleMain::GetFocusTargetName() {
    return FText::GetEmpty();
}

EBtlMenuTargetRange UKizokMenuBattleMain::GetCurrentTargetRange() {
    return EBtlMenuTargetRange::BMTR_Self;
}


FSoftObjectPath UKizokMenuBattleMain::GetCurrentCharaIconPath() {
    return FSoftObjectPath{};
}

bool UKizokMenuBattleMain::GetCurPlayerName(FString& OutName) {
    return false;
}

EBtlMenuDirectAnim UKizokMenuBattleMain::GetCurDirectAnim() {
    return EBtlMenuDirectAnim::TurnStart;
}

void UKizokMenuBattleMain::GetCurCharaIDAndFlagTexPath(PLAYER_ID& playerID, FSoftObjectPath& texPath) {
}

FText UKizokMenuBattleMain::GetCurCharaActionExecName() {
    return FText::GetEmpty();
}

UKizokBattleMenuManager* UKizokMenuBattleMain::GetBtlMenuManager() {
    return NULL;
}

UKizokMenuBattleSubCmd* UKizokMenuBattleMain::GetBattleSubCmdWidget() {
    return NULL;
}

UKizokMenuBattleSkill* UKizokMenuBattleMain::GetBattleSkillWidget() {
    return NULL;
}

UKizokMenuBattlePartySelect* UKizokMenuBattleMain::GetBattlePartySelectWidget() {
    return NULL;
}

UKizokMenuBattleKiznaCharge* UKizokMenuBattleMain::GetBattleKiznaChargeWidget() {
    return NULL;
}

UKizokMenuBattleItem* UKizokMenuBattleMain::GetBattleItemWidget() {
    return NULL;
}

UKizokMenuBattleGroupOrder* UKizokMenuBattleMain::GetBattleGroupOrderWidget() {
    return NULL;
}

UKizokMenuBattleCmd* UKizokMenuBattleMain::GetBattleCmdWidget() {
    return NULL;
}

UKizokMenuBattleArtsSelect* UKizokMenuBattleMain::GetBattleArtsSelectWidget() {
    return NULL;
}

int32 UKizokMenuBattleMain::GetBanquetBonusCount() {
    return 0;
}









void UKizokMenuBattleMain::ExecuteItemAction(const FString& TargetName) {
}


void UKizokMenuBattleMain::ExecPartyChange(PLAYER_ID main_player, PLAYER_ID sub_player) {
}

void UKizokMenuBattleMain::ExecAttackAction() {
}





void UKizokMenuBattleMain::DestroyPlayerIcon() {
}

void UKizokMenuBattleMain::DestroyFieldIcon() {
}


void UKizokMenuBattleMain::DecideMainCmd(EBattleMainCmdType command_type) {
}


void UKizokMenuBattleMain::CreateSkillSelectFieldGruopIcon(FBtlMenuSkillInfo SkillInfo) {
}

void UKizokMenuBattleMain::CreatePlayerIcon() {
}

void UKizokMenuBattleMain::CreateFieldGruopIcon() {
}

void UKizokMenuBattleMain::CreateCurCharaFieldIcon() {
}






void UKizokMenuBattleMain::ClearSkillFieldIconWidget() {
}

void UKizokMenuBattleMain::ClearEnemyFieldIconList() {
}



void UKizokMenuBattleMain::ChangePlayerIcon() {
}



void UKizokMenuBattleMain::ChangeFocusMember(int32 InFocusMemberIndex) {
}

void UKizokMenuBattleMain::ChangeEnemyTurnHeaderText() {
}

void UKizokMenuBattleMain::ChangeCameraType(EBtlMenuCameraType Type) {
}

void UKizokMenuBattleMain::ChangeBlowAttack() {
}

void UKizokMenuBattleMain::ChangeAttackTarget(UKizokButtonWidget* button_widget) {
}

void UKizokMenuBattleMain::CancelAttackAction() {
}

void UKizokMenuBattleMain::CallWidgetAnimEnd(EBtlMenuDirectAnim AnimType) {
}

void UKizokMenuBattleMain::CallTacticsCmd(EBattleSubCmdType command_type) {
}

void UKizokMenuBattleMain::ApplyTarget(const FString& target_name) {
}

void UKizokMenuBattleMain::AddChild(UKizokUserWidget* Widget, int32 ZOrder) {
}

UKizokMenuBattleMain::UKizokMenuBattleMain() {
    this->CmdSelectWidget = NULL;
    this->PlayerFieldIconList = NULL;
    this->EnemyFieldIconList = NULL;
    this->TutorialTextTableAsset = NULL;
    this->CurrentSeq = EBattleMenuSeq::BMS_Situation;
    this->EnemyGroupID = 0;
    this->EnableChangeSeq = false;
    this->EnableBattleEscape = false;
    this->TargetSelectMode = EBtlMenuGroupSelectMode::TargetSelect;
    this->bEnableCmdOperateChara = false;
    this->bCurrentEnemyTurn = false;
    this->DirectTelopVisibleWaitTime = 0.00f;
    this->m_BtlMenuManager = NULL;
}

