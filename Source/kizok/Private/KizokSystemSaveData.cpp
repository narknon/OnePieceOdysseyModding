#include "KizokSystemSaveData.h"

FKizokSystemSaveData::FKizokSystemSaveData() {
    this->DataVersion = 0;
    this->MasterVolume = 0;
    this->SeVolume = 0;
    this->BgmVolume = 0;
    this->VoiceVolume = 0;
    this->ScreenIntensity = 0;
    this->bCameraAutoCorrection = false;
    this->CameraSpeed = 0;
    this->ReverseSetting = 0;
    this->ControllerType = 0;
    this->bMiniMapRotate = false;
    this->bAutoDash = false;
    this->bOpenKeyAssignUI = false;
    this->bAgreedEULA = false;
    this->AgreedPPVersion = 0;
    this->AgreedCeBankVersion = 0;
    this->bAgreedCeBank = false;
    this->bShowDLCDialog = false;
    this->bShowFirstSettingMenu = false;
    this->MajorVersion = 0;
    this->MinorVersion = 0;
}

