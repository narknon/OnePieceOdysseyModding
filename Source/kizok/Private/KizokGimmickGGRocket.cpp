#include "KizokGimmickGGRocket.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"

void AKizokGimmickGGRocket::SetRegistFlag(bool flag) {
}

AKizokGimmickGGRocket::AKizokGimmickGGRocket() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->TargetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GGRocket Mesh"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->LandedPoint = CreateDefaultSubobject<USphereComponent>(TEXT("Landed Posision"));
}

