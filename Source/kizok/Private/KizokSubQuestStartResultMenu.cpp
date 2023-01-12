#include "KizokSubQuestStartResultMenu.h"

class UDataTable;

FKizokSubQuestPosterData UKizokSubQuestStartResultMenu::GetSubQuestPosterData() {
    return FKizokSubQuestPosterData{};
}

FKizokSubQuestStartResultMenuData UKizokSubQuestStartResultMenu::GetSubQuestData() {
    return FKizokSubQuestStartResultMenuData{};
}

UDataTable* UKizokSubQuestStartResultMenu::GetQuestTitleTextTable() const {
    return NULL;
}

UDataTable* UKizokSubQuestStartResultMenu::GetQuestPurposeTextTable(int32 InQuestSeq) const {
    return NULL;
}

UDataTable* UKizokSubQuestStartResultMenu::GetQuestInfoTextTable(int32 InQuestSeq) const {
    return NULL;
}

UDataTable* UKizokSubQuestStartResultMenu::GetQuestClientTextTable() const {
    return NULL;
}

FSoftObjectPath UKizokSubQuestStartResultMenu::GetItemIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokSubQuestStartResultMenu::GetAccessoryIcon() const {
    return FSoftObjectPath{};
}

UKizokSubQuestStartResultMenu::UKizokSubQuestStartResultMenu() {
}

