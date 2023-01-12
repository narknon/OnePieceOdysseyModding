#include "KizokSkillUpMenu.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokCharacterDetailMenu;
class UPanelWidget;
class UScrollBox;
class UKizokSkillUpButtonWidget;
class UHorizontalBox;

void UKizokSkillUpMenu::SetState(EKizokSkillUpMenuState InState) {
}

void UKizokSkillUpMenu::SetSkillTypeIconStartIndex(uint8 InStartIndex) {
}

void UKizokSkillUpMenu::SetSkillTypeIconImageIndex(uint8 InImageIndex) {
}

void UKizokSkillUpMenu::SetCubeSetMaterialIndex(uint8 InIndex) {
}

void UKizokSkillUpMenu::SetCharaTextureStartIndex(int32 InIndex) {
}

void UKizokSkillUpMenu::SetButtonGroupInputEnable(uint8 InButtonGroupIndex, bool InEnable) {
}

void UKizokSkillUpMenu::SaveFocusInfo(float InSaveScrollOffset, bool SkillTabChange) {
}

void UKizokSkillUpMenu::ResetPossessCubeOfAllSkil() {
}

void UKizokSkillUpMenu::ReflectCharaInfoInCubeSet() {
}

void UKizokSkillUpMenu::ReflectCharaDetailMenu() {
}





UKizokSkillUpButtonWidget* UKizokSkillUpMenu::ManipulateCube(int32 InFocusIndex, bool& OutResult, uint8& OutCubeIndex, bool& OutIsSet, uint8& OutSlotIndex, EKizokSkillUpMenuSlotState& OutSlotState, PLAYER_ID& OutPlayerId) {
    return NULL;
}

bool UKizokSkillUpMenu::IsSkillTabWidget(const UKizokButtonWidget* InButtonWidget) const {
    return false;
}

void UKizokSkillUpMenu::InitSkillupMenu(UKizokCharacterDetailMenu* InCharacterDetailMenu, EKizokCharacterDetailMenuState InState, PLAYER_ID InPlayerId, int32 InFocusIndex) {
}

void UKizokSkillUpMenu::InitButtonGuide() {
}

void UKizokSkillUpMenu::HiddenUpdateIcon(uint8 InCharaIndex, uint8 InSkillIndex) {
}

FSoftObjectPath UKizokSkillUpMenu::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

EKizokSkillUpMenuState UKizokSkillUpMenu::GetState() const {
    return EKizokSkillUpMenuState::CubeSet;
}

int32 UKizokSkillUpMenu::GetStartFocusIndex() {
    return 0;
}

FSoftObjectPath UKizokSkillUpMenu::GetSkillTypeIcon(uint8 InIndex) const {
    return FSoftObjectPath{};
}

uint8 UKizokSkillUpMenu::GetSkillTabGroupIndex() const {
    return 0;
}

int32 UKizokSkillUpMenu::GetSkillTabFocusIndex() const {
    return 0;
}

FSoftObjectPath UKizokSkillUpMenu::GetSkillIconTexture(ASP_ATTRIBUTE InSkillAttribute) const {
    return FSoftObjectPath{};
}

FKizokSkillUpMenuSkillData UKizokSkillUpMenu::GetSkillData(uint8 InCharaIndex, uint8 InSkillIndex) const {
    return FKizokSkillUpMenuSkillData{};
}

bool UKizokSkillUpMenu::GetNoticeDeletePossible() const {
    return false;
}

FSoftObjectPath UKizokSkillUpMenu::GetFlagTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokSkillUpMenu::GetFieldSkillTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

uint8 UKizokSkillUpMenu::GetCubeSetSkillButtonGroupIndex() const {
    return 0;
}

int32 UKizokSkillUpMenu::GetCubeSetSkillButtonFocusIndex() const {
    return 0;
}

int32 UKizokSkillUpMenu::GetCubeSetSelectCharaIndex() const {
    return 0;
}

UKizokSkillUpButtonWidget* UKizokSkillUpMenu::GetCubeSetCubeButtonWidget() const {
    return NULL;
}

int32 UKizokSkillUpMenu::GetCubeSetCubeButtonNum() const {
    return 0;
}

uint8 UKizokSkillUpMenu::GetCubeSetCubeButtonGroupIndex() const {
    return 0;
}

int32 UKizokSkillUpMenu::GetCubeSetCubeButtonFocusIndex() const {
    return 0;
}

UKizokUserWidget* UKizokSkillUpMenu::GetCubeSetCubeButtonCursor() const {
    return NULL;
}

int32 UKizokSkillUpMenu::GetCharaTextureStartIndex() const {
    return 0;
}

FSoftObjectPath UKizokSkillUpMenu::GetCharaTexture(uint8 InIndex) const {
    return FSoftObjectPath{};
}

TArray<FKizokSkillUpMenuCharaData> UKizokSkillUpMenu::GetCharaDataList() const {
    return TArray<FKizokSkillUpMenuCharaData>();
}

FKizokSkillUpMenuCharaData UKizokSkillUpMenu::GetCharaData(uint8 InIndex) const {
    return FKizokSkillUpMenuCharaData{};
}

FSoftObjectPath UKizokSkillUpMenu::GetBattleSkillTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}

void UKizokSkillUpMenu::CreateAllButtonGroup(UHorizontalBox* InSkillTabHorizontalBox, UScrollBox* InCubeSetSkillButtonScrollBox, UKizokButtonWidget* InUniqueButtonWidget, UKizokUserWidget* InCubeSetSkillButtonCursor, UKizokUserWidget* InCubeSetCubeButtonCursor) {
}

void UKizokSkillUpMenu::ChangeCubeSetSkillButtonGroup() {
}

void UKizokSkillUpMenu::ChangeCubeSetCubeButtonGroup(const TArray<UPanelWidget*>& InPanelWidgetArray, int32 InSkillIndex) {
}

bool UKizokSkillUpMenu::ButtonPressedIsAllReset() const {
    return false;
}

UKizokSkillUpMenu::UKizokSkillUpMenu() {
    this->CubeSetSkillButtonWidget = NULL;
    this->SkillAttrTableAsset = NULL;
    this->SkillTypeTableAsset = NULL;
    this->characterDetailMenu = NULL;
}

