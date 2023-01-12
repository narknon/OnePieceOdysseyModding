#include "KizokCaptureRoom.h"

class UImage;
class USceneCaptureComponent2D;

void AKizokCaptureRoom::StartCapture() {
}



void AKizokCaptureRoom::InitCaptureTargetImage(UImage* InImage) {
}

void AKizokCaptureRoom::FinishCapture() {
}

void AKizokCaptureRoom::CompletedTextureStreaming() {
}

void AKizokCaptureRoom::AddCaptureTargetCamera(USceneCaptureComponent2D* InCaptureTargetCamera) {
}

AKizokCaptureRoom::AKizokCaptureRoom() {
    this->CaptureTarget = NULL;
    this->CameraFOVAngle = 0.00f;
}

