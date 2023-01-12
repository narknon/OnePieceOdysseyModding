#include "KizokFieldPlayerUso.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

bool AKizokFieldPlayerUso::IsExistencePachinkoBall() {
    return false;
}

AKizokFieldPlayerUso::AKizokFieldPlayerUso() {
    this->FpsStName = TEXT("Fps00_St");
    this->FpsLpName = TEXT("Fps00_Lp");
    this->FpsEdName = TEXT("Fps00_Cancel_Ed");
    this->FpsShotName = TEXT("Fps00_Shot_Ed");
    this->FreeAtkShotName_Up = TEXT("Freeshot_Up");
    this->FreeAtkShotName_Fw = TEXT("Freeshot");
    this->FreeAtkShotName_Dw = TEXT("Freeshot_Dw");
    this->FreeAtkLpSpeed = 1.00f;
    this->FreeAtkLpBlendIn = 0.00f;
    this->FreeAtkLpBlendOut = 0.00f;
    this->FreeAtkEdSpeed = 1.00f;
    this->FreeAtkEdBlendIn = 0.00f;
    this->FreeAtkEdBlendOut = 0.00f;
    this->Bullet = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Uso Bullet"));
    this->FiringRate = 10.00f;
    this->ShootingSpeed = 10000.00f;
    this->m_ReserveBullet.AddDefaulted(10);
}

