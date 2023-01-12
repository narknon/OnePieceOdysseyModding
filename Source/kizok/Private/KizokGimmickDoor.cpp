#include "KizokGimmickDoor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickDoor::ResetAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickDoor::ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickDoor::ActionAreaVolumeBOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokGimmickDoor::ActionAreaVolumeAOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickDoor::AKizokGimmickDoor() {
    this->TargetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Treasure Mesh"));
    this->ActionAreaVolumeA = CreateDefaultSubobject<UBoxComponent>(TEXT("ActionArea Volume A"));
    this->ActionAreaVolumeB = CreateDefaultSubobject<UBoxComponent>(TEXT("ActionArea Volume B"));
    this->ResetAreaVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ResetArea Volume"));
    this->ActionPosA = CreateDefaultSubobject<UArrowComponent>(TEXT("Action Posision A"));
    this->ActionPosB = CreateDefaultSubobject<UArrowComponent>(TEXT("Action Posision B"));
    this->ActionOffset.AddDefaulted(9);
    this->OpenA = NULL;
    this->OpenB = NULL;
    this->CloseA = NULL;
    this->CloseB = NULL;
}

