#include "KizokWindReflectionParam.h"

UKizokWindReflectionParam::UKizokWindReflectionParam() {
    this->bEnable = false;
    this->UpdateSpanMin = 1.00f;
    this->UpdateSpanMax = 10.00f;
    this->SinAngleSpeedMin = 1.00f;
    this->SinAngleSpeedMax = 50.00f;
    this->SinValueMin = 0.20f;
    this->SinWidthRatio = 1.00f;
    this->SinValueClampMin = 0.00f;
    this->SinValueClampMax = 1.00f;
}

