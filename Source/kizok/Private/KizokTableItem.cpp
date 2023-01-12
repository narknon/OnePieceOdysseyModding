#include "KizokTableItem.h"

FKizokTableItem::FKizokTableItem() {
    this->ItemCategory = 0;
    this->List1Category = 0;
    this->List2Category = 0;
    this->UseScene = 0;
    this->TypeArea = 0;
    this->TypeParameter = ITEM_PARAMTYPE::NONE;
    this->Percentage = false;
    this->ChangeValue = 0.00f;
    this->Rule1Rate = 0.00f;
    this->Rule2Rate = 0.00f;
    this->Rule3Rate = 0.00f;
    this->Price = 0;
    this->NotSell = false;
    this->InvOrder = 0;
    this->UseBattle = 0;
    this->UseField = 0;
    this->UsedLost = 0;
    this->Target = ITEM_TARGET::FRIEND;
}

