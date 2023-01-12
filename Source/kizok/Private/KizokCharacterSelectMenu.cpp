#include "KizokCharacterSelectMenu.h"

class UKizokButtonWidget;
class UPanelWidget;
class UHorizontalBox;

void UKizokCharacterSelectMenu::SwapCharacterData(int32 InIndexA, int32 InIndexB) {
}

void UKizokCharacterSelectMenu::SetGuestCharacterTextureIndex(int32 InDataIndex, int32 InFlagIndex) {
}

void UKizokCharacterSelectMenu::SetDispDetailMenu(bool bInDisp) {
}

void UKizokCharacterSelectMenu::SetCharacterTextureIndex(int32 InDataIndex, int32 InFlagIndex) {
}

int32 UKizokCharacterSelectMenu::RegisterButtonFromPanelWidgetAsMember(UPanelWidget* InPanelWidget, int32 InNum, EKizokCharacterSelectMemberType InMemberType) {
    return 0;
}

int32 UKizokCharacterSelectMenu::RegisterButtonFromHorizontalBoxAsMember(UHorizontalBox* InHorizontalBox, EKizokCharacterSelectMemberType InMemberType) {
    return 0;
}

bool UKizokCharacterSelectMenu::IsGuestCharacter(const UKizokButtonWidget* InButtonWidget) const {
    return false;
}

bool UKizokCharacterSelectMenu::IsDispDetailMenu() const {
    return false;
}

FSoftObjectPath UKizokCharacterSelectMenu::GetSubAndGuestCharaFace(uint8 InIndex) const {
    return FSoftObjectPath{};
}

int32 UKizokCharacterSelectMenu::GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const {
    return 0;
}

int32 UKizokCharacterSelectMenu::GetGuestCharacterDataNum() const {
    return 0;
}

FKizokCharacterSelectDispData UKizokCharacterSelectMenu::GetGuestCharacterData(int32 InIndex) const {
    return FKizokCharacterSelectDispData{};
}

int32 UKizokCharacterSelectMenu::GetFocusMemberIndex() const {
    return 0;
}

FSoftObjectPath UKizokCharacterSelectMenu::GetCharaFlag(uint8 InIndex) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokCharacterSelectMenu::GetCharaFace(uint8 InIndex) const {
    return FSoftObjectPath{};
}

int32 UKizokCharacterSelectMenu::GetCharacterDataNum() const {
    return 0;
}

FKizokCharacterSelectDispData UKizokCharacterSelectMenu::GetCharacterDataFromMemberIndex(int32 InMemberIndex) const {
    return FKizokCharacterSelectDispData{};
}

FKizokCharacterSelectDispData UKizokCharacterSelectMenu::GetCharacterData(int32 InIndex) const {
    return FKizokCharacterSelectDispData{};
}

UKizokButtonWidget* UKizokCharacterSelectMenu::GetButtonWidgetFromMemberIndex(int32 InMemberIndex) {
    return NULL;
}

FSoftObjectPath UKizokCharacterSelectMenu::GetButtonNumber(int32 InIndex) const {
    return FSoftObjectPath{};
}

void UKizokCharacterSelectMenu::FocusAllMember(bool bInFocus) {
}

void UKizokCharacterSelectMenu::ChangeFocusMember(int32 InFocusMemberIndex) {
}

UKizokCharacterSelectMenu::UKizokCharacterSelectMenu() {
}

