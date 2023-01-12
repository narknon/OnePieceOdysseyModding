#include "KizokBonusDialogMenu.h"

class UScrollBox;

void UKizokBonusDialogMenu::RegisterBonusListScrollBox(UScrollBox* InScrollBox) {
}

void UKizokBonusDialogMenu::ReflectBonusDialogData() {
}


bool UKizokBonusDialogMenu::ExistNextData() const {
    return false;
}

UKizokBonusDialogMenu::UKizokBonusDialogMenu() {
    this->BonusListScrollLength = 0.00f;
    this->BonusItemWidget = NULL;
    this->BonusBerryWidget = NULL;
}

