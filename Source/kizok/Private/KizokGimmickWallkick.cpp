#include "KizokGimmickWallkick.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickWallkick::ActionAreaVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickWallkick::ActionAreaVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickWallkick::AKizokGimmickWallkick() {
    this->m_pMesh0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh0"));
    this->m_pMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh1"));
    this->m_pActionAreaVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ActionArea Volume"));
    this->m_pActionPoint = CreateDefaultSubobject<USphereComponent>(TEXT("Action Posision"));
    this->m_pInteractPoint = CreateDefaultSubobject<USphereComponent>(TEXT("Interact Posision"));
    this->m_pCollision0 = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box0"));
    this->m_pCollision1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box1"));
}

