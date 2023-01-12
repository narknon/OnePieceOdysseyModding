#include "KizokStoryMenuFrame.h"

class UKizokQuestStartResultMenuBase;

void UKizokStoryMenuFrame::InitStoryMenuFrame(TArray<UKizokQuestStartResultMenuBase*> InQuestWidgetList) {
}

bool UKizokStoryMenuFrame::GetUpdateIconDispFlgList(int32 InIndex) const {
    return false;
}

FSoftObjectPath UKizokStoryMenuFrame::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

bool UKizokStoryMenuFrame::GetMenuReleaseFlg(int32 InIndex) const {
    return false;
}

UKizokStoryMenuFrame::UKizokStoryMenuFrame() {
    this->AreaOrderTableAsset = NULL;
}

