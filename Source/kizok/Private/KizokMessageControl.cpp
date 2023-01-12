#include "KizokMessageControl.h"

void UKizokMessageControl::StopTalkOnTheWay() {
}

void UKizokMessageControl::ResumeTalkOnTheWay() {
}

void UKizokMessageControl::RemoveMessageAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent) {
}

void UKizokMessageControl::PlayTalkOnTheWayByMessageId(FName InMessageId) {
}

void UKizokMessageControl::PlayScenarioBattleTalk(FName InMessageId) {
}

void UKizokMessageControl::PlayMessageWithChoiceByString(FText InMessage, const TArray<FText>& InChoiceList) {
}

void UKizokMessageControl::PlayMessageByMessageId(FName InMessageId) {
}

void UKizokMessageControl::PlayGroupMessageByMessageId(FName InMessageId) {
}

void UKizokMessageControl::OnPlayNextMessageEvent(int32 ChoiceNo) {
}

void UKizokMessageControl::OnMessageGetOtherParamEvent() {
}

void UKizokMessageControl::OnMessageEndPageEvent(int32 ChoiceNo) {
}

void UKizokMessageControl::OnMessageBeginPageEvent() {
}

bool UKizokMessageControl::IsShowTalkOnTheWay() {
    return false;
}

bool UKizokMessageControl::IsPlayingMessage() {
    return false;
}

int32 UKizokMessageControl::GetMessageChoiceNo() {
    return 0;
}

FKizokMessageGroupActionTableRow UKizokMessageControl::GetGroupMessageActionTableRow() {
    return FKizokMessageGroupActionTableRow{};
}

void UKizokMessageControl::ClearMessagePageEvent() {
}

void UKizokMessageControl::AddMessageOtherParamEvent(FKizokMessageControlOtherParamDelegate InEvent) {
}

void UKizokMessageControl::AddMessageEndPageEvent(FKizokMessageControlEndPageDelegate InEvent) {
}

void UKizokMessageControl::AddMessageDestroyEvent(FKizokOnDestroyWidgetDelegate InEvent, bool bInReserve) {
}

void UKizokMessageControl::AddMessageBeginPageEvent(FKizokMessageControlBeginPageDelegate InEvent) {
}

void UKizokMessageControl::AddMessageBeforeOpenEvent(FKizokTalkWindowBeforeOpenDelegate InEvent) {
}

void UKizokMessageControl::AddMessageAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent) {
}

void UKizokMessageControl::AddMessageAfterCloseEvent(FKizokTalkWindowAfterCloseDelegate InEvent) {
}

UKizokMessageControl::UKizokMessageControl() {
}

