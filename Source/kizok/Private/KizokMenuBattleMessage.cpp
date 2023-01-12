#include "KizokMenuBattleMessage.h"

class AKizokNewBattleMode;
class UKizokTextBlock;




void UKizokMenuBattleMessage::ShowTextBlockTime(UKizokTextBlock* TextBlock, FName TextId) {
}


void UKizokMenuBattleMessage::RemoveSystemMes(UKizokTextBlock* TextBlock) {
}

bool UKizokMenuBattleMessage::PopBtlText(FString& OutText, int32 InIndex) {
    return false;
}






void UKizokMenuBattleMessage::OnBindTextBlock(UKizokTextBlock* TextBlock) {
}

bool UKizokMenuBattleMessage::IsPlayBattleText() {
    return false;
}

bool UKizokMenuBattleMessage::IsExistBtlTextQueue() {
    return false;
}

void UKizokMenuBattleMessage::InitDataTable(AKizokNewBattleMode* BtlGameMode) {
}

void UKizokMenuBattleMessage::InitBtlVisibleTime() {
}

FName UKizokMenuBattleMessage::GetSystemMessageTextID(const EBtlMenuSystemMesType MessageType) const {
    return NAME_None;
}

int32 UKizokMenuBattleMessage::GetBtlTextQueueNum() {
    return 0;
}

void UKizokMenuBattleMessage::FinishBtlText() {
}


void UKizokMenuBattleMessage::ClearBtlText() {
}

UKizokMenuBattleMessage::UKizokMenuBattleMessage() {
    this->MesWindowGroupID = 0;
    this->bPlayBattleText = false;
    this->BtlTextVisibleTime = 0.00f;
    this->bInAnimation = false;
    this->DefaultVisibleTime = 0.00f;
    this->bChangeVisibleTime = false;
}

