#include "KizokNotifyCameraMoveParam.h"

FKizokNotifyCameraMoveParam::FKizokNotifyCameraMoveParam() {
    this->Roll = 0.00f;
    this->FOV = 0.00f;
    this->InterpTime = 0.00f;
    this->InterpType = INTERP_TYPE::INTERP_LINEAR;
    this->CharacterInScreen = false;
}

