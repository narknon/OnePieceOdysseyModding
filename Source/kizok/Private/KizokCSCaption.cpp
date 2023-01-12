#include "KizokCSCaption.h"

class UCanvasPanelSlot;
class UDataTable;

void UKizokCSCaption::SetMessagePosition(UCanvasPanelSlot* InCanvasPanelSlot, FName InLayout) {
}





UDataTable* UKizokCSCaption::GetMessageDataTable() const {
    return NULL;
}

UKizokCSCaption::UKizokCSCaption() {
    this->MessageTable = NULL;
    this->SystemEventListener = NULL;
}

