#include "KizokSnipeTargetFruit.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokSnipeTargetFruit::ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokSnipeTargetFruit::ActionAreaVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokSnipeTargetFruit::AKizokSnipeTargetFruit() {
    this->sklMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Fruit Mesh"));
    this->HitVolume = CreateDefaultSubobject<USphereComponent>(TEXT("HitVolume"));
    this->Root = NULL;
    this->ownerTree = NULL;
    this->isActionTarget = false;
    this->IsActive = false;
    this->actionTargetEffect = NULL;
    this->hitEffect = NULL;
}

