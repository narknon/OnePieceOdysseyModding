#include "KizokBuildPointMenu.h"

void UKizokBuildPointMenu::SetBridgeId(FName InBridgeId) {
}

FText UKizokBuildPointMenu::GetMessageText(uint8 InIndex) const {
    return FText::GetEmpty();
}

FKizokBuildPointMenuMaterialItemData UKizokBuildPointMenu::GetMaterialItemData(int32 InIndex) const {
    return FKizokBuildPointMenuMaterialItemData{};
}

FSoftObjectPath UKizokBuildPointMenu::GetMaterialIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

FText UKizokBuildPointMenu::GetChoiceText(uint8 InIndex) const {
    return FText::GetEmpty();
}

FText UKizokBuildPointMenu::GetCharaName() const {
    return FText::GetEmpty();
}

bool UKizokBuildPointMenu::GetBuildBridgeChoice() const {
    return false;
}

bool UKizokBuildPointMenu::BuildEnable() const {
    return false;
}

void UKizokBuildPointMenu::BuildChoice(int32 InChoiceNo) {
}

UKizokBuildPointMenu::UKizokBuildPointMenu() {
    this->BridgeTableAsset = NULL;
}

