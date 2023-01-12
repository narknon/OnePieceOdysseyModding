#include "KizokMessageWindowManager.h"

void UKizokMessageWindowManager::YesNoWindowMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::YesNoWindowMessage(FName Message, int32 default_select) {
}

void UKizokMessageWindowManager::YesNoWindow(int32 default_select) {
}

void UKizokMessageWindowManager::YesNoMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::YesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select, bool is_otther_window, const FString& head_line) {
}

void UKizokMessageWindowManager::YesNoMessageChar(FName chara_id, FName Message, int32 default_select, bool is_otther_window, const FString& head_line) {
}

void UKizokMessageWindowManager::YesNoMessage(FName Message, int32 default_select) {
}

void UKizokMessageWindowManager::YesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::YesNoHeadline(FName headline, FName Message, int32 default_select) {
}

void UKizokMessageWindowManager::StartCubeGetMenuEvent() {
}

void UKizokMessageWindowManager::SelectWindowStr(const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select) {
}

void UKizokMessageWindowManager::SelectMessageStr(const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select) {
}

void UKizokMessageWindowManager::SelectMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select, bool is_otther_window, const FString& head_line) {
}

void UKizokMessageWindowManager::SelectHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select) {
}

void UKizokMessageWindowManager::ResetMessage() {
}

bool UKizokMessageWindowManager::IsTalkEnd() {
    return false;
}

bool UKizokMessageWindowManager::IsMessageWindowOpen() {
    return false;
}

int32 UKizokMessageWindowManager::GetChoiceId() {
    return 0;
}

void UKizokMessageWindowManager::CurrentMessageEnd() {
}

void UKizokMessageWindowManager::ChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceWindowMessage(FName Message, FName select1, FName select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceWindow(FName select1, FName select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select, bool is_otther_window, const FString& head_line) {
}

void UKizokMessageWindowManager::ChoiceMessageChar(FName chara_id, FName Message, FName select1, FName select2, int32 default_select, bool is_otther_window, const FString& head_line) {
}

void UKizokMessageWindowManager::ChoiceMessage(FName Message, FName select1, FName select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::ChoiceHeadline(FName headline, FName Message, FName select1, FName select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_YesNoWindowStr(int32 default_select) {
}

void UKizokMessageWindowManager::BC_YesNoWindowMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_YesNoMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_YesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_YesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_SelectWindowStr(const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_SelectMessageStr(const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_SelectMessageCharStr(FName chara_id, const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_ResetMessage() {
}

bool UKizokMessageWindowManager::BC_IsMessageWindowOpen() {
    return false;
}

int32 UKizokMessageWindowManager::BC_GetChoiceId() {
    return 0;
}

void UKizokMessageWindowManager::BC_DebugYesNoWindowMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugYesNoMessageStr(const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugYesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugYesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugSelectWindowStr(const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugSelectMessageStr(const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugSelectMessageCharStr(FName chara_id, const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_DebugAddMessageStr(const FString& Message, float sec, bool isCursor, bool NewIsTalkEnd) {
}

void UKizokMessageWindowManager::BC_DebugAddHeadlineMessageStr(const FString& headline, const FString& Message, float sec) {
}

void UKizokMessageWindowManager::BC_DebugAddCharaMessageStr(FName chara_id, const FString& Message, float sec) {
}

void UKizokMessageWindowManager::BC_CurrentFieldMessageEnd() {
}

void UKizokMessageWindowManager::BC_ChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_ChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_ChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_ChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_ChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select) {
}

void UKizokMessageWindowManager::BC_AllFieldMessageEnd() {
}

void UKizokMessageWindowManager::BC_AddMessageStr(const FString& Message, float sec, bool isCursor, bool NewIsTalkEnd) {
}

void UKizokMessageWindowManager::BC_AddHeadlineMessageStr(const FString& headline, const FString& Message, float sec) {
}

void UKizokMessageWindowManager::BC_AddFieldMessageID(const FString& text_id, bool is_load_group, float sec, bool isCursor) {
}

void UKizokMessageWindowManager::BC_AddFieldMessage(const FString& Message, FName chara_id, float sec, bool isCursor) {
}

void UKizokMessageWindowManager::BC_AddCharaMessageStr(FName chara_id, const FString& Message, float sec) {
}

void UKizokMessageWindowManager::AllMessageEnd() {
}

void UKizokMessageWindowManager::AddMessageStr(const FString& Message, float sec, bool isCursor, bool talkEnd) {
}

void UKizokMessageWindowManager::AddMessage(FName Message, float sec, bool isCursor) {
}

void UKizokMessageWindowManager::AddHeadlineMessageStr(const FString& headline, const FString& Message, float sec, bool talkEnd) {
}

void UKizokMessageWindowManager::AddHeadlineMessage(FName headline, FName Message, float sec) {
}

void UKizokMessageWindowManager::AddFieldMessageStr(const FString& Message, FName chara_id, float sec, bool isCursor) {
}

void UKizokMessageWindowManager::AddFieldMessage(FName Message, FName chara_id, float sec, bool isCursor) {
}

void UKizokMessageWindowManager::AddCSMessageStr(const FString& Message, FName LabelID, FName Layout, FName FaceID, float sec) {
}

void UKizokMessageWindowManager::AddCSMessage(FName Message, FName LabelID, FName Layout, FName FaceID, float sec) {
}

void UKizokMessageWindowManager::AddCharaMessageStr(FName chara_id, const FString& Message, float sec, bool talkEnd) {
}

void UKizokMessageWindowManager::AddCharaMessage(FName chara_id, FName Message, float sec) {
}

UKizokMessageWindowManager::UKizokMessageWindowManager() {
    this->m_PushChoice = false;
    this->m_IsTextChangeControllerNPC = false;
}

