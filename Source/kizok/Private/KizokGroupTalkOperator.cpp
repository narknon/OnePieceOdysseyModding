#include "KizokGroupTalkOperator.h"

void UKizokGroupTalkOperator::SkipGroupTalk() {
}

void UKizokGroupTalkOperator::PlayGroupTalkByGroupTalkSheetName(FName InGroupTalkSheetName) {
}

void UKizokGroupTalkOperator::OnPageFeedDuringWaitTime(int32 ChoiceNo) {
}

void UKizokGroupTalkOperator::OnMessageEndPage(int32 ChoiceNo) {
}

void UKizokGroupTalkOperator::OnMessageClose() {
}

void UKizokGroupTalkOperator::OnGroupTalkOtherEvent(const FName& Command, const FName& Params) {
}

void UKizokGroupTalkOperator::OnGroupTalkCompletedEvent() {
}

void UKizokGroupTalkOperator::OnGroupTalkButtonByNextEvent() {
}

void UKizokGroupTalkOperator::OnCameWaitTime() {
}

bool UKizokGroupTalkOperator::IsPlayGroupTalk() {
    return false;
}

void UKizokGroupTalkOperator::Debug_SkipGroupTalk() {
}

void UKizokGroupTalkOperator::ClearGroupTalkEvent() {
}

void UKizokGroupTalkOperator::AddGroupTalkOtherEvent(FKizokGroupTalkOtherDelegate InEvent) {
}

void UKizokGroupTalkOperator::AddGroupTalkCompletedEvent(FKizokGroupTalkCompletedDelegate InEvent) {
}

void UKizokGroupTalkOperator::AddGroupTalkButtonByNextEvent(FKizokGroupTalkButtonByNextDelegate InEvent) {
}

UKizokGroupTalkOperator::UKizokGroupTalkOperator() {
    this->MessageGroupTable = NULL;
    this->MessageGroupActionTable = NULL;
    this->GroupTalkTable = NULL;
}

