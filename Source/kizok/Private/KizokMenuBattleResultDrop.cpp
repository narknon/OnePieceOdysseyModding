#include "KizokMenuBattleResultDrop.h"





void UKizokMenuBattleResultDrop::SkipAnimation() {
}


void UKizokMenuBattleResultDrop::SettingItemDispData(FBtlResultItemDisp& out_info) {
}









bool UKizokMenuBattleResultDrop::IsPlayDispAnimation() {
    return false;
}

bool UKizokMenuBattleResultDrop::IsExistNextDispData() {
    return false;
}

bool UKizokMenuBattleResultDrop::IsExistItemData() {
    return false;
}


FText UKizokMenuBattleResultDrop::GetMoneyText() const {
    return FText::GetEmpty();
}

FSoftObjectPath UKizokMenuBattleResultDrop::GetMoneyIconPath() const {
    return FSoftObjectPath{};
}

FText UKizokMenuBattleResultDrop::GetItemName(FName ItemId) {
    return FText::GetEmpty();
}


FSoftObjectPath UKizokMenuBattleResultDrop::GetItemIconPath(int32 Category) const {
    return FSoftObjectPath{};
}

FText UKizokMenuBattleResultDrop::GetExpText() const {
    return FText::GetEmpty();
}

TArray<FBtlResultItemDisp> UKizokMenuBattleResultDrop::GetDropList() const {
    return TArray<FBtlResultItemDisp>();
}

FText UKizokMenuBattleResultDrop::GetAccessoryName(FName AccessoryId) {
    return FText::GetEmpty();
}

FSoftObjectPath UKizokMenuBattleResultDrop::GetAcceIconPath() const {
    return FSoftObjectPath{};
}




bool UKizokMenuBattleResultDrop::CreateDropItemList(int32 create_num) {
    return false;
}

UKizokMenuBattleResultDrop::UKizokMenuBattleResultDrop() {
    this->ItemListDispMaxNum = 4;
    this->CurrentItemAnimIndex = 0;
    this->bPlayDispAnimation = false;
    this->bVisibleSystemMessage = false;
    this->bSkipAnimation = false;
    this->ExpInAnimWaitTime = 0.00f;
    this->MoneyInAnimWaitTime = 0.00f;
    this->ItemInAnimWaitTime = 0.00f;
    this->NextItemInAnimStartTime = 0.00f;
    this->BaseExp = 0;
    this->BonusExp = 0;
    this->parentWidget = NULL;
}

