#include "KizokFieldPlayerChangeMenu.h"

class UKizokButtonWidget;
class UHorizontalBox;

bool UKizokFieldPlayerChangeMenu::IsLuffyJoinParty() const {
    return false;
}

void UKizokFieldPlayerChangeMenu::InitializePlayerChange(UHorizontalBox* InHorizontalBox) {
}

UKizokButtonWidget* UKizokFieldPlayerChangeMenu::GetSelectedButtonWidget() const {
    return NULL;
}

FSoftObjectPath UKizokFieldPlayerChangeMenu::GetCharaFlag(int32 InIndex) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokFieldPlayerChangeMenu::GetCharaFace(int32 InIndex) const {
    return FSoftObjectPath{};
}

FKizokCharacterSelectDispData UKizokFieldPlayerChangeMenu::GetCharacterDispData(int32 InIndex) const {
    return FKizokCharacterSelectDispData{};
}

void UKizokFieldPlayerChangeMenu::CompletedTextureStreaming() {
}

bool UKizokFieldPlayerChangeMenu::ChangePlayer(int32 InIndex) {
    return false;
}

void UKizokFieldPlayerChangeMenu::CallBackEndMenu() {
}

void UKizokFieldPlayerChangeMenu::CallBackChangeChara() {
}

UKizokFieldPlayerChangeMenu::UKizokFieldPlayerChangeMenu() {
}

