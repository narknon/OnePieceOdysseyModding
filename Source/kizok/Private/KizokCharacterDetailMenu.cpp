#include "KizokCharacterDetailMenu.h"

class UScrollBox;
class UKizokPlayerNameWidget;
class UCanvasPanel;

void UKizokCharacterDetailMenu::UpdateScrollBoxVisibility() {
}

void UKizokCharacterDetailMenu::SetState(EKizokCharacterDetailMenuState InState) {
}

void UKizokCharacterDetailMenu::SetSkillButtonGroupInputEnable(bool InInputEnable) {
}

void UKizokCharacterDetailMenu::SetSelectCharaPlayerId(PLAYER_ID InPlayerId) {
}

void UKizokCharacterDetailMenu::SetKizunaArtsButtonGroupInputEnable(bool InInputEnable) {
}

void UKizokCharacterDetailMenu::SetIsModeChange(bool bInIsModeChange) {
}

void UKizokCharacterDetailMenu::SetCurrentReflectCharaIndex(int32 InIndex) {
}

void UKizokCharacterDetailMenu::SaveFocusInfo(int32 InButtonGroupIndex) {
}

UKizokPlayerNameWidget* UKizokCharacterDetailMenu::ReplacementPlayerNameWidget(UCanvasPanel* InCanvasPanel, UKizokPlayerNameWidget* InWidget) {
    return NULL;
}

void UKizokCharacterDetailMenu::RegisterSkillButtonGroup() {
}

void UKizokCharacterDetailMenu::RegisterKizunaArtsButtonGroup() {
}





void UKizokCharacterDetailMenu::NextStep() {
}

void UKizokCharacterDetailMenu::LoadModel() {
}

bool UKizokCharacterDetailMenu::IsModeChange() const {
    return false;
}

void UKizokCharacterDetailMenu::InitSkillButtonGroup(TArray<UScrollBox*> InScrollBoxList, UScrollBox* InKizunaArtsScrollBox) {
}

void UKizokCharacterDetailMenu::InitSelectChara(uint8 InIndex) {
}

void UKizokCharacterDetailMenu::HiddenUpdateIcon(int32 InButtonIndex) {
}

void UKizokCharacterDetailMenu::HiddenKizunaArtsUpdateIcon(int32 InButtonIndex) {
}

EKizokCharacterDetailMenuState UKizokCharacterDetailMenu::GetState() const {
    return EKizokCharacterDetailMenuState::BattleSkill;
}

int32 UKizokCharacterDetailMenu::GetSkillDataIndex(int32 InButtonIndex) {
    return 0;
}

FSoftObjectPath UKizokCharacterDetailMenu::GetSkillAttrIcon(ASP_ATTRIBUTE InKey) const {
    return FSoftObjectPath{};
}

int32 UKizokCharacterDetailMenu::GetSelectCharaIndex() const {
    return 0;
}

bool UKizokCharacterDetailMenu::GetNoticeDeletePossible() const {
    return false;
}

FSoftObjectPath UKizokCharacterDetailMenu::GetKizunaArtsTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

int32 UKizokCharacterDetailMenu::GetKizunaArtsButtonGroupFocusIndex() const {
    return 0;
}

FSoftObjectPath UKizokCharacterDetailMenu::GetFieldSkillTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

bool UKizokCharacterDetailMenu::GetCubeHiddenFlg() const {
    return false;
}

uint8 UKizokCharacterDetailMenu::GetCharaDataNum() const {
    return 0;
}

FKizokCharacterDetailMenuCharaData UKizokCharacterDetailMenu::GetCharaData(int32 InIndex) {
    return FKizokCharacterDetailMenuCharaData{};
}

int32 UKizokCharacterDetailMenu::GetButtonGroupFocusIndex() const {
    return 0;
}

FSoftObjectPath UKizokCharacterDetailMenu::GetBattleSkillTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

void UKizokCharacterDetailMenu::CompletedTextureStreaming() {
}

void UKizokCharacterDetailMenu::CompletedModelLoading() {
}

void UKizokCharacterDetailMenu::AppearModel() {
}

UKizokCharacterDetailMenu::UKizokCharacterDetailMenu() {
    this->KizunaArtsScrollBox = NULL;
    this->SkillAttrTableAsset = NULL;
    this->SkillTypeTableAsset = NULL;
    this->CharaBookTableAsset = NULL;
    this->CharaBookTextTableAsset = NULL;
    this->CostumeTableAsset = NULL;
    this->CharaDetailTableAsset = NULL;
    this->CaptureRoom = NULL;
}

