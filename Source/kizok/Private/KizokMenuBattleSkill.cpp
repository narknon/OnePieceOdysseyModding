#include "KizokMenuBattleSkill.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattleMain;




void UKizokMenuBattleSkill::UpdateSkillDetailInfo() {
}

void UKizokMenuBattleSkill::UpdateSelectSkillInfo_Implementation(int32 CostSP, const FText& SkillName) {
}




void UKizokMenuBattleSkill::StartTutorialMenu(EBTL_NEW_TUTORIAL_ID tutorialType) {
}

void UKizokMenuBattleSkill::ShowSystemMessage(EBtlMenuSystemMesType systemMesType) {
}

void UKizokMenuBattleSkill::SetScrollOffset() {
}

void UKizokMenuBattleSkill::SetPlayerID(PLAYER_ID playerID) {
}

void UKizokMenuBattleSkill::SetPartyStatusList() {
}

void UKizokMenuBattleSkill::SetInputEnableSkillList(bool Enable) {
}

void UKizokMenuBattleSkill::SetFocusSkillID_Implementation(FName SkillID) {
}

void UKizokMenuBattleSkill::SelectedSkill() {
}

void UKizokMenuBattleSkill::RegisterSkillListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex) {
}


void UKizokMenuBattleSkill::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}


void UKizokMenuBattleSkill::OpenPartySelectWindow() {
}


void UKizokMenuBattleSkill::LoadSkillWidget(TSoftClassPtr<UKizokButtonWidget> skill_class) {
}

EBtlSkillMenuSysMes UKizokMenuBattleSkill::IsUseSelectSkill() {
    return EBtlSkillMenuSysMes::None;
}

bool UKizokMenuBattleSkill::IsUseCombinItem() {
    return false;
}

bool UKizokMenuBattleSkill::IsUsableSkillFromTargets() {
    return false;
}

bool UKizokMenuBattleSkill::IsUsableSkill(const FBtlMenuSkillInfo& InSkillParam, EBtlSkillMenuSysMes& OutMes) {
    return false;
}

bool UKizokMenuBattleSkill::IsCurSkillNoDamageType() {
    return false;
}

bool UKizokMenuBattleSkill::IsAvailableCombinItem(FName item_id) {
    return false;
}


void UKizokMenuBattleSkill::InitSkillList() {
}

FText UKizokMenuBattleSkill::GetTextByItemID(const FName item_id) const {
    return FText::GetEmpty();
}

FSoftObjectPath UKizokMenuBattleSkill::GetTargetRangeImagePath(EBtlMenuTargetRange TargetRange) {
    return FSoftObjectPath{};
}

int32 UKizokMenuBattleSkill::GetSkillListNum() {
    return 0;
}

int32 UKizokMenuBattleSkill::GetSkillListFocusIndex() const {
    return 0;
}

FBtlMenuSkillInfo UKizokMenuBattleSkill::GetSkillData(int32 Index) const {
    return FBtlMenuSkillInfo{};
}

FName UKizokMenuBattleSkill::GetSelectSkillID() {
    return NAME_None;
}

int32 UKizokMenuBattleSkill::GetPossessNumByItemID(const FName item_id) const {
    return 0;
}

UKizokMenuBattlePartySelect* UKizokMenuBattleSkill::GetPartySelectWidget() {
    return NULL;
}

FBtlMenuSkillInfo UKizokMenuBattleSkill::GetFocusSkillData() const {
    return FBtlMenuSkillInfo{};
}

int32 UKizokMenuBattleSkill::GetCurTP() {
    return 0;
}


TArray<FKizokSkillAtkAttr> UKizokMenuBattleSkill::GetAtkAttrList(FName SkillID) {
    return TArray<FKizokSkillAtkAttr>();
}

void UKizokMenuBattleSkill::ExecuteSkillAction(const FString& TargetName) {
}

void UKizokMenuBattleSkill::DestroyFieldIcon() {
}


void UKizokMenuBattleSkill::CreateSkillList() {
}

EBtlMenuSystemMesType UKizokMenuBattleSkill::ConvertSystemMessageType(EBtlSkillMenuSysMes skill_mes) {
    return EBtlMenuSystemMesType::UnselectablePartyChangeCmd;
}



void UKizokMenuBattleSkill::ClosePartySelectWindow() {
}

void UKizokMenuBattleSkill::ClosedSkillWidget() {
}

void UKizokMenuBattleSkill::ClearSkillList() {
}

void UKizokMenuBattleSkill::ChangeCameraType(EBtlMenuCameraType Type) {
}

void UKizokMenuBattleSkill::ChangeButtonGuide(EBtlMainMesWindow MessageType) {
}


void UKizokMenuBattleSkill::BlowSkillTutorial() {
}

UKizokMenuBattleSkill::UKizokMenuBattleSkill() {
    this->StatusWidget = NULL;
    this->CurrentSkillSeq = EBtlSkillMenuSeq::BSMS_SkillSelect;
    this->SkillWidgetClass = NULL;
}

