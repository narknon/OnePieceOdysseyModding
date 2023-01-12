#include "KizokBridge.h"

void AKizokBridge::Test() {
}

void AKizokBridge::ChangeMode() {
}

AKizokBridge::AKizokBridge() {
    this->MyBoard = NULL;
    this->m_emu = NULL;
    this->m_actor = NULL;
    this->m_triggerBox = NULL;
    this->BlockNumber = 5;
    this->SpringLength = 10.00f;
    this->Bottom = 50.00f;
    this->MovePowerX = 1.00f;
    this->MovePowerY = 10.00f;
    this->MovePowerZ = 1.00f;
    this->HorizentalShake = 2.00f;
    this->WaveFrequency = 1.00f;
    this->WaveLength = 1.00f;
    this->WaveSpeed = 1.00f;
    this->Influence = 0.50f;
    this->DampingTime = 5.00f;
    this->StopTime = 3.00f;
    this->bEnableGrav = false;
    this->PlayerWeight = 10.00f;
    this->SpringLength2 = 100.00f;
    this->MassRate = 1.00f;
    this->MomentRate = 1.00f;
    this->TensionConst = 0.00f;
    this->TensionRate = 1.00f;
    this->MaxLengthRate = 1.50f;
    this->bEnableShurinkRepulsion = false;
    this->TensionConst2 = 0.00f;
    this->TensionRate2 = 1.00f;
    this->MaxLengthRate2 = 1.50f;
    this->bEnableShurinkRepulsion2 = false;
    this->LimitX = 5.00f;
    this->LimitY = 30.00f;
    this->LimitZ = 100.00f;
    this->LimitPitch = 20.00f;
    this->LimitYaw = 5.00f;
    this->LimitRoll = 10.00f;
    this->HalfTime = 1.00f;
    this->MoveLimit = 10.00f;
}

