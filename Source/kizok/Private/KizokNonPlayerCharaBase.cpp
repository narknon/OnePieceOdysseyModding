#include "KizokNonPlayerCharaBase.h"
#include "Components/PoseableMeshComponent.h"

AKizokNonPlayerCharaBase::AKizokNonPlayerCharaBase() {
    this->WearMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Wear"));
    this->FaceMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Face"));
    this->HeadMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Head"));
    this->BeardMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Beard"));
    this->AccessaryMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Accessary"));
}

