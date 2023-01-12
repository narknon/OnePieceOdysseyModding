#include "KizokFormationMenu.h"

class UKizokButtonWidget;
class UCanvasPanel;


UKizokButtonWidget* UKizokFormationMenu::InitFormationList(UCanvasPanel* InCanvasPanel) {
    return NULL;
}

int32 UKizokFormationMenu::GetFormationPlacementCode(int32 InIndex) const {
    return 0;
}

FKizokFormationMenuDispData UKizokFormationMenu::GetFormationData(int32 InIndex) const {
    return FKizokFormationMenuDispData{};
}

UKizokFormationMenu::UKizokFormationMenu() {
    this->FormationTable = NULL;
    this->FormationStrTable = NULL;
}

