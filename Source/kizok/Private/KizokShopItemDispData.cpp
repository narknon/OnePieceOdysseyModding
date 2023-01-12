#include "KizokShopItemDispData.h"

FKizokShopItemDispData::FKizokShopItemDispData() {
    this->PossessNum = 0;
    this->ItemCategory = 0;
    this->Price = 0;
    this->ExchangeNum = 0;
    this->StockNum = 0;
    this->bLimited = false;
    this->bCanSell = false;
    this->UniqueId = 0;
    this->CursorState = EKizokShopCursorState::Rigth;
}

