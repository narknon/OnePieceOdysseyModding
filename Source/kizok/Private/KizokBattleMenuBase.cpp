#include "KizokBattleMenuBase.h"

class UKizokUserWidget;
class UImage;
class UPanelWidget;
class UKizokMenuBattleMain;
class UKizokTextBlock;
class UWidgetAnimation;

void UKizokBattleMenuBase::StartDirectAnim() {
}

void UKizokBattleMenuBase::SetWidgetOperate(bool bStart) {
}

void UKizokBattleMenuBase::SetKizokTextBlock(UKizokTextBlock* TextBlock, FName TextId) {
}

void UKizokBattleMenuBase::SetBattleParentWidget(UKizokMenuBattleMain* BattleMainWidget) {
}

void UKizokBattleMenuBase::ReRegisterButtonFromPanelWidget(UPanelWidget* InPanelWidget, int32 ButtonGroupId, int32 InNum, int32 InFocusIndex) {
}

int32 UKizokBattleMenuBase::RegisterButtonFromPanelWidgetAsList(UPanelWidget* InPanelWidget, UKizokUserWidget* InCursorWidget) {
    return 0;
}

void UKizokBattleMenuBase::PlayAnimGroupID(uint8 GroupID) {
}







void UKizokBattleMenuBase::MainMenuSetInputEnable(bool Enable) {
}

bool UKizokBattleMenuBase::IsValidWidgetAnimation(const UWidgetAnimation* InWidgetAnimation) {
    return false;
}

bool UKizokBattleMenuBase::IsValidSoftObjectPath(const FSoftObjectPath& InObjectPath) {
    return false;
}

bool UKizokBattleMenuBase::IsValidMainMenuWidget() {
    return false;
}

bool UKizokBattleMenuBase::IsValidDispBattleRapid() {
    return false;
}

bool UKizokBattleMenuBase::IsPlayingDirectAnim() {
    return false;
}

bool UKizokBattleMenuBase::IsDispTutorialMenu() {
    return false;
}


int32 UKizokBattleMenuBase::GetTutorialPhaseID() {
    return 0;
}

void UKizokBattleMenuBase::EndDirectAnim() {
}

void UKizokBattleMenuBase::AsyncLoadButtonGuide(UImage* InImage, const FName& InButtonGuideId) {
}

UKizokBattleMenuBase::UKizokBattleMenuBase() {
    this->ParentBattleMenu = NULL;
}

