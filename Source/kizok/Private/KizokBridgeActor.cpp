#include "KizokBridgeActor.h"

AKizokBridgeActor::AKizokBridgeActor() {
    this->m_emu = NULL;
    this->BlockNumber = 5;
    this->SpringLength = 10.00f;
    this->SpringLength2 = 100.00f;
    this->Bottom = 5.00f;
    this->bAdjustBoneTree = true;
    this->EffectHeight = 200.00f;
    this->LimitX = 5.00f;
    this->LimitY = 30.00f;
    this->LimitZ = 100.00f;
    this->LimitPitch = 20.00f;
    this->LimitYaw = 5.00f;
    this->LimitRoll = 10.00f;
    this->HalfTime = 1.00f;
    this->MoveLimit = 10.00f;
    this->MovePowerX = 0.00f;
    this->MovePowerY = 10.00f;
    this->MovePowerZ = 0.05f;
    this->HorizentalShake = 0.15f;
    this->WaveFrequency = 1.00f;
    this->WaveLength = 1.00f;
    this->WaveSpeed = 1.00f;
    this->Influence = 0.50f;
    this->DampingTime = 5.00f;
    this->StopTime = 3.00f;
    this->bEnableGrav = true;
    this->PlayerWeight = 50.00f;
    this->AdjustAngleDegree = 270.00f;
}

