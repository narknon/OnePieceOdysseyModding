#include "KizokMainMenuFrame.h"

class UKizokMainMenuPage;


void UKizokMainMenuFrame::StartSaveSequence(FKizokEndSystemSaveSequenceDelegate InDelegate) {
}

void UKizokMainMenuFrame::SetTabButtonLock(int32 InMenuIndex, bool IsLock) {
}

void UKizokMainMenuFrame::SetCloseByCancelButton(bool bInEnable) {
}


void UKizokMainMenuFrame::OpenMainMenu(int32 InMenuIndex) {
}

void UKizokMainMenuFrame::OpenCharacterDetailMenu(PLAYER_ID InPlayerId) {
}

bool UKizokMainMenuFrame::IsNeedDoSaveSequence() const {
    return false;
}

FSoftObjectPath UKizokMainMenuFrame::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

UKizokMainMenuPage* UKizokMainMenuFrame::GetSelectMenuWidget() const {
    return NULL;
}

int32 UKizokMainMenuFrame::GetBootMenuIndex() const {
    return 0;
}

void UKizokMainMenuFrame::EndSaveSequenceForSelectTab() {
}

void UKizokMainMenuFrame::CloseCommonCore() {
}

UKizokMainMenuFrame::UKizokMainMenuFrame() {
    this->SystemSaveSequence = NULL;
}

