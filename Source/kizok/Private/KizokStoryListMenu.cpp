#include "KizokStoryListMenu.h"

class UKizokUserWidget;
class UScrollBox;
class UDataTable;

void UKizokStoryListMenu::RegisterStoryButtonGroup(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

void UKizokStoryListMenu::ReflectInfo(const TArray<FName>& InInfoIdList) {
}


UDataTable* UKizokStoryListMenu::GetStoryInfoTable() const {
    return NULL;
}

UDataTable* UKizokStoryListMenu::GetStoryGuideTable() const {
    return NULL;
}

FKizokStoryListMenuData UKizokStoryListMenu::GetStoryData(int32 InIndex) {
    return FKizokStoryListMenuData{};
}

UKizokStoryListMenu::UKizokStoryListMenu() {
    this->StoryGuideStringTableAsset = NULL;
    this->StoryInfoStringTableAsset = NULL;
}

