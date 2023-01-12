#include "KizokGimmick1stProtoFinishBox.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmick1stProtoFinishBox::ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmick1stProtoFinishBox::ActionAreaVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmick1stProtoFinishBox::AKizokGimmick1stProtoFinishBox() {
    this->Root = NULL;
    this->TargetMesh = NULL;
    this->ActionAreaVolume = NULL;
    this->ActionPos = NULL;
}

