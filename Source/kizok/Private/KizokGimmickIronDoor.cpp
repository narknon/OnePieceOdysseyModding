#include "KizokGimmickIronDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickIronDoor::OutInteractArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickIronDoor::InInteractArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickIronDoor::AKizokGimmickIronDoor() {
    this->FadeOutTime = 15.00f;
    this->IsOpposite = false;
    this->ParticleAsset = NULL;
    this->m_pInteractArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Iron Door Interact Area"));
    this->m_pInPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Iron Door In Point"));
    this->m_pOutPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Iron Door Out Point"));
    this->m_pBreakMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Iron Door Break Mesh"));
    this->m_pBrokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Iron Door Broken Mesh"));
    this->m_pInCameraPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("In Camera Position"));
    this->m_pInLookPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("In Look Position"));
    this->m_pOutCameraPosition = NULL;
    this->m_pOutLookPosition = NULL;
}

