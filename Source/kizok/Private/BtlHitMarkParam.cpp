#include "BtlHitMarkParam.h"

FBtlHitMarkParam::FBtlHitMarkParam() {
    this->Type = EBtlMenuHitMark::HpDamege;
    this->MaxNum = 0;
    this->CurNum = 0;
    this->ChangeValue = 0;
    this->bCritical = false;
    this->TP1 = 0;
    this->TP2 = 0;
    this->bDmgUp = false;
    this->bDmgBoost = false;
    this->bDmgProtect = false;
}

