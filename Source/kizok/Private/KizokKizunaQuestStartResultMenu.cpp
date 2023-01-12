#include "KizokKizunaQuestStartResultMenu.h"

class UDataTable;

FText UKizokKizunaQuestStartResultMenu::GetSecretText() const {
    return FText::GetEmpty();
}

UDataTable* UKizokKizunaQuestStartResultMenu::GetQuestTitleTextTable() const {
    return NULL;
}

UDataTable* UKizokKizunaQuestStartResultMenu::GetQuestPurposeTextTable(int32 InQuestSeq) const {
    return NULL;
}

UDataTable* UKizokKizunaQuestStartResultMenu::GetQuestInfoTextTable(int32 InQuestSeq) const {
    return NULL;
}

UDataTable* UKizokKizunaQuestStartResultMenu::GetQuestClientTextTable() const {
    return NULL;
}

FKizokKizunaQuestPosterData UKizokKizunaQuestStartResultMenu::GetKizunaQuestPosterData() {
    return FKizokKizunaQuestPosterData{};
}

FKizokKizunaQuestStartResultMenuData UKizokKizunaQuestStartResultMenu::GetKizunaQuestData() {
    return FKizokKizunaQuestStartResultMenuData{};
}

FSoftObjectPath UKizokKizunaQuestStartResultMenu::GetItemIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokKizunaQuestStartResultMenu::GetCharaIcon(uint8 InIndex) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokKizunaQuestStartResultMenu::GetAccessoryIcon() const {
    return FSoftObjectPath{};
}

UKizokKizunaQuestStartResultMenu::UKizokKizunaQuestStartResultMenu() {
}

