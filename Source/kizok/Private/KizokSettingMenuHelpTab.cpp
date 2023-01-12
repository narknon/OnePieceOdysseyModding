#include "KizokSettingMenuHelpTab.h"

class UScrollBox;

void UKizokSettingMenuHelpTab::SetPermitNotifyIcon(const bool InPermitNotifyIcon) {
}

void UKizokSettingMenuHelpTab::ResetScrollOffset(const UScrollBox* InScrollBox) {
}

void UKizokSettingMenuHelpTab::RegisterHelpSettingFromOriginScrollBox(const UScrollBox* InScrollBox) {
}

void UKizokSettingMenuHelpTab::OpenPlayMenu() {
}

bool UKizokSettingMenuHelpTab::IsPermitNotifyIcon() const {
    return false;
}

void UKizokSettingMenuHelpTab::DestroyPlayMenuCallBack() {
}

void UKizokSettingMenuHelpTab::CacheWidgetInfo(const UScrollBox* InScrollBox) {
}

UKizokSettingMenuHelpTab::UKizokSettingMenuHelpTab() {
    this->ButtonAssetClass = NULL;
    this->TextAssetClass = NULL;
    this->HelpParamTableAsset = NULL;
    this->HelpStringTitleTableAsset = NULL;
    this->HelpSettingListButtonGroupIndex = 0;
    this->bPermitNotifyIcon = false;
    this->bCachedScrollBoxInfo = false;
    this->bInitialize = false;
}

