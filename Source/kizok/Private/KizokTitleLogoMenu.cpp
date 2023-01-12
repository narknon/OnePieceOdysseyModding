#include "KizokTitleLogoMenu.h"

void UKizokTitleLogoMenu::StopTimer() {
}

void UKizokTitleLogoMenu::StartTimer() {
}

void UKizokTitleLogoMenu::SetIsOpenedFromMovie(bool bInIsOpenedFromMovie) {
}

void UKizokTitleLogoMenu::SetFinishFadeInAnimation(bool bInFinishFadeInAnimation) {
}




bool UKizokTitleLogoMenu::IsOpenedFromMovie() const {
    return false;
}

bool UKizokTitleLogoMenu::IsOpenDLCDialog() const {
    return false;
}

void UKizokTitleLogoMenu::CallOnTitleLogoFinishIn() {
}

void UKizokTitleLogoMenu::CallBindEvent() {
}

UKizokTitleLogoMenu::UKizokTitleLogoMenu() {
    this->WaitTime = 0.00f;
    this->StartDelayTime = 0.00f;
}

