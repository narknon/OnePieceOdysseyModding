#include "KizokConversationWidget.h"

class UObject;
class UKizokConversationWidget;
class UScrollBox;
class UDataTable;

void UKizokConversationWidget::UnbindSkipMessageEvent(const UObject* WorldContextObject) {
}

void UKizokConversationWidget::UnbindDisplayMessageEvent(const UObject* WorldContextObject) {
}

void UKizokConversationWidget::SetIsAllDeleteMessage(bool InFlag) {
}


void UKizokConversationWidget::SetConversationMessageMode(const UObject* WorldContextObject, EKizokConversationMessageMode InMode) {
}


void UKizokConversationWidget::RemoveWidget() {
}

void UKizokConversationWidget::RegisterScrollBox(UScrollBox* InScrollBox) {
}

void UKizokConversationWidget::RegisterMessageWithVoiceToTimeFromVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, const FName& InVoiceId) {
}

void UKizokConversationWidget::RegisterMessageWithVoiceFromTextIdToTimeFromVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, const FName& InVoiceId) {
}

void UKizokConversationWidget::RegisterMessageWithVoiceFromTextId(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, float InMessageTime, const FName& InVoiceId) {
}

void UKizokConversationWidget::RegisterMessageWithVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, float InMessageTime, const FName& InVoiceId) {
}

void UKizokConversationWidget::RegisterMessageFromTextId(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, float InMessageTime) {
}

void UKizokConversationWidget::RegisterMessageDataTable(const UObject* WorldContextObject, UDataTable* InMessageDataTable) {
}

void UKizokConversationWidget::RegisterMessage(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, float InMessageTime) {
}

void UKizokConversationWidget::RegisterFieldMessage(const UObject* WorldContextObject, const FName& InMessageKey) {
}


UKizokConversationWidget* UKizokConversationWidget::GetConversationWidget(const UObject* WorldContextObject) {
    return NULL;
}



void UKizokConversationWidget::ClearMessageDataTable(const UObject* WorldContextObject) {
}

void UKizokConversationWidget::BindSkipMessageEvent(const UObject* WorldContextObject, FKizokOnSkipMessageEvent InBindDelegate) {
}

void UKizokConversationWidget::BindLastRegisterMessageFinishEvent(const UObject* WorldContextObject, FKizokOnFinishMessageTimeEvent InBindDelegate) {
}

void UKizokConversationWidget::BindDisplayMessageEvent(const UObject* WorldContextObject, FKizokOnDisplayMessageEvent InBindDelegate) {
}


void UKizokConversationWidget::AllDeleteMessage(const UObject* WorldContextObject, bool IsStopVoice) {
}

UKizokConversationWidget::UKizokConversationWidget() {
    this->MessageDeleteTime = 0.00f;
    this->WidgetSpaceLength = 0.00f;
    this->ScrollTime = 0.00f;
    this->SimultaneousMaximumDisplay = 0;
    this->ScrollCurve = NULL;
    this->MessageTable = NULL;
}

