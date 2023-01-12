#include "KizokQuestStartResultMenuBase.h"

class UKizokUserWidget;
class UDataTable;

void UKizokQuestStartResultMenuBase::SetParentWidget(UKizokUserWidget* InParentWidget) {
}

bool UKizokQuestStartResultMenuBase::IsStart() const {
    return false;
}

void UKizokQuestStartResultMenuBase::InitQuest(const FName& InQuestId, bool InIsStart) {
}

UDataTable* UKizokQuestStartResultMenuBase::GetQuestTable() const {
    return NULL;
}

UKizokUserWidget* UKizokQuestStartResultMenuBase::GetParentWidget() const {
    return NULL;
}

UKizokQuestStartResultMenuBase::UKizokQuestStartResultMenuBase() {
    this->QuestTableAsset = NULL;
}

