#include "KizokMaterialControl.h"

FKizokMaterialControl::FKizokMaterialControl() {
    this->Priority = EMaterialPriority::None;
    this->Type = EMaterialParamType::Float;
    this->Value = 0.00f;
}

