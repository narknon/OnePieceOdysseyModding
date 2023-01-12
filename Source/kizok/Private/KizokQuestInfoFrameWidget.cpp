#include "KizokQuestInfoFrameWidget.h"

class UKizokUserWidget;
class UVerticalBox;

UKizokUserWidget* UKizokQuestInfoFrameWidget::UpAllWaitQuestInfo() {
    return NULL;
}

void UKizokQuestInfoFrameWidget::SetQuestInfoVerticalBox(UVerticalBox* InVerticalBox) {
}

void UKizokQuestInfoFrameWidget::SetIsWait(bool bInIsWait) {
}




FSoftObjectPath UKizokQuestInfoFrameWidget::GetItemIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokQuestInfoFrameWidget::GetEnemyIcon() const {
    return FSoftObjectPath{};
}

void UKizokQuestInfoFrameWidget::CreateQuestInfoQueue() {
}

void UKizokQuestInfoFrameWidget::AddQuestInfoData(const FName& InQuestId) {
}

UKizokQuestInfoFrameWidget::UKizokQuestInfoFrameWidget() {
    this->SubQuestParamTableAsset = NULL;
    this->SubQuestTitleStringTableAsset = NULL;
    this->DisplayTime = 0.00f;
    this->QuestInfoWidgetClass = NULL;
    this->QuestInfoVerticalBox = NULL;
}

