#include "KizokGimmickTreasure.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickTreasure::SetItemID(FName Num) {
}

void AKizokGimmickTreasure::Open() {
}

void AKizokGimmickTreasure::ItemObtain() {
}

bool AKizokGimmickTreasure::IsOpen() const {
    return false;
}

FName AKizokGimmickTreasure::GetItemID() const {
    return NAME_None;
}

void AKizokGimmickTreasure::Close() {
}

void AKizokGimmickTreasure::ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickTreasure::ActionAreaVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokGimmickTreasure::AccePossessOver() {
}

AKizokGimmickTreasure::AKizokGimmickTreasure() {
    this->MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Treasure Mesh Component"));
    this->ActionAreaVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ActionArea Volume"));
    this->InteractDir = CreateDefaultSubobject<UArrowComponent>(TEXT("Interact Direction"));
    this->AnimMontageOpen = NULL;
}

