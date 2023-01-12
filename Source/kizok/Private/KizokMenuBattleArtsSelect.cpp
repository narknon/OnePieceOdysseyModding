#include "KizokMenuBattleArtsSelect.h"

class UKizokUserWidget;
class UScrollBox;
class UKizokMenuBattleMain;


void UKizokMenuBattleArtsSelect::UpdateDetailMenu() {
}

void UKizokMenuBattleArtsSelect::ShowSystemMessage(EBtlMenuSystemMesType InMessageType) {
}

void UKizokMenuBattleArtsSelect::SelectedArts() {
}

void UKizokMenuBattleArtsSelect::RegisterArtsListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}


void UKizokMenuBattleArtsSelect::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}


bool UKizokMenuBattleArtsSelect::IsUsableFocusList(EBtlMenuSystemMesType& OutMessageType) {
    return false;
}

void UKizokMenuBattleArtsSelect::InitArtsList() {
}

bool UKizokMenuBattleArtsSelect::GetDispArtsListParam(int32 InIndex, FBtlDispArtsList& OutListParam) {
    return false;
}

PLAYER_ID UKizokMenuBattleArtsSelect::GetCurPlayer() {
    return PLAYER_ID::PLAYER_ID_LUF;
}

bool UKizokMenuBattleArtsSelect::GetCurArtsListParam(FBtlMenuArtsSkill& OutListParam) {
    return false;
}

void UKizokMenuBattleArtsSelect::ExecKizunaArts() {
}

void UKizokMenuBattleArtsSelect::CreateArtsList(PLAYER_ID playerID) {
}

void UKizokMenuBattleArtsSelect::ConvertArtsDispList(const FBtlMenuArtsSkill& InArtsParam, FBtlDispArtsList& OutDispList) {
}


void UKizokMenuBattleArtsSelect::Closed() {
}


UKizokMenuBattleArtsSelect::UKizokMenuBattleArtsSelect() {
    this->bDebugMode = false;
    this->ButtonGroupId = 0;
    this->bCancel = false;
}

