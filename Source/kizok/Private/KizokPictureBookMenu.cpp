#include "KizokPictureBookMenu.h"

class UKizokButtonWidget;
class UScrollBox;

void UKizokPictureBookMenu::SetItemButtonGroupIndex(int32 InIndex) {
}

void UKizokPictureBookMenu::SetEnemyListButtonGroupIndex(int32 InIndex) {
}

void UKizokPictureBookMenu::SetDescScrollAndPlayVoiceEnable(bool bInEnable) {
}

void UKizokPictureBookMenu::SetCameraOperationEnable(bool bInEnable) {
}

void UKizokPictureBookMenu::SetButtonWidgetPadding(UKizokButtonWidget* InButtonWidget) {
}

void UKizokPictureBookMenu::SetBookButtonGroupIndex(int32 InIndex) {
}

void UKizokPictureBookMenu::RegisterScrollInfoFromItemDesc(EKizokPictureBookType InType) {
}

void UKizokPictureBookMenu::PlayCharaVoice() {
}












void UKizokPictureBookMenu::LoadModel(bool bInNext) {
}

bool UKizokPictureBookMenu::IsVoicePlayable() const {
    return false;
}

void UKizokPictureBookMenu::InitDescScrollInfo(UScrollBox* InScrollBox, float InScrollInsideSize) {
}

bool UKizokPictureBookMenu::HiddenNoticeIcon(int32 InIndex) {
    return false;
}

FKizokEnemyBookData UKizokPictureBookMenu::GetEnemyData(int32 InIndex) {
    return FKizokEnemyBookData{};
}

EKizokPictureBookType UKizokPictureBookMenu::GetCurrentBookType() const {
    return EKizokPictureBookType::Chara;
}

bool UKizokPictureBookMenu::GetCompleteLoadModel() const {
    return false;
}

FKizokCharaBookData UKizokPictureBookMenu::GetCharaData(int32 InIndex) {
    return FKizokCharaBookData{};
}

void UKizokPictureBookMenu::CompletedModelSpawn() {
}

void UKizokPictureBookMenu::CompletedModelLoading() {
}

void UKizokPictureBookMenu::CompletedCharaVoiceLoading(uint8 InCharaVoiceIndex) {
}

void UKizokPictureBookMenu::AddItemScrollBoxList(UScrollBox* InScrollBox) {
}

UKizokPictureBookMenu::UKizokPictureBookMenu() {
    this->CaptureRoom = NULL;
    this->RotatingVelocity = 0.00f;
    this->MovingVelocity = 0.00f;
    this->DescScrollLength = 0.00f;
    this->CharaParamTableAsset = NULL;
    this->CharaStringTableAsset = NULL;
    this->EnemyParamTableAsset = NULL;
    this->EnemyStringTableAsset = NULL;
}

